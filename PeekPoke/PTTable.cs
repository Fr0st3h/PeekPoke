using System;
namespace PeekPoke
{
    public class PTTable
    {
        #region Computed Propoperties
        public string Address { get; set; } = "";
        public string Description { get; set; } = "";
        public string Type { get; set; } = "";
        #endregion

        #region Constructors
        public PTTable()
        {
        }

        public PTTable(string address, string desc, string type)
        {
            this.Address = address;
            this.Description = desc;
            this.Type = type;
        }
        #endregion
    }
}
