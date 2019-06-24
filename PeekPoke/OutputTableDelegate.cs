using System;
using AppKit;
namespace PeekPoke
{
    public class OutputTableDelegate : NSTableViewDelegate
    {
        #region Constants 
        private const string CellIdentifier = "ProdCell";
        #endregion

        #region Private Variables
        private OutputTableDataSource DataSource;
        #endregion

        #region Constructors
        public OutputTableDelegate(OutputTableDataSource datasource)
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
                //view.TextColor = ViewController.nsColor;
                view.Bordered = false;
                view.Selectable = true;
                view.Editable = false;
                view.Font = NSFont.FromCTFont(new CoreText.CTFont("Courier", 14));
                tableView.Font = NSFont.FromCTFont(new CoreText.CTFont("Courier", 14));

                    
                view.TextColor = ViewController.nsColor;

               
                 

            }




            // Setup view based on the column selected
            switch (tableColumn.Title)
            {

                case "Output":
                    //view.TextColor = ViewController.nsColor;
                    view.StringValue = DataSource.Outputs[(int)row].ConsOutput;

                    break;
               
            }

            return view;
        }
        #endregion
    }
}
