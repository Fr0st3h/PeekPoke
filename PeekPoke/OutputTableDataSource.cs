using System;
using System.Collections.Generic;
using AppKit;
namespace PeekPoke
{
    public class OutputTableDataSource : NSTableViewDataSource
    {
        #region Public Variables
        public List<Output> Outputs = new List<Output>();
        #endregion

        #region Constructors
        public OutputTableDataSource()
        {
        }
        #endregion

        #region Override Methods
        public override nint GetRowCount(NSTableView tableView)
        {
            return Outputs.Count;
        }
        #endregion
    }
}
