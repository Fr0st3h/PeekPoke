using System;
using AppKit;
using CoreGraphics;
using Foundation;
using System.Collections;
using System.Collections.Generic;
namespace PeekPoke
{
    public class ScanTableDataSource : NSTableViewDataSource
    {
        #region Public Variables
        public List<Scan> Products = new List<Scan>();
        #endregion

        #region Constructors
        public ScanTableDataSource()
        {
        }
        #endregion

        #region Override Methods
        public override nint GetRowCount(NSTableView tableView)
        {
            return Products.Count;
        }
        #endregion
    }
}
