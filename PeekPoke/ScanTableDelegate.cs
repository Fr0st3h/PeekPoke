using System;
using AppKit;
using CoreGraphics;
using Foundation;
using System.Collections;
using System.Collections.Generic;
namespace PeekPoke
{
    public class ProductTableDelegate : NSTableViewDelegate
    {
        #region Constants 
        private const string CellIdentifier = "ProdCell";
        #endregion

        #region Private Variables
        private ScanTableDataSource DataSource;
        #endregion

        #region Constructors
        public ProductTableDelegate(ScanTableDataSource datasource)
        {
            this.DataSource = datasource;
        }
        #endregion

        #region Override Methods
        public override NSView GetViewForItem(NSTableView tableView, NSTableColumn tableColumn, nint row)
        {
            // This pattern allows you reuse existing views when they are no-longer in use.
            // If the returned view is null, you instance up a new view
            // If a non-null view is returned, you modify it enough to reflect the new data
            NSTextField view = (NSTextField)tableView.MakeView(CellIdentifier, this);
            if (view == null)
            {
                view = new NSTextField();
                view.Identifier = CellIdentifier;
                view.BackgroundColor = NSColor.Clear;
                view.Bordered = false;
                view.Selectable = true;
                view.Editable = false;
                view.Font = NSFont.FromCTFont(new CoreText.CTFont("Courier", 14));
                tableView.Font = NSFont.FromCTFont(new CoreText.CTFont("Courier", 14));
                
                
                
            }

            // Setup view based on the column selected
            switch (tableColumn.Title)
            {
                
                case "Value":
                    view.StringValue = DataSource.Products[(int)row].Value;
                    break;
                case "Offset":
                    view.StringValue = DataSource.Products[(int)row].Offset;
                    
                    break;
            }

            return view;
        }
        #endregion
    }
     
}