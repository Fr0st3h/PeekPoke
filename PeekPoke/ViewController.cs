using System;

using AppKit;
using Foundation;

using librpc;

using System.Text;
using System.IO;

using System.Linq;
using System.Collections.Generic;

using System.Net;
using System.Net.Sockets;
using System.Threading;
using SharpDisasm;
using Plugin.Clipboard;
using Newtonsoft.Json;


namespace PeekPoke
{

    public partial class ViewController : NSViewController
    {

        private ulong address
        {
            get
            {

                return Convert.ToUInt64(addrBox.StringValue.Trim().Replace("0x", ""), 16);
            }
        }

        public static string HexDump(byte[] bytes, int bytesPerLine = 16)
        {
            if (bytes == null) return "<null>";
            int bytesLength = bytes.Length;

            char[] HexChars = "0123456789ABCDEF".ToCharArray();

            int firstHexColumn =
                  8                   // 8 characters for the address
                + 3;                  // 3 spaces

            int firstCharColumn = firstHexColumn
                + bytesPerLine * 3       // - 2 digit for the hexadecimal value and 1 space
                + (bytesPerLine - 1) / 8 // - 1 extra space every 8 characters from the 9th
                + 2;                  // 2 spaces 

            int lineLength = firstCharColumn
                + bytesPerLine           // - characters to show the ascii value
                + Environment.NewLine.Length; // Carriage return and line feed (should normally be 2)

            char[] line = (new String(' ', lineLength - 2) + Environment.NewLine + "\n").ToCharArray();
            int expectedLines = (bytesLength + bytesPerLine - 1) / bytesPerLine;
            StringBuilder result = new StringBuilder(expectedLines * lineLength);

            for (int i = 0; i < bytesLength; i += bytesPerLine)
            {
                line[0] = HexChars[(i >> 28) & 0xF];
                line[1] = HexChars[(i >> 24) & 0xF];
                line[2] = HexChars[(i >> 20) & 0xF];
                line[3] = HexChars[(i >> 16) & 0xF];
                line[4] = HexChars[(i >> 12) & 0xF];
                line[5] = HexChars[(i >> 8) & 0xF];
                line[6] = HexChars[(i >> 4) & 0xF];
                line[7] = HexChars[(i >> 0) & 0xF];

                int hexColumn = firstHexColumn;
                int charColumn = firstCharColumn;

                for (int j = 0; j < bytesPerLine; j++)
                {
                    if (j > 0 && (j & 7) == 0) hexColumn++;
                    if (i + j >= bytesLength)
                    {
                        line[hexColumn] = ' ';
                        line[hexColumn + 1] = ' ';
                        line[charColumn] = ' ';
                    }
                    else
                    {
                        byte b = bytes[i + j];
                        line[hexColumn] = HexChars[(b >> 4) & 0xF];
                        line[hexColumn + 1] = HexChars[b & 0xF];
                        line[charColumn] = asciiSymbol(b);
                    }
                    hexColumn += 3;
                    charColumn++;
                }
                result.Append(line);
            }
            return result.ToString();

        }
        static char asciiSymbol(byte val)
        {
            if (val < 32) return '.';  // Non-printable ASCII
            if (val < 127) return (char)val;   // Normal ASCII
            // Handle the hole in Latin-1
            if (val == 127) return '.';
            if (val < 0x90) return "€.‚ƒ„…†‡ˆ‰Š‹Œ.Ž."[val & 0xF];
            if (val < 0xA0) return ".‘’“”•–—˜™š›œ.žŸ"[val & 0xF];
            if (val == 0xAD) return '.';   // Soft hyphen: this symbol is zero-width even in monospace fonts
            return (char)val;   // Normal Latin-1
        }


        private string[] GetDisassembly(ulong address, byte[] data)
        {
            List<string> sb = new List<string>();

            ArchitectureMode mode = SharpDisasm.ArchitectureMode.x86_64;

            Disassembler.Translator.IncludeAddress = true;
            Disassembler.Translator.IncludeBinary = true;

            Disassembler disasm = new Disassembler(data, mode, address, true);
            foreach (Instruction insn in disasm.Disassemble())
            {
                sb.Add(insn.ToString());
            }

            return sb.ToArray();
        }


        public ViewController(IntPtr handle) : base(handle)
        {

        }
        public static byte[] ToByteArray(String HexString)
        {
            int NumberChars = HexString.Length;
            byte[] bytes = new byte[NumberChars / 2];
            for (int i = 0; i < NumberChars; i += 2)
            {
                bytes[i / 2] = Convert.ToByte(HexString.Substring(i, 2), 16);
            }
            return bytes;
        }
        public static bool newMemory = false;
        private PS4RPC ps4 = null;
        //PS4DBG ps4;
        Process p;
        ProcessList pl;
        ScanTableDataSource scanTable;
        OutputTableDataSource outputTable;
        PTTableDataSource pTable;

        List<PeekTable> tableList = new List<PeekTable>();
        public override void ViewDidLoad()
        {
            base.ViewDidLoad();



              

            pTable = new PTTableDataSource();





            convertFrom.Font = NSFont.FromFontName("Courier", 13);
            outputTable = new OutputTableDataSource();
            outputTable.Outputs.Add(new Output("Welcome to PeekPoke by CMTFrosty! Version: 1.3"));

            OutPutTable.DataSource = outputTable;
            OutPutTable.Delegate = new OutputTableDelegate(outputTable);


            string zeroList = "";
            ps4 = new PS4RPC(ipTextBox.StringValue);

            scanTable = new ScanTableDataSource();


            for (int ad = 0; ad < 448; ad++){ 
                zeroList += "0,";

            }
            zeroList = zeroList.Remove(zeroList.Length - 1);
            int[] testt = zeroList.Split(',').Select(Int32.Parse).ToArray();
            byte[] myByteArray = new byte[testt.Length];
            
           //Console.WriteLine(testt.Length);
            for (int ad = 0; ad < testt.Length; ad++)
            {
                string toHex = string.Format("{1:x2}", (testt[ad] & 0xff00) >> 8, testt[ad] & 0xff).ToUpper();
                //Console.WriteLine(toHex);

                myByteArray[ad] = byte.Parse(toHex, System.Globalization.NumberStyles.AllowHexSpecifier);

            }
            testLabel.StringValue = HexDump(myByteArray);



            string[] lines = GetDisassembly(address, myByteArray);

            // get the rest of the lines
            StringBuilder sb = new StringBuilder();
            for (int i = 1; i < lines.Length; i++)
            {
                sb.AppendLine(lines[i]);
            }

            string after = sb.ToString();
            dissassField.Value = after;



             
        }
        public static bool colour = false;
        public static NSColor nsColor = NSColor.White;
        public static void Alert(string title, string body, NSAlertStyle style)
        {
            var alert = new NSAlert()
            {
                AlertStyle = style,
                InformativeText = body,
                MessageText = title,
            };
            alert.RunModal();
        }
        public void newOutPut(string output, NSColor color){
            if(!colour)
            colour = true;

            string finalOutput = string.Format("[{0:HH:mm:ss tt}]", DateTime.Now) + " " + output;

            nsColor = color;
            //OutPutTable.ScrollRowToVisible(OutPutTable.RowCount-1);
            outputTable.Outputs.Add(new Output(finalOutput));


            OutPutTable.DataSource = outputTable;
            OutPutTable.ReloadData();
            OutPutTable.ScrollRowToVisible(OutPutTable.RowCount-1);
            nsColor = color;
        }
        partial void connectBtn(NSObject sender)
        {

            try
            {

                ps4 = new PS4RPC(ipTextBox.StringValue);
                ps4.Connect();
                //ps4.Notify(222, "Connected to PeekPoke\nCreated by CMTFrosty");
                statusLabel.StringValue = "Status: Connected to PS4";
                newOutPut("Connected to PS4 with the IP: " + ipTextBox.StringValue, NSColor.White);
                pl = ps4.GetProcessList();
                foreach (Process process in pl.processes)
                {
                    processBox.Add((NSString)process.name);
                }
            }
            catch (Exception e)
            {
                newOutPut("Exception caught: " + e.GetType() + " : " + e.Message, NSColor.Yellow);
                Alert("Error!", "Check console for details", NSAlertStyle.Informational);
                statusLabel.StringValue = "Status: Error Connecting to PS4";
            }
        }

        partial void refreshProcess(NSObject sender)
        {
            try
            {
                if (ps4.IsConnected)
                {
                    processBox.RemoveAll();
                    foreach (Process process in pl.processes)
                    {
                        processBox.Add((NSString)process.name);
                    }
                }
                else
                {
                    Alert("Error: Not Connected", "Please connect to your PS4.", NSAlertStyle.Critical);
                    newOutPut("Error: Please connect to your PS4 first", NSColor.Red);
                }
            }
            catch (Exception e)
            {
                newOutPut("Exception caught: " + e.GetType() + " : " + e.Message, NSColor.Yellow);
                Alert("Error!", "Check console for details", NSAlertStyle.Informational);
                statusLabel.StringValue = "Status: Error Getting Processes";
            }
        }
        partial void rebootBtn(NSObject sender)
        {
            try
            {
                if (ps4.IsConnected)
                {
                    ps4.Reboot();
                    Alert("Successfully Rebooted", "Successfully rebooted PS4", NSAlertStyle.Informational);
                    newOutPut("Ps4 rebooted successfully", NSColor.White);
                }
                else
                {
                    Alert("Error: Not Connected", "Please connect to your PS4.", NSAlertStyle.Critical);
                    newOutPut("Error: Please connect to your PS4 first", NSColor.Red);
                }
            }
            catch (Exception e)
            {
                newOutPut("Exception caught: " + e.GetType() + " : " + e.Message, NSColor.Yellow);
                Alert("Error!", "Check console for details", NSAlertStyle.Informational);
                statusLabel.StringValue = "Status: Failed to reboot.";
            }
        }

        partial void disconnectBtn(NSObject sender)

        {
            try
            {
                if (ps4.IsConnected)
                {
                    ps4.Disconnect();
                    Alert("Successfully Disconnected", "Successfully disconnected from PS4", NSAlertStyle.Informational);
                    statusLabel.StringValue = "Status: Disconnected from PS4";
                    newOutPut("Disconnected from your PS4.", NSColor.White);
                }
                else
                {
                    Alert("Error: Not Connected", "Please connect to your PS4.", NSAlertStyle.Critical);
                    newOutPut("Error: Please connect to your PS4 first", NSColor.Red);
                }
            }
            catch (Exception e)
            {
                newOutPut("Exception caught: " + e.GetType() + " : " + e.Message, NSColor.Yellow);
                Alert("Error!", "Check console for details", NSAlertStyle.Informational);
                statusLabel.StringValue = "Status: Error while disconnecting from PS4";
            }
        }

        partial void attachProcess(NSObject sender)
        {
            try{
            bool foundProcess = false;
                if (ps4.IsConnected)
                {
                    foreach (Process process in pl.processes)
                    {
                        if (!foundProcess)
                        {
                            if (process.name == processBox.StringValue)
                            {
                                p = pl.FindProcess(processBox.StringValue);
                                foundProcess = true;
                                Alert("Successfully Attached", "Attached to " + processBox.StringValue, NSAlertStyle.Informational);
                                statusLabel.StringValue = "Status: Attached to " + processBox.StringValue;
                                //ps4.Notify(222, "Attached to " + processBox.StringValue);
                                newOutPut("Attached to the process: "+processBox.StringValue, NSColor.White);
                            }

                        }

                    }
                    if (!foundProcess)
                    {
                        Alert("Error Attaching, please retry", "failed to attached to process: " + processBox.StringValue, NSAlertStyle.Warning);
                        statusLabel.StringValue = "Status: Error, Cannot find " + processBox.StringValue;
                        //ps4.Notify(222, "Failed to attach to " + processBox.StringValue);
                        newOutPut("Error: Cannot find the process "+processBox.StringValue, NSColor.Red);
                    }

                }else{
                    newOutPut("Error: Please connect to your PS4 first", NSColor.Red);
                    Alert("Error: Not Connected", "Please connect to your PS4.", NSAlertStyle.Critical);
                }
            }
            catch (Exception e)
            {
                newOutPut("Exception caught: " + e.GetType() + " : " + e.Message, NSColor.Yellow);
                Alert("Error!", "Check console for details", NSAlertStyle.Informational);
                statusLabel.StringValue = "Status: Error Attaching to Process";
            }
        }

        public static byte[] jnkA = { };
        partial void grabMem(NSObject sender)
        {
            try
            {
                if (ps4.IsConnected)
                {
                    ulong address = Convert.ToUInt64(addrBox.StringValue, 0x10);



                    byte[] b = ps4.ReadMemory(p.pid, address, 448);
                    if (newMemory == false)
                    {
                        testLabel.StringValue = HexDump(b);
                    }

                    byte[] jnk = { };
                    jnk = b;
                    //Console.WriteLine("Set jnk to b");

                    string finalList = "";
                    string byteChanged = "";
                    int[] indexs = { 11, 14, 17, 20, 23, 26, 29, 32, 36, 39, 42, 45, 48, 51, 54, 57, 90, 93, 96, 99, 102, 105, 108, 111, 115, 118, 121, 124, 127, 130, 133, 136, 169, 172, 175, 178, 181, 184, 187, 190, 194, 197, 200, 203, 206, 209, 212, 215, 248, 251, 254, 257, 260, 263, 266, 269, 273, 276, 279, 282, 285, 288, 291, 294, 327, 330, 333, 336, 339, 342, 345, 348, 352, 355, 358, 361, 364, 367, 370, 373, 406, 409, 412, 415, 418, 421, 424, 427, 431, 434, 437, 440, 443, 446, 449, 452, 485, 488, 491, 494, 497, 500, 503, 506, 510, 513, 516, 519, 522, 525, 528, 531, 564, 567, 570, 573, 576, 579, 582, 585, 589, 592, 595, 598, 601, 604, 607, 610, 643, 646, 649, 652, 655, 658, 661, 664, 668, 671, 674, 677, 680, 683, 686, 689, 722, 725, 728, 731, 734, 737, 740, 743, 747, 750, 753, 756, 759, 762, 765, 768, 801, 804, 807, 810, 813, 816, 819, 822, 826, 829, 832, 835, 838, 841, 844, 847, 880, 883, 886, 889, 892, 895, 898, 901, 905, 908, 911, 914, 917, 920, 923, 926, 959, 962, 965, 968, 971, 974, 977, 980, 984, 987, 990, 993, 996, 999, 1002, 1005, 1038, 1041, 1044, 1047, 1050, 1053, 1056, 1059, 1063, 1066, 1069, 1072, 1075, 1078, 1081, 1084, 1117, 1120, 1123, 1126, 1129, 1132, 1135, 1138, 1142, 1145, 1148, 1151, 1154, 1157, 1160, 1163, 1196, 1199, 1202, 1205, 1208, 1211, 1214, 1217, 1221, 1224, 1227, 1230, 1233, 1236, 1239, 1242, 1275, 1278, 1281, 1284, 1287, 1290, 1293, 1296, 1300, 1303, 1306, 1309, 1312, 1315, 1318, 1321, 1354, 1357, 1360, 1363, 1366, 1369, 1372, 1375, 1379, 1382, 1385, 1388, 1391, 1394, 1397, 1400, 1433, 1436, 1439, 1442, 1445, 1448, 1451, 1454, 1458, 1461, 1464, 1467, 1470, 1473, 1476, 1479, 1512, 1515, 1518, 1521, 1524, 1527, 1530, 1533, 1537, 1540, 1543, 1546, 1549, 1552, 1555, 1558, 1591, 1594, 1597, 1600, 1603, 1606, 1609, 1612, 1616, 1619, 1622, 1625, 1628, 1631, 1634, 1637, 1670, 1673, 1676, 1679, 1682, 1685, 1688, 1691, 1695, 1698, 1701, 1704, 1707, 1710, 1713, 1716, 1749, 1752, 1755, 1758, 1761, 1764, 1767, 1770, 1774, 1777, 1780, 1783, 1786, 1789, 1792, 1795, 1828, 1831, 1834, 1837, 1840, 1843, 1846, 1849, 1853, 1856, 1859, 1862, 1865, 1868, 1871, 1874, 1907, 1910, 1913, 1916, 1919, 1922, 1925, 1928, 1932, 1935, 1938, 1941, 1944, 1947, 1950, 1953, 1986, 1989, 1992, 1995, 1998, 2001, 2004, 2007, 2011, 2014, 2017, 2020, 2023, 2026, 2029, 2032, 2065, 2068, 2071, 2074, 2077, 2080, 2083, 2086, 2090, 2093, 2096, 2099, 2102, 2105, 2108, 2111, 2144, 2147, 2150, 2153, 2156, 2159, 2162, 2165, 2169, 2172, 2175, 2178, 2181, 2184, 2187, 2190 };
                    int[] secondIndex = { 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 299, 300, 301, 302, 303, 304, 305, 306, 307, 308, 309, 310, 311, 312, 313, 314, 378, 379, 380, 381, 382, 383, 384, 385, 386, 387, 388, 389, 390, 391, 392, 393, 457, 458, 459, 460, 461, 462, 463, 464, 465, 466, 467, 468, 469, 470, 471, 472, 536, 537, 538, 539, 540, 541, 542, 543, 544, 545, 546, 547, 548, 549, 550, 551, 615, 616, 617, 618, 619, 620, 621, 622, 623, 624, 625, 626, 627, 628, 629, 630, 694, 695, 696, 697, 698, 699, 700, 701, 702, 703, 704, 705, 706, 707, 708, 709, 773, 774, 775, 776, 777, 778, 779, 780, 781, 782, 783, 784, 785, 786, 787, 788, 852, 853, 854, 855, 856, 857, 858, 859, 960, 861, 862, 863, 864, 865, 866, 867, 931, 932, 933, 934, 935, 936, 937, 938, 939, 940, 941, 942, 943, 944, 945, 946, 1010, 1011, 1012, 1013, 1014, 1015, 1016, 1017, 1018, 1019, 1020, 1021, 1022, 1023, 1024, 1025, 1089, 1090, 1091, 1092, 1093, 1094, 1095, 1096, 1097, 1098, 1099, 1100, 1101, 1102, 1103, 1104, 1168, 1169, 1170, 1171, 1172, 1173, 1174, 1175, 1176, 1177, 1178, 1179, 1180, 1181, 1182, 1183, 1247, 1248, 1249, 1250, 1251, 1252, 1253, 1254, 1255, 1256, 1257, 1258, 1259, 1260, 1261, 1262, 1326, 1327, 1328, 1329, 1330, 1331, 1332, 1333, 1334, 1335, 1336, 1337, 1338, 1339, 1340, 1341, 1405, 1406, 1407, 1408, 1409, 1410, 1411, 1412, 1413, 1414, 1415, 1416, 1417, 1418, 1419, 1420, 1453, 1455, 1456, 1457, 1458, 1459, 1460, 1461, 1462, 1463, 1464, 1465, 1466, 1467, 1468, 1469, 1563, 1564, 1565, 1566, 1567, 1568, 1569, 1570, 1571, 1572, 1573, 1574, 1575, 1576, 1577, 1578, 1642, 1643, 1644, 1645, 1646, 1647, 1648, 1649, 1650, 1651, 1652, 1653, 1654, 1655, 1656, 1657, 1721, 1722, 1723, 1724, 1725, 1726, 1727, 1728, 1729, 1730, 1731, 1732, 1733, 1734, 1735, 1736, 1800, 1801, 1802, 1803, 1804, 1805, 1806, 1807, 1808, 1809, 1810, 1811, 1812, 1813, 1814, 1815, 1879, 1880, 1881, 1882, 1883, 1884, 1885, 1886, 1887, 1888, 1889, 1890, 1891, 1892, 1893, 1894, 1958, 1959, 1960, 1961, 1962, 1963, 1964, 1965, 1966, 1967, 1968, 1969, 1970, 1971, 1972, 1973, 2037, 2038, 2039, 2040, 2041, 2042, 2023, 2044, 2045, 2046, 2047, 2048, 2049, 2050, 2051, 2052, 2116, 2117, 2118, 2119, 2120, 2121, 2122, 2123, 2124, 2125, 2126, 2127, 2128, 2129, 2130, 2131, 2195, 2196, 2197, 2198, 2199, 2200, 2201, 2202, 2203, 2204, 2205, 2206, 2207, 2208, 2209, 2210 };



                    if (newMemory == true)
                    {
                        Console.WriteLine("jnk Length: " + jnk.Length);
                        Console.WriteLine("jnkA Length: " + jnkA.Length);
                        for (int oof = 0; oof < jnk.Length; oof++)
                        {
                            if (jnk[oof] == jnkA[oof])
                            {
                                Console.WriteLine(jnk[oof] + " Matches " + jnkA[oof]);
                                finalList += jnkA[oof] + ",";
                            }
                            else
                            {
                                Console.WriteLine(jnk[oof] + " Doesn't Match " + jnkA[oof]);
                                finalList += jnkA[oof] + ",";
                                byteChanged += oof + ",";

                            }
                        }
                        finalList = finalList.Remove(finalList.Length - 1);

                        if (byteChanged.Length > 0)
                        {
                            byteChanged = byteChanged.Remove(byteChanged.Length - 1);
                        }
                        Console.WriteLine("Bytes Changed: " + byteChanged);
                        Console.WriteLine("Bytes Changed length: " + byteChanged.Length);

                        int[] byteChnged = { };
                        if (byteChanged.Length > 0)
                        {
                            byteChnged = byteChanged.Split(',').Select(Int32.Parse).ToArray();

                        }

                        int[] testt = finalList.Split(',').Select(Int32.Parse).ToArray();
                        byte[] myByteArray = new byte[testt.Length];


                        for (int ad = 0; ad < testt.Length; ad++)
                        {
                            string toHex = string.Format("{1:x2}", (testt[ad] & 0xff00) >> 8, testt[ad] & 0xff).ToUpper();
                            //Console.WriteLine(toHex);

                            myByteArray[ad] = byte.Parse(toHex, System.Globalization.NumberStyles.AllowHexSpecifier);

                        }
                        var sa = new NSMutableAttributedString(HexDump(jnk));
                        sa.AddAttribute(NSStringAttributeKey.ForegroundColor, NSColor.White, new NSRange(0, b.Length));

                        if (byteChanged.Length > 0)
                        {

                            Console.WriteLine("Byte Chnged Length:" + byteChnged.Length);
                            for (int oof = 0; oof < byteChnged.Length; oof++)
                            {
                                Console.WriteLine("Trying to set: " + indexs[byteChnged[oof]] + "To red");
                                sa.AddAttribute(NSStringAttributeKey.ForegroundColor, NSColor.Red, new NSRange(indexs[byteChnged[oof]], 2));
                                sa.AddAttribute(NSStringAttributeKey.ForegroundColor, NSColor.Red, new NSRange(secondIndex[byteChnged[oof]], 1));
                                //Console.WriteLine("Index: " + indexs[oof]);


                            }
                        }
                        testLabel.AttributedStringValue = sa;

                    }

                    if (newMemory == false)
                    {
                        newMemory = true;
                    }
                    jnkA = b;

                }
                else
                {
                    newOutPut("Error: Please connect to your PS4 first", NSColor.Red);
                    Alert("Error: Not Connected", "Please connect to your PS4.", NSAlertStyle.Critical);

                }
            }
            catch (Exception e)
            {
                newOutPut("Exception caught: " + e.GetType() + " : " + e.Message, NSColor.Yellow);
                Alert("Error!", "Check console for details", NSAlertStyle.Informational);
                statusLabel.StringValue = "Status: Error Peeking Memory";
            }
        }
        private byte[] StringToByteArray(string str)
        {
            System.Text.ASCIIEncoding enc = new System.Text.ASCIIEncoding();
            return enc.GetBytes(str);
        }
        partial void setMemBtn(NSObject sender)
        {
            try
            {
                if (ps4.IsConnected)
                {


                    if (setMemByteBox.StringValue.Length > 3)
                    {
                        string[] theList = { };
                        theList = setMemByteBox.StringValue.Split(' ').ToArray();
                        ulong hex1;
                        byte[] myByteArray = new byte[theList.Length];
                        for (int i = 0; i < theList.Length; i++)
                        {
                            Console.WriteLine(theList[i]);
                            hex1 = Convert.ToUInt64(theList[i], 0x10);
                            myByteArray[i] = Convert.ToByte(hex1);


                        }



                        ulong address = Convert.ToUInt64(setMemAddrBox.StringValue, 0x10);

                        ps4.WriteMemory(p.pid, address, myByteArray);
                        newOutPut("Successfully set Memory", NSColor.White);
                    }
                    else
                    {

                        ulong address = Convert.ToUInt64(setMemAddrBox.StringValue, 0x10);
                        byte byte1 = Convert.ToByte(setMemByteBox.StringValue);

                        ps4.WriteByte(p.pid, address, byte1);
                        newOutPut("Successfully set Memory", NSColor.White);
                    }

                }
                else
                {
                    Alert("Error: Not Connected", "Please connect to your PS4.", NSAlertStyle.Critical);
                    newOutPut("Error: Please connect to your PS4 first", NSColor.Red);
                }
            }
            catch (Exception e)
            {
                newOutPut("Exception caught: " + e.GetType() + " : " + e.Message, NSColor.Yellow);
                Alert("Error!", "Check console for details", NSAlertStyle.Informational);
                statusLabel.StringValue = "Status: Error Poking Memory";
            }
        }
        partial void setStringButtn(NSObject sender)
        {

            try
            {
                if (ps4.IsConnected)
                {
                    ulong address = Convert.ToUInt64(setStringAddr.StringValue, 0x10);
                    byte[] bytes = Encoding.ASCII.GetBytes("" + setStringString.StringValue + "\0");

                    ps4.WriteMemory(p.pid, address, bytes);
                    newOutPut("Successfully set String", NSColor.White);


                }
                else
                {
                    Alert("Error: Not Connected", "Please connect to your PS4.", NSAlertStyle.Critical);
                    newOutPut("Error: Please connect to your PS4 first", NSColor.Red);
                }
            }
            catch (Exception e)
            {
                newOutPut("Exception caught: " + e.GetType() + " : " + e.Message, NSColor.Yellow);
                Alert("Error!", "Check console for details", NSAlertStyle.Informational);
                statusLabel.StringValue = "Status: Error Poking Memory";
            }
        }


        partial void selectelf(NSObject sender)
        {
            try
            {
                string urltoFix = "";
                string finalURL = "";
                var panel = NSOpenPanel.OpenPanel;
                panel.FloatingPanel = true;
                panel.CanChooseDirectories = true;
                panel.CanChooseFiles = true;
                panel.AllowedFileTypes = new string[] { "elf" };
                int i = (int)panel.RunModal();
                if (i == 1 && panel.Urls != null)
                {
                    foreach (NSUrl url in panel.Urls)
                    {
                        //elfPath.StringValue = url.AbsoluteString;
                        Console.WriteLine(url.AbsoluteString);
                        urltoFix = url.AbsoluteUrl.ToString();

                    }
                    finalURL = urltoFix.Replace("file://", "");
                    finalURL = finalURL.Replace("%20", " ");
                    elfPath.StringValue = finalURL;
                   statusLabel.StringValue = "Status: Selected Elf File";
                    newOutPut("Selected the elf file "+finalURL, NSColor.White);

                }
            }
            catch (Exception e)
            {
                newOutPut("Exception caught: " + e.GetType() + " : " + e.Message, NSColor.Yellow);
                Alert("Error!", "Check console for details", NSAlertStyle.Informational);
                statusLabel.StringValue = "Status: Error selecting elf";
            }
        }


        partial void loadElf(NSObject sender)
        {
            try
            {
                if (elfPath.StringValue != "")
                {

                    if (ps4.IsConnected)
                    {
                        byte[] elfBytes = File.ReadAllBytes(elfPath.StringValue);
                        //ps4.LoadElf(p.pid, elfBytes);
                        newOutPut("Successfully loaded the Elf file", NSColor.White);
                        Alert("Success", "Elf loaded!", NSAlertStyle.Informational);
                        statusLabel.StringValue = "Status: Loaded Elf File " + elfPath.StringValue;
                        //ps4.Notify(222, "Elf loaded successfully!");


                    }
                    else
                    {
                        newOutPut("Error: Please connect to your PS4 first", NSColor.Red);
                        Alert("Error: Not Connected", "Please connect to your PS4.", NSAlertStyle.Critical);
                    }
                }else{
                    newOutPut("Error: Please select an elf file", NSColor.Red);
                    Alert("Error: No elf selected", "Please selecte an elf file before loading.", NSAlertStyle.Critical);
                }
            }
            catch(Exception e){
                newOutPut("Exception caught: " + e.GetType() + " : "+ e.Message, NSColor.Yellow);
                Alert("Error!", "Check console for details", NSAlertStyle.Informational);
            }
        }

        public void SendPayload(string IP, byte[] bytes, int port)
        {

                Socket socket = new Socket(AddressFamily.InterNetwork, SocketType.Stream, ProtocolType.Tcp);
                socket.Connect((EndPoint)new IPEndPoint(IPAddress.Parse(IP), port));
                socket.Send(bytes);
                socket.Close();

        }

        partial void sendPayloadBtn(NSObject sender)
        {
            try
            {
                statusLabel.StringValue = "Status: Sending JKPatch Payload...";
                SendPayload(ipTextBox.StringValue, File.ReadAllBytes("payload.bin"), 9020);
                newOutPut("JKPatch.bin sent", NSColor.White);
                Thread.Sleep(1000);
                statusLabel.StringValue = "Status: Sending JKPatch Elf...";
                newOutPut("Sending JKPatch.elf", NSColor.White);
                SendPayload(ipTextBox.StringValue, File.ReadAllBytes("kpayload.elf"), 9023);
                statusLabel.StringValue = "Status: JKPAtch Loaded";
                newOutPut("JKPatch loaded!", NSColor.White);

            }
            catch (Exception e)
            {
                newOutPut("Exception caught: " + e.GetType() + " : " + e.Message, NSColor.Yellow);
                Alert("Error!", "Check console for details", NSAlertStyle.Informational);
                statusLabel.StringValue = "Status: Error Sending Payload";
                newOutPut("Error: Failed to send payload. Make sure IP is correct and that Bin Loader on 5.05 is loaded.", NSColor.Red);
            }

        }





        //NEW

        partial void memScanButton(NSObject sender)
        {
            try
            {
                if (ps4.IsConnected)
                {
                    scanTable = new ScanTableDataSource();

                    ulong first = Convert.ToUInt64(memScanFrom.StringValue, 0x10);
                    ulong second = Convert.ToUInt64(memScanRange.StringValue, 0x10);

                    int firstInt = (int)first;
                    int secondInt = (int)second;
                    int final = secondInt - firstInt;

                    memScanTotalRange.StringValue = string.Format("0x{0:x}", final);

                    byte[] fromMem = ps4.ReadMemory(p.pid, first, final);




                    string[] toSearch = { };
                    toSearch = memScanValue.StringValue.Split(' ').ToArray();
                    ulong hex1;
                    byte[] byteSearch = new byte[toSearch.Length];
                    for (int i = 0; i < toSearch.Length; i++)
                    {
                        //Console.WriteLine(toSearch[i]);
                        if (memScanType.StringValue.Equals("Byte"))
                        {
                            hex1 = Convert.ToUInt64(toSearch[i], 0x10);
                            byteSearch[i] = Convert.ToByte(hex1);
                        }
                        else if (memScanType.StringValue.Equals("String"))
                        {
                            byteSearch = Encoding.Default.GetBytes(memScanValue.StringValue);


                        }
                        Console.WriteLine(byteSearch[i]);



                    }



                    int total = 0;
                    List<int> positions = SearchBytePattern(byteSearch, fromMem);
                    string[] test = { };

                    foreach (var item in positions)
                    {
                        total++;
                        scanTable.Products.Add(new Scan(memScanValue.StringValue, string.Format("0x{0:x}", firstInt + item)));


                        ScanTable.DataSource = scanTable;
                        ScanTable.Delegate = new ProductTableDelegate(scanTable);
                        //scanRes.Value = item.toS;


                    }
                    if (total > 0)
                    {
                        Alert("Matches found!", total + " Matches have been found!", NSAlertStyle.Informational);
                        newOutPut("Found " + total + " matches for " + memScanValue.StringValue, NSColor.White);

                    }
                    else
                    {
                        Alert("No Matches found.", "0 Matches have been found", NSAlertStyle.Critical);
                        newOutPut("No matches have been found for "+ memScanValue.StringValue, NSColor.White);
                    }
                }else{
                    newOutPut("Error: Please connect to your PS4 first", NSColor.Red);
                    Alert("Error: Not Connected", "Please connect to your PS4.", NSAlertStyle.Critical);
                }
            }
            catch (Exception e)
            {
                newOutPut("Exception caught: " + e.GetType() + " : " + e.Message, NSColor.Yellow);
                Alert("Error!", "Check console for details", NSAlertStyle.Informational);
            }

        }




        static public List<int> SearchBytePattern(byte[] pattern, byte[] bytes)
        {
            List<int> positions = new List<int>();
            int patternLength = pattern.Length;
            int totalLength = bytes.Length;
            byte firstMatchByte = pattern[0];
            for (int i = 0; i < totalLength; i++)
            {
                if (firstMatchByte == bytes[i] && totalLength - i >= patternLength)
                {
                    byte[] match = new byte[patternLength];
                    Array.Copy(bytes, i, match, 0, patternLength);
                    if (match.SequenceEqual<byte>(pattern))
                    {
                        positions.Add(i);
                        i += patternLength - 1;
                    }
                }
            }
            return positions;
        }

        partial void disassembleBtn(NSObject sender)
        {

            try
            {

                ulong address = Convert.ToUInt64(addrBox.StringValue, 0x10);



                byte[] fromMem = ps4.ReadMemory(p.pid, address, 448);
                string zeroList = "";


                for (int oof = 0; oof < fromMem.Length; oof++)
                {
                    zeroList += fromMem[oof] + ",";
                }
                zeroList = zeroList.Remove(zeroList.Length - 1);
                int[] testt = zeroList.Split(',').Select(Int32.Parse).ToArray();
                byte[] myByteArray = new byte[testt.Length];

                //Console.WriteLine(testt.Length);
                for (int ad = 0; ad < testt.Length; ad++)
                {
                    string toHex = string.Format("{1:x2}", (testt[ad] & 0xff00) >> 8, testt[ad] & 0xff).ToUpper();
                    //Console.WriteLine(toHex);

                    myByteArray[ad] = byte.Parse(toHex, System.Globalization.NumberStyles.AllowHexSpecifier);

                }



                string[] lines = GetDisassembly(address, myByteArray);

                // get the rest of the lines
                StringBuilder sb = new StringBuilder();
                for (int i = 1; i < lines.Length; i++)
                {
                    sb.AppendLine(lines[i]);
                }

                string after = sb.ToString();
                dissassField.Value = after;
            }
            catch (Exception e)
            {
                newOutPut("Exception caught: " + e.GetType() + " : " + e.Message, NSColor.Yellow);
                Alert("Error!", "Check console for details", NSAlertStyle.Informational);
            }
        }


        partial void copyValue(NSObject sender)
        {
            try
            {

                CrossClipboard.Current.SetText(scanTable.Products[(int)ScanTable.SelectedRow].Value);
            }
            catch (Exception e)
            {
                newOutPut("Exception caught: " + e.GetType() + " : " + e.Message, NSColor.Yellow);
                Alert("Error!", "Check console for details", NSAlertStyle.Informational);
            }

        }
        partial void copyAddress(NSObject sender)
        {
            try
            {
                CrossClipboard.Current.SetText(scanTable.Products[(int)ScanTable.SelectedRow].Offset);
            }
            catch (Exception e)
            {
                newOutPut("Exception caught: " + e.GetType() + " : " + e.Message, NSColor.Yellow);
                Alert("Error!", "Check console for details", NSAlertStyle.Informational);
            }
        }
        partial void discordBtn(NSObject sender)
        {
            try
            { 
                NSWorkspace.SharedWorkspace.OpenUrl(new NSUrl("https://discord.gg/xtaZ8Pu"));
            }
            catch (Exception e)
            {
                newOutPut("Exception caught: " + e.GetType() + " : " + e.Message, NSColor.Yellow);
                Alert("Error!", "Check console for details", NSAlertStyle.Informational);
            }

        }
        partial void clearBtn(NSObject sender)
        {
            try{
                scanTable = new ScanTableDataSource();
            }
            catch (Exception e)
            {
                newOutPut("Exception caught: " + e.GetType() + " : " + e.Message, NSColor.Yellow);
                Alert("Error!", "Check console for details", NSAlertStyle.Informational);
            }
        }
        public string intToHex(int value)
        {
            return String.Format("0x{0:X}", value);
        }
        public static byte[] FromHex(string hex)
        {
            hex = hex.Replace(" ", "");
            byte[] raw = new byte[hex.Length / 2];
            for (int i = 0; i < raw.Length; i++)
            {
                raw[i] = Convert.ToByte(hex.Substring(i * 2, 2), 16);
            }
            return raw;
        }
        //Convert
        public float floatConversion(byte[] bytes)
        {
            if (BitConverter.IsLittleEndian)
            {
                Array.Reverse(bytes); // Convert big endian to little endian
            }
            float myFloat = BitConverter.ToSingle(bytes, 0);
            return myFloat;
        }
        static string Int32ToBigEndianHexByteString(Int32 i)
        {
            byte[] bytes = BitConverter.GetBytes(i);
            string format = BitConverter.IsLittleEndian
                ? "0x{3:X2} 0x{2:X2} 0x{1:X2} 0x{0:X2}"
                : "0x{0:X2} 0x{1:X2} 0x{2:X2} 0x{3:X2}";
            return String.Format(format, bytes[0], bytes[1], bytes[2], bytes[3]);
        }
        private int HexToDec(string hexValue)
        {
            char[] values = hexValue.ToUpperInvariant().ToCharArray();
            Array.Reverse(values);
            int result = 0;
            string reference = "0123456789ABCDEF";

            for (int i = 0; i < values.Length; i++)
                result += (int)(reference.IndexOf(values[i]) * Math.Pow(16d, (double)i));

            return result;
        }
        partial void convertBtn(NSObject sender)
        {
            convertResults.PlaceholderString = "Results";
            convertResults.StringValue = "";
            try
            {
                if (convertFromItems.StringValue.Equals("Hex"))
                {//BYTE
                    if (convertToItems.StringValue.Equals("String"))
                    {
                        byte[] data = FromHex(convertFrom.String);
                        string s = "";

                        for (int i = 0; i < data.Length; i++)
                        {
                            s += asciiSymbol(data[i]).ToString();
                        }

                        convertResults.StringValue = s;

                    }
                    else if (convertToItems.StringValue.Equals("Decimal"))
                    {
                        String toConvert = "";
                        if (convertFrom.String.Contains(""))
                        {
                            toConvert = convertFrom.String.Replace(" ", "");
                            int value = Convert.ToInt32(toConvert, 16);
                            convertResults.StringValue = value.ToString();
                        }
                        else
                        {
                            int value = Convert.ToInt32(convertFrom.String, 16);
                            convertResults.StringValue = value.ToString();
                        }

                    }
                    else
                    {
                        Alert("Error!", "No need to convert Hex to Hex", NSAlertStyle.Informational);

                    }

                }
                else if (convertFromItems.StringValue.Equals("String"))
                {
                    if (convertToItems.StringValue.Equals("Hex"))
                    {
                        byte[] ba = Encoding.Default.GetBytes(convertFrom.String);
                        var hexString = BitConverter.ToString(ba);
                        hexString = hexString.Replace("-", " ");
                        convertResults.StringValue = hexString;


                    }
                    else if (convertToItems.StringValue.Equals("Decimal"))
                    {
                        string[] groups = convertFrom.String.Split();
                        long result = 0;
                        foreach (string hexGroup in groups)
                        {
                            result = 256 * result + Int32.Parse(hexGroup);
                        }
                        Console.WriteLine(result);
                        convertResults.StringValue = result.ToString();
                    }
                    else
                    {
                        Alert("Error!", "No need to convert String to String", NSAlertStyle.Informational);

                    }
                }
                else if (convertFromItems.StringValue.Equals("Decimal"))
                {

                    if (convertToItems.StringValue.Equals("Hex"))
                    {
                        int x = 0;
                        string final = "";
                        string hexValue = "";
                        string[] textbox = convertFrom.String.Split(' ').ToArray();
                        for (int i = 0; i < textbox.Length; i++)
                        {
                            x = Int32.Parse(textbox[i]);
                            hexValue = String.Format("0x{0:X}", x);
                            final += hexValue + " ";
                        }

                        convertResults.StringValue = final;

                    }
                    else if (convertToItems.StringValue.Equals("String"))
                    {
                        convertResults.StringValue = convertFrom.String.ToString();
                    }
                    else
                    {
                        Alert("Error!", "No need to convert Decimal to Decimal", NSAlertStyle.Informational);

                    }


                }


                else
                {
                    Alert("Error!", "Cannot find type", NSAlertStyle.Critical);
                }



            }
            catch (Exception e)
            {
                convertResults.StringValue = "Error: " + e.Message;
                newOutPut("Exception caught: " + e.GetType() + " : " + e.Message, NSColor.Yellow);
                Alert("Error!", "Check console for details", NSAlertStyle.Informational);

            }
        }

        partial void clearOutput(NSObject sender)
        {
            colour = false;
            outputTable = new OutputTableDataSource();


            OutPutTable.DataSource = outputTable;
            OutPutTable.Delegate = new OutputTableDelegate(outputTable);

        }

        partial void insertToTable(NSObject sender)
        {
            try{
                    if (addressTable.StringValue == "")
                    {
                        newOutPut("Error: Address cannot be null", NSColor.Red);
                    }
                    else if (descTable.StringValue == "")
                    {
                        newOutPut("Error: Description cannot be null", NSColor.Red);
                    }
                    else
                    {
                        pTable.Offsets.Add(new PTTable(addressTable.StringValue, descTable.StringValue, typeTable.StringValue));

                    }
                

                   
            }catch(Exception e){
                newOutPut("Exception caught: " + e.GetType() + " : " + e.Message, NSColor.Yellow);
                Alert("Error!", "Check console for details", NSAlertStyle.Informational);
            }


            ptTable.DataSource = pTable;
            if (!firstRun)
            {
                ptTable.Delegate = new PTTableDelegate(pTable);
                firstRun = true;
            }else{
                ptTable.ReloadData();

            }
        }
        public static bool firstRun = false;

        partial void savePTTable(NSObject sender)
        {
            try
            {
                Console.WriteLine(pTable.Offsets[0].Address);
                //Console.WriteLine(pTable.Offsets.Count);
                List<PeekTable> list = new List<PeekTable>();
                for (int i = 0; i < pTable.Offsets.Count; i++)
                {
                    PeekTable ye = new PeekTable() { Address = pTable.Offsets[i].Address, Description = pTable.Offsets[i].Description, Type = pTable.Offsets[i].Type };
                    list.Add(ye);
                }

                string str = JsonConvert.SerializeObject(list);

                TextWriter writer;
                if (ptTableSaveName.StringValue == "")
                {
                    newOutPut("Error: File name not specified. Please specify the .json file name before saving", NSColor.Red);
                }
                else
                {
                    using (writer = new StreamWriter(@Directory.GetCurrentDirectory() + "../../../../" + ptTableSaveName.StringValue + ".json", append: false))
                    {


                        writer.WriteLine(str);
                        newOutPut(ptTableSaveName.StringValue + ".json" + " has been saved to where the PeekPoke.app is", NSColor.White);
                    }

                }
            

            }
            catch(Exception e){
                newOutPut("Exception caught: " + e.GetType() + " : " + e.Message, NSColor.Yellow);
                Alert("Error!", "Check console for details", NSAlertStyle.Informational);
            }
        }
        public static String finalURL = "";
        partial void ptTableSelect(NSObject sender)
        {
            try
            {
                Alert("Warning", "Loading a PT Table will clear whats currently in the table", NSAlertStyle.Critical);
                string urltoFix = "";
                var panel = NSOpenPanel.OpenPanel;
                panel.FloatingPanel = true;
                panel.CanChooseDirectories = true;
                panel.CanChooseFiles = true;
                panel.AllowedFileTypes = new string[] { "json" };
                int i = (int)panel.RunModal();
                if (i == 1 && panel.Urls != null)
                {
                    foreach (NSUrl url in panel.Urls)
                    {
                        //elfPath.StringValue = url.AbsoluteString;
                        Console.WriteLine(url.AbsoluteString);
                        urltoFix = url.AbsoluteUrl.ToString();

                    }
                    finalURL = urltoFix.Replace("file://", "");
                    finalURL = finalURL.Replace("%20", " ");
                    ptTableFilePath.StringValue = finalURL;
                    statusLabel.StringValue = "Status: Selected PT Table file ";
                    newOutPut("Selected the PT Table file " + finalURL, NSColor.White);

                }
            }
            catch (Exception e)
            {
                newOutPut("Exception caught: " + e.GetType() + " : " + e.Message, NSColor.Yellow);
                Alert("Error!", "Check console for details", NSAlertStyle.Informational);
                statusLabel.StringValue = "Status: Error selecting PT Table file";
            }
        }

        partial void loadPTTable(NSObject sender)
        {
            try
            {

                if (finalURL == "")
                {
                    newOutPut("Error: Please select a PT Table (.json) before loading", NSColor.Red);

                }
                else
                {
                    pTable = new PTTableDataSource();
                    List<PeekTable> items;
                    using (StreamReader r = new StreamReader(finalURL))
                    {
                        string json = r.ReadToEnd();
                        items = JsonConvert.DeserializeObject<List<PeekTable>>(json);
                    }
                    foreach (var item in items)
                    {
                        pTable.Offsets.Add(new PTTable(item.Address, item.Description, item.Type));
                    }

                    ptTable.DataSource = pTable;
                    ptTable.Delegate = new PTTableDelegate(pTable);
                    ptTable.ReloadData();
                    newOutPut("Successfully loaded the PT Table", NSColor.White);
                }
            }
            catch(Exception e){
                newOutPut("Exception caught: " + e.GetType() + " : " + e.Message, NSColor.Yellow);
                Alert("Error!", "Check console for details", NSAlertStyle.Informational);
            }

        }


        partial void ptTableClear(NSObject sender)
        {
            try{
            pTable = new PTTableDataSource();
            ptTable.DataSource = pTable;
            ptTable.Delegate = new PTTableDelegate(pTable);
            ptTable.ReloadData();
            }catch(Exception e){
                newOutPut("Exception caught: " + e.GetType() + " : " + e.Message, NSColor.Yellow);
                Alert("Error!", "Check console for details", NSAlertStyle.Informational);
            }
        }

        public override NSObject RepresentedObject
        {
            get
            {
                return base.RepresentedObject;

            }
            set
            { 
                base.RepresentedObject = value;
                // Update the view, if already loaded.
            }
        }
    }
}