#include "sortdialog.h"

SortDialog::SortDialog(QWidget *parent) :
    QDialog(parent)
{
    setupUi(this);
    secondaryGroupBox->hide();
    tertiaryGroupBox->hide();
    layout()->setSizeConstraint(QLayout::SetFixedSize);
}

SortDialog::~SortDialog()
{
    delete ui;
}
