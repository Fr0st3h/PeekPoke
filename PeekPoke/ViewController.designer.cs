// WARNING
//
// This file has been generated automatically by Visual Studio to store outlets and
// actions made in the UI designer. If it is removed, they will be lost.
// Manual changes to this file may not be handled correctly.
//
using Foundation;
using System.CodeDom.Compiler;

namespace PeekPoke
{
	[Register ("ViewController")]
	partial class ViewController
	{
		[Outlet]
		AppKit.NSTextField addrBox { get; set; }

		[Outlet]
		AppKit.NSTextField addressTable { get; set; }

		[Outlet]
		AppKit.NSTextField bpIndex { get; set; }

		[Outlet]
		AppKit.NSStepper bpStepper { get; set; }

		[Outlet]
		AppKit.NSTextFieldCell byteBoxx { get; set; }

		[Outlet]
		AppKit.NSTextField bytes { get; set; }

		[Outlet]
		AppKit.NSButton clearWP { get; set; }

		[Outlet]
		AppKit.NSComboBox comPort { get; set; }

		[Outlet]
		AppKit.NSTextView convertFrom { get; set; }

		[Outlet]
		AppKit.NSComboBox convertFromItems { get; set; }

		[Outlet]
		AppKit.NSTextField convertResults { get; set; }

		[Outlet]
		AppKit.NSTextField convertTo { get; set; }

		[Outlet]
		AppKit.NSComboBox convertToItems { get; set; }

		[Outlet]
		AppKit.NSTextField descTable { get; set; }

		[Outlet]
		AppKit.NSTextField dissassembleField { get; set; }

		[Outlet]
		AppKit.NSTextView dissassField { get; set; }

		[Outlet]
		AppKit.NSTextField elfPath { get; set; }

		[Outlet]
		AppKit.NSButton filterTextUart { get; set; }

		[Outlet]
		AppKit.NSButton getMemory { get; set; }

		[Outlet]
		AppKit.NSButton grabMemTable { get; set; }

		[Outlet]
		AppKit.NSTextView hexView { get; set; }

		[Outlet]
		AppKit.NSTextView idk { get; set; }

		[Outlet]
		AppKit.NSScrollView idkLOL { get; set; }

		[Outlet]
		AppKit.NSTextField instructionField { get; set; }

		[Outlet]
		AppKit.NSTextField ipTextBox { get; set; }

		[Outlet]
		AppKit.NSTextView justATest { get; set; }

		[Outlet]
		AppKit.NSScrollView justTes { get; set; }

		[Outlet]
		AppKit.NSView mainWindow { get; set; }

		[Outlet]
		AppKit.NSTextField memScanFrom { get; set; }

		[Outlet]
		AppKit.NSProgressIndicator memScanProgress { get; set; }

		[Outlet]
		AppKit.NSTextField memScanRange { get; set; }

		[Outlet]
		AppKit.NSTextField memScanTotalRange { get; set; }

		[Outlet]
		AppKit.NSComboBox memScanType { get; set; }

		[Outlet]
		AppKit.NSTextField memScanValue { get; set; }

		[Outlet]
		AppKit.NSTableView OutPutTable { get; set; }

		[Outlet]
		AppKit.NSComboBox processBox { get; set; }

		[Outlet]
		AppKit.NSTableView ptTable { get; set; }

		[Outlet]
		AppKit.NSTextField ptTableFilePath { get; set; }

		[Outlet]
		AppKit.NSTextField ptTableSaveName { get; set; }

		[Outlet]
		AppKit.NSTextView scanRes { get; set; }

		[Outlet]
		AppKit.NSTableView ScanTable { get; set; }

		[Outlet]
		AppKit.NSTableColumn scanTableOffset { get; set; }

		[Outlet]
		AppKit.NSTableColumn scanTableValue { get; set; }

		[Outlet]
		AppKit.NSView selectPTTable { get; set; }

		[Outlet]
		AppKit.NSTextField setMemAddrBox { get; set; }

		[Outlet]
		AppKit.NSTextField setMemByteBox { get; set; }

		[Outlet]
		AppKit.NSTextField setStringAddr { get; set; }

		[Outlet]
		AppKit.NSButton setStringBtn { get; set; }

		[Outlet]
		AppKit.NSTextField setStringString { get; set; }

		[Outlet]
		AppKit.NSTextField statusLabel { get; set; }

		[Outlet]
		AppKit.NSClipView test { get; set; }

		[Outlet]
		AppKit.NSScrollView testin { get; set; }

		[Outlet]
		AppKit.NSCollectionView testing { get; set; }

		[Outlet]
		AppKit.NSTextFieldCell testingAGAIN { get; set; }

		[Outlet]
		AppKit.NSTextFieldCell testingText { get; set; }

		[Outlet]
		AppKit.NSTextField testinLOL { get; set; }

		[Outlet]
		AppKit.NSTextField testLabel { get; set; }

		[Outlet]
		AppKit.NSTextField textToFilter { get; set; }

		[Outlet]
		AppKit.NSTextField textView { get; set; }

		[Outlet]
		AppKit.NSComboBox typeTable { get; set; }

		[Outlet]
		AppKit.NSScrollView uartOutputBox { get; set; }

		[Outlet]
		AppKit.NSTextField wpIndex { get; set; }

		[Outlet]
		AppKit.NSComboBox wpLength { get; set; }

		[Outlet]
		AppKit.NSStepper wpStepper { get; set; }

		[Outlet]
		AppKit.NSComboBox wpType { get; set; }

		[Action ("attachProcess:")]
		partial void attachProcess (Foundation.NSObject sender);

		[Action ("clearBP:")]
		partial void clearBP (Foundation.NSObject sender);

		[Action ("clearBtn:")]
		partial void clearBtn (Foundation.NSObject sender);

		[Action ("clearOutput:")]
		partial void clearOutput (Foundation.NSObject sender);

		[Action ("connectBtn:")]
		partial void connectBtn (Foundation.NSObject sender);

		[Action ("convertBtn:")]
		partial void convertBtn (Foundation.NSObject sender);

		[Action ("copyAddress:")]
		partial void copyAddress (Foundation.NSObject sender);

		[Action ("copyValue:")]
		partial void copyValue (Foundation.NSObject sender);

		[Action ("disassembleBtn:")]
		partial void disassembleBtn (Foundation.NSObject sender);

		[Action ("disconnectBtn:")]
		partial void disconnectBtn (Foundation.NSObject sender);

		[Action ("discordBtn:")]
		partial void discordBtn (Foundation.NSObject sender);

		[Action ("discordClick:")]
		partial void discordClick (Foundation.NSObject sender);

		[Action ("fromChange:")]
		partial void fromChange (Foundation.NSObject sender);

		[Action ("grabMem:")]
		partial void grabMem (Foundation.NSObject sender);

		[Action ("insertToTable:")]
		partial void insertToTable (Foundation.NSObject sender);

		[Action ("loadElf:")]
		partial void loadElf (Foundation.NSObject sender);

		[Action ("loadPTTable:")]
		partial void loadPTTable (Foundation.NSObject sender);

		[Action ("lockProcess:")]
		partial void lockProcess (Foundation.NSObject sender);

		[Action ("memScanButton:")]
		partial void memScanButton (Foundation.NSObject sender);

		[Action ("ptTableClear:")]
		partial void ptTableClear (Foundation.NSObject sender);

		[Action ("ptTableSelect:")]
		partial void ptTableSelect (Foundation.NSObject sender);

		[Action ("rebootBtn:")]
		partial void rebootBtn (Foundation.NSObject sender);

		[Action ("refreshComPort:")]
		partial void refreshComPort (Foundation.NSObject sender);

		[Action ("refreshProcess:")]
		partial void refreshProcess (Foundation.NSObject sender);

		[Action ("savePTTable:")]
		partial void savePTTable (Foundation.NSObject sender);

		[Action ("selectelf:")]
		partial void selectelf (Foundation.NSObject sender);

		[Action ("sendPayloadBtn:")]
		partial void sendPayloadBtn (Foundation.NSObject sender);

		[Action ("setBP:")]
		partial void setBP (Foundation.NSObject sender);

		[Action ("setMemBtn:")]
		partial void setMemBtn (Foundation.NSObject sender);

		[Action ("setStringButtn:")]
		partial void setStringButtn (Foundation.NSObject sender);

		[Action ("setWP:")]
		partial void setWP (Foundation.NSObject sender);

		[Action ("startStopUart:")]
		partial void startStopUart (Foundation.NSObject sender);

		[Action ("startUart:")]
		partial void startUart (Foundation.NSObject sender);

		[Action ("stopProcess:")]
		partial void stopProcess (Foundation.NSObject sender);

		[Action ("stopUart:")]
		partial void stopUart (Foundation.NSObject sender);

		[Action ("test5:")]
		partial void test5 (Foundation.NSObject sender);

		[Action ("textValue:")]
		partial void textValue (Foundation.NSObject sender);

		[Action ("toChange:")]
		partial void toChange (Foundation.NSObject sender);

		[Action ("unlockProcess:")]
		partial void unlockProcess (Foundation.NSObject sender);

		[Action ("viewMemMapBtn:")]
		partial void viewMemMapBtn (Foundation.NSObject sender);
		
		void ReleaseDesignerOutlets ()
		{
			if (addrBox != null) {
				addrBox.Dispose ();
				addrBox = null;
			}

			if (addressTable != null) {
				addressTable.Dispose ();
				addressTable = null;
			}

			if (bpIndex != null) {
				bpIndex.Dispose ();
				bpIndex = null;
			}

			if (bpStepper != null) {
				bpStepper.Dispose ();
				bpStepper = null;
			}

			if (byteBoxx != null) {
				byteBoxx.Dispose ();
				byteBoxx = null;
			}

			if (bytes != null) {
				bytes.Dispose ();
				bytes = null;
			}

			if (clearWP != null) {
				clearWP.Dispose ();
				clearWP = null;
			}

			if (convertFrom != null) {
				convertFrom.Dispose ();
				convertFrom = null;
			}

			if (convertFromItems != null) {
				convertFromItems.Dispose ();
				convertFromItems = null;
			}

			if (convertResults != null) {
				convertResults.Dispose ();
				convertResults = null;
			}

			if (convertTo != null) {
				convertTo.Dispose ();
				convertTo = null;
			}

			if (convertToItems != null) {
				convertToItems.Dispose ();
				convertToItems = null;
			}

			if (descTable != null) {
				descTable.Dispose ();
				descTable = null;
			}

			if (dissassembleField != null) {
				dissassembleField.Dispose ();
				dissassembleField = null;
			}

			if (dissassField != null) {
				dissassField.Dispose ();
				dissassField = null;
			}

			if (elfPath != null) {
				elfPath.Dispose ();
				elfPath = null;
			}

			if (getMemory != null) {
				getMemory.Dispose ();
				getMemory = null;
			}

			if (grabMemTable != null) {
				grabMemTable.Dispose ();
				grabMemTable = null;
			}

			if (hexView != null) {
				hexView.Dispose ();
				hexView = null;
			}

			if (idk != null) {
				idk.Dispose ();
				idk = null;
			}

			if (idkLOL != null) {
				idkLOL.Dispose ();
				idkLOL = null;
			}

			if (instructionField != null) {
				instructionField.Dispose ();
				instructionField = null;
			}

			if (ipTextBox != null) {
				ipTextBox.Dispose ();
				ipTextBox = null;
			}

			if (justATest != null) {
				justATest.Dispose ();
				justATest = null;
			}

			if (justTes != null) {
				justTes.Dispose ();
				justTes = null;
			}

			if (mainWindow != null) {
				mainWindow.Dispose ();
				mainWindow = null;
			}

			if (memScanFrom != null) {
				memScanFrom.Dispose ();
				memScanFrom = null;
			}

			if (memScanProgress != null) {
				memScanProgress.Dispose ();
				memScanProgress = null;
			}

			if (memScanRange != null) {
				memScanRange.Dispose ();
				memScanRange = null;
			}

			if (memScanTotalRange != null) {
				memScanTotalRange.Dispose ();
				memScanTotalRange = null;
			}

			if (memScanType != null) {
				memScanType.Dispose ();
				memScanType = null;
			}

			if (memScanValue != null) {
				memScanValue.Dispose ();
				memScanValue = null;
			}

			if (OutPutTable != null) {
				OutPutTable.Dispose ();
				OutPutTable = null;
			}

			if (processBox != null) {
				processBox.Dispose ();
				processBox = null;
			}

			if (ptTable != null) {
				ptTable.Dispose ();
				ptTable = null;
			}

			if (ptTableFilePath != null) {
				ptTableFilePath.Dispose ();
				ptTableFilePath = null;
			}

			if (ptTableSaveName != null) {
				ptTableSaveName.Dispose ();
				ptTableSaveName = null;
			}

			if (scanRes != null) {
				scanRes.Dispose ();
				scanRes = null;
			}

			if (ScanTable != null) {
				ScanTable.Dispose ();
				ScanTable = null;
			}

			if (scanTableOffset != null) {
				scanTableOffset.Dispose ();
				scanTableOffset = null;
			}

			if (scanTableValue != null) {
				scanTableValue.Dispose ();
				scanTableValue = null;
			}

			if (selectPTTable != null) {
				selectPTTable.Dispose ();
				selectPTTable = null;
			}

			if (setMemAddrBox != null) {
				setMemAddrBox.Dispose ();
				setMemAddrBox = null;
			}

			if (setMemByteBox != null) {
				setMemByteBox.Dispose ();
				setMemByteBox = null;
			}

			if (setStringAddr != null) {
				setStringAddr.Dispose ();
				setStringAddr = null;
			}

			if (setStringBtn != null) {
				setStringBtn.Dispose ();
				setStringBtn = null;
			}

			if (setStringString != null) {
				setStringString.Dispose ();
				setStringString = null;
			}

			if (statusLabel != null) {
				statusLabel.Dispose ();
				statusLabel = null;
			}

			if (test != null) {
				test.Dispose ();
				test = null;
			}

			if (testin != null) {
				testin.Dispose ();
				testin = null;
			}

			if (testing != null) {
				testing.Dispose ();
				testing = null;
			}

			if (testingAGAIN != null) {
				testingAGAIN.Dispose ();
				testingAGAIN = null;
			}

			if (testingText != null) {
				testingText.Dispose ();
				testingText = null;
			}

			if (testinLOL != null) {
				testinLOL.Dispose ();
				testinLOL = null;
			}

			if (testLabel != null) {
				testLabel.Dispose ();
				testLabel = null;
			}

			if (textView != null) {
				textView.Dispose ();
				textView = null;
			}

			if (typeTable != null) {
				typeTable.Dispose ();
				typeTable = null;
			}

			if (wpIndex != null) {
				wpIndex.Dispose ();
				wpIndex = null;
			}

			if (wpLength != null) {
				wpLength.Dispose ();
				wpLength = null;
			}

			if (wpStepper != null) {
				wpStepper.Dispose ();
				wpStepper = null;
			}

			if (wpType != null) {
				wpType.Dispose ();
				wpType = null;
			}

			if (uartOutputBox != null) {
				uartOutputBox.Dispose ();
				uartOutputBox = null;
			}

			if (comPort != null) {
				comPort.Dispose ();
				comPort = null;
			}

			if (filterTextUart != null) {
				filterTextUart.Dispose ();
				filterTextUart = null;
			}

			if (textToFilter != null) {
				textToFilter.Dispose ();
				textToFilter = null;
			}
		}
	}
}
