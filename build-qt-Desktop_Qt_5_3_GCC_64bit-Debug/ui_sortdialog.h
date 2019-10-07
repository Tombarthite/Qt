/********************************************************************************
** Form generated from reading UI file 'sortdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SORTDIALOG_H
#define UI_SORTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SortDialog
{
public:
    QGridLayout *gridLayout_4;
    QGroupBox *primaryGroupBox;
    QGridLayout *gridLayout;
    QLabel *columnLabel;
    QComboBox *comboBox;
    QLabel *orderLabel;
    QComboBox *comboBox_2;
    QVBoxLayout *verticalLayout;
    QPushButton *okButton;
    QPushButton *cancelButton;
    QSpacerItem *verticalSpacer;
    QPushButton *moreButton;
    QSpacerItem *verticalSpacer_2;
    QGroupBox *secondaryGroupBox;
    QGridLayout *gridLayout_2;
    QLabel *columnLabel_2;
    QComboBox *comboBox_3;
    QLabel *orderLabel_2;
    QComboBox *comboBox_4;
    QGroupBox *tertiaryGroupBox;
    QGridLayout *gridLayout_3;
    QLabel *columnLabel_3;
    QComboBox *comboBox_5;
    QLabel *orderLabel_3;
    QComboBox *comboBox_6;

    void setupUi(QDialog *SortDialog)
    {
        if (SortDialog->objectName().isEmpty())
            SortDialog->setObjectName(QStringLiteral("SortDialog"));
        SortDialog->resize(278, 345);
        gridLayout_4 = new QGridLayout(SortDialog);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        primaryGroupBox = new QGroupBox(SortDialog);
        primaryGroupBox->setObjectName(QStringLiteral("primaryGroupBox"));
        gridLayout = new QGridLayout(primaryGroupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        columnLabel = new QLabel(primaryGroupBox);
        columnLabel->setObjectName(QStringLiteral("columnLabel"));

        gridLayout->addWidget(columnLabel, 0, 0, 1, 1);

        comboBox = new QComboBox(primaryGroupBox);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        gridLayout->addWidget(comboBox, 0, 1, 1, 1);

        orderLabel = new QLabel(primaryGroupBox);
        orderLabel->setObjectName(QStringLiteral("orderLabel"));

        gridLayout->addWidget(orderLabel, 1, 0, 1, 1);

        comboBox_2 = new QComboBox(primaryGroupBox);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));

        gridLayout->addWidget(comboBox_2, 1, 1, 1, 1);


        gridLayout_4->addWidget(primaryGroupBox, 0, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        okButton = new QPushButton(SortDialog);
        okButton->setObjectName(QStringLiteral("okButton"));

        verticalLayout->addWidget(okButton);

        cancelButton = new QPushButton(SortDialog);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));

        verticalLayout->addWidget(cancelButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        moreButton = new QPushButton(SortDialog);
        moreButton->setObjectName(QStringLiteral("moreButton"));
        moreButton->setCheckable(true);

        verticalLayout->addWidget(moreButton);


        gridLayout_4->addLayout(verticalLayout, 0, 1, 2, 1);

        verticalSpacer_2 = new QSpacerItem(20, 11, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer_2, 1, 0, 1, 1);

        secondaryGroupBox = new QGroupBox(SortDialog);
        secondaryGroupBox->setObjectName(QStringLiteral("secondaryGroupBox"));
        gridLayout_2 = new QGridLayout(secondaryGroupBox);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        columnLabel_2 = new QLabel(secondaryGroupBox);
        columnLabel_2->setObjectName(QStringLiteral("columnLabel_2"));

        gridLayout_2->addWidget(columnLabel_2, 0, 0, 1, 1);

        comboBox_3 = new QComboBox(secondaryGroupBox);
        comboBox_3->setObjectName(QStringLiteral("comboBox_3"));

        gridLayout_2->addWidget(comboBox_3, 0, 1, 1, 1);

        orderLabel_2 = new QLabel(secondaryGroupBox);
        orderLabel_2->setObjectName(QStringLiteral("orderLabel_2"));

        gridLayout_2->addWidget(orderLabel_2, 1, 0, 1, 1);

        comboBox_4 = new QComboBox(secondaryGroupBox);
        comboBox_4->setObjectName(QStringLiteral("comboBox_4"));

        gridLayout_2->addWidget(comboBox_4, 1, 1, 1, 1);


        gridLayout_4->addWidget(secondaryGroupBox, 2, 0, 1, 1);

        tertiaryGroupBox = new QGroupBox(SortDialog);
        tertiaryGroupBox->setObjectName(QStringLiteral("tertiaryGroupBox"));
        gridLayout_3 = new QGridLayout(tertiaryGroupBox);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        columnLabel_3 = new QLabel(tertiaryGroupBox);
        columnLabel_3->setObjectName(QStringLiteral("columnLabel_3"));

        gridLayout_3->addWidget(columnLabel_3, 0, 0, 1, 1);

        comboBox_5 = new QComboBox(tertiaryGroupBox);
        comboBox_5->setObjectName(QStringLiteral("comboBox_5"));

        gridLayout_3->addWidget(comboBox_5, 0, 1, 1, 1);

        orderLabel_3 = new QLabel(tertiaryGroupBox);
        orderLabel_3->setObjectName(QStringLiteral("orderLabel_3"));

        gridLayout_3->addWidget(orderLabel_3, 1, 0, 1, 1);

        comboBox_6 = new QComboBox(tertiaryGroupBox);
        comboBox_6->setObjectName(QStringLiteral("comboBox_6"));

        gridLayout_3->addWidget(comboBox_6, 1, 1, 1, 1);


        gridLayout_4->addWidget(tertiaryGroupBox, 3, 0, 1, 1);


        retranslateUi(SortDialog);
        QObject::connect(okButton, SIGNAL(clicked()), SortDialog, SLOT(accept()));
        QObject::connect(cancelButton, SIGNAL(clicked()), SortDialog, SLOT(reject()));
        QObject::connect(moreButton, SIGNAL(toggled(bool)), secondaryGroupBox, SLOT(setVisible(bool)));
        QObject::connect(moreButton, SIGNAL(toggled(bool)), tertiaryGroupBox, SLOT(setVisible(bool)));

        QMetaObject::connectSlotsByName(SortDialog);
    } // setupUi

    void retranslateUi(QDialog *SortDialog)
    {
        SortDialog->setWindowTitle(QApplication::translate("SortDialog", "Dialog", 0));
        primaryGroupBox->setTitle(QApplication::translate("SortDialog", "&Primary Key", 0));
        columnLabel->setText(QApplication::translate("SortDialog", "Column:", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("SortDialog", "None", 0)
        );
        orderLabel->setText(QApplication::translate("SortDialog", "Order:", 0));
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("SortDialog", "Ascending", 0)
         << QApplication::translate("SortDialog", "Descending", 0)
        );
        okButton->setText(QApplication::translate("SortDialog", "OK", 0));
        cancelButton->setText(QApplication::translate("SortDialog", "Cancel", 0));
        moreButton->setText(QApplication::translate("SortDialog", "&More", 0));
        secondaryGroupBox->setTitle(QApplication::translate("SortDialog", "&Secondary Key", 0));
        columnLabel_2->setText(QApplication::translate("SortDialog", "Column:", 0));
        comboBox_3->clear();
        comboBox_3->insertItems(0, QStringList()
         << QApplication::translate("SortDialog", "None", 0)
        );
        orderLabel_2->setText(QApplication::translate("SortDialog", "Order:", 0));
        comboBox_4->clear();
        comboBox_4->insertItems(0, QStringList()
         << QApplication::translate("SortDialog", "Ascending", 0)
         << QApplication::translate("SortDialog", "Descending", 0)
        );
        tertiaryGroupBox->setTitle(QApplication::translate("SortDialog", "&Tertiary Key", 0));
        columnLabel_3->setText(QApplication::translate("SortDialog", "Column:", 0));
        comboBox_5->clear();
        comboBox_5->insertItems(0, QStringList()
         << QApplication::translate("SortDialog", "None", 0)
        );
        orderLabel_3->setText(QApplication::translate("SortDialog", "Order:", 0));
        comboBox_6->clear();
        comboBox_6->insertItems(0, QStringList()
         << QApplication::translate("SortDialog", "Ascending", 0)
         << QApplication::translate("SortDialog", "Descending", 0)
        );
    } // retranslateUi

};

namespace Ui {
    class SortDialog: public Ui_SortDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SORTDIALOG_H
