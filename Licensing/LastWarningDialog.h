/*
 *  Copyright 2010-2015 Fabric Software Inc. All rights reserved.
 */

#ifndef __FABRICUI_LICENSING_LASTWARNINGDIALOG_H
#define __FABRICUI_LICENSING_LASTWARNINGDIALOG_H

#include <QtGui/QCursor>
#include <QtGui/QDialog>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QTextBrowser>
#include <QtGui/QVBoxLayout>

class LastWarningDialog : public QDialog
{
  Q_OBJECT

public:
  LastWarningDialog( QWidget *parent )
    : QDialog( parent )
  {
    // setModal( true );
    setWindowModality( Qt::ApplicationModal );
    setWindowTitle( "Fabric Licensing" );
    setSizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);

    setLayout( new QVBoxLayout() );

    QLabel *info = new QLabel( this );
    info->setText( "Fabric will pause now for up to 15 seconds, it "
                   "will resume automatically once this is "
                   "complete." );
    info->setSizePolicy( QSizePolicy::Minimum, QSizePolicy::Minimum );
    layout()->addWidget( info );

    QPushButton *continueButton = new QPushButton( "Continue", this );

    QObject::connect( continueButton, SIGNAL( clicked() ), this, SLOT( accept() ) );

    layout()->addWidget( continueButton );
  }
};

#endif // __FABRICUI_LICENSING_LASTWARNINGDIALOG_H
