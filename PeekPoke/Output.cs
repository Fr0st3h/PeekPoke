using System;
namespace PeekPoke
{
    public class Output
    {
        #region Computed Propoperties
        public string ConsOutput { get; set; } = "";
        #endregion

        #region Constructors
        public Output()
        {
        }

        public Output(string output)
        {
            this.ConsOutput = output;
        }
        #endregion
    }
}
