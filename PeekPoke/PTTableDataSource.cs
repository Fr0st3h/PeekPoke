using System;
using AppKit;
using CoreGraphics;
using Foundation;
using System.Collections;
using System.Collections.Generic;
namespace PeekPoke
{
    public class PTTableDataSource : NSTableViewDataSource
    {
        #region Public Variables
        public List<PTTable> Offsets = new List<PTTable>();
        #endregion

        #region Constructors
        public PTTableDataSource()
        {
        }
        #endregion

        #region Override Methods
        public override nint GetRowCount(NSTableView tableView)
        {
            return Offsets.Count;
        }
        #endregion
    }
}
