using System;
namespace PeekPoke
{
    public class Scan
    {
        #region Computed Propoperties
        public string Value { get; set; } = "";
        public string Offset { get; set; } = "";
        #endregion

        #region Constructors
        public Scan()
        {
        }

        public Scan(string value, string offset)
        {
            this.Value = value;
            this.Offset = offset;
        }
        #endregion
    }
}
