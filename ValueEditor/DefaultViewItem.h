//
// Copyright (c) 2010-2016, Fabric Software Inc. All rights reserved.
//

#pragma once

#include "BaseViewItem.h"

class QLabel;


namespace FabricUI {
namespace ValueEditor {
  
class BaseModelItem;
class ItemMetadata;

class DefaultViewItem : public BaseViewItem
{
private:
	
  QLabel *m_label;

public:

  static BaseViewItem *CreateItem(
    QString const &name,
    QVariant const &value,
    ItemMetadata* metaData
    );
  static const int Priority;

	DefaultViewItem(
    QString const &name,
    QVariant const &value,
    ItemMetadata* metadata
    );
	~DefaultViewItem();

	virtual QWidget *getWidget() /*override*/;

	virtual void onModelValueChanged( QVariant const &value ) /*override*/;

  void deleteMe() { delete this; }
};

} // namespace FabricUI 
} // namespace ValueEditor 
