//
// Copyright (c) 2010-2016, Fabric Software Inc. All rights reserved.
//

#ifndef FABRICUI_VALUEEDITOR_VETREEWIDGETITEM_H
#define FABRICUI_VALUEEDITOR_VETREEWIDGETITEM_H

#include <QtWidgets/QTreeWidget>

namespace FabricUI {
namespace ValueEditor {
	
class BaseViewItem;

class VETreeWidgetItem : public QTreeWidgetItem
{
public:

  VETreeWidgetItem( BaseViewItem *viewItem );
  ~VETreeWidgetItem();

  void maybeExpand();

  BaseViewItem *getViewItem() const;

  // Override the sort to enable changing
  // order without losing all the widget info
  bool operator<( const QTreeWidgetItem &other )const;

private:

  BaseViewItem *m_viewItem;
};

} // namespace FabricUI 
} // namespace ValueEditor 

#endif // FABRICUI_VALUEEDITOR_VETREEWIDGETITEM_H
