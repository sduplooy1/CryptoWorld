/********************************************************************************
** Form generated from reading UI file 'charitydialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHARITYDIALOG_H
#define UI_CHARITYDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StakeForCharityDialog
{
public:
    QLineEdit *charityPercentEdit;
    QLineEdit *charityAddressEdit;
    QLabel *label_2;
    QLabel *message;
    QPushButton *addButton;
    QPushButton *disableButton;
    QPushButton *addressBookButton;
    QLabel *label;
    QLabel *label_5;
    QPushButton *deleteButton;
    QPushButton *activateButton;
    QPushButton *viewButton;

    void setupUi(QWidget *StakeForCharityDialog)
    {
        if (StakeForCharityDialog->objectName().isEmpty())
            StakeForCharityDialog->setObjectName(QStringLiteral("StakeForCharityDialog"));
        StakeForCharityDialog->setWindowModality(Qt::NonModal);
        StakeForCharityDialog->resize(652, 300);
        charityPercentEdit = new QLineEdit(StakeForCharityDialog);
        charityPercentEdit->setObjectName(QStringLiteral("charityPercentEdit"));
        charityPercentEdit->setGeometry(QRect(170, 120, 131, 20));
        charityAddressEdit = new QLineEdit(StakeForCharityDialog);
        charityAddressEdit->setObjectName(QStringLiteral("charityAddressEdit"));
        charityAddressEdit->setGeometry(QRect(170, 150, 401, 21));
        label_2 = new QLabel(StakeForCharityDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 0, 451, 121));
        label_2->setLineWidth(1);
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_2->setWordWrap(true);
        message = new QLabel(StakeForCharityDialog);
        message->setObjectName(QStringLiteral("message"));
        message->setGeometry(QRect(240, 200, 381, 91));
        addButton = new QPushButton(StakeForCharityDialog);
        addButton->setObjectName(QStringLiteral("addButton"));
        addButton->setGeometry(QRect(20, 230, 91, 23));
        disableButton = new QPushButton(StakeForCharityDialog);
        disableButton->setObjectName(QStringLiteral("disableButton"));
        disableButton->setGeometry(QRect(120, 260, 91, 23));
        addressBookButton = new QPushButton(StakeForCharityDialog);
        addressBookButton->setObjectName(QStringLiteral("addressBookButton"));
        addressBookButton->setGeometry(QRect(570, 150, 28, 21));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/address-book"), QSize(), QIcon::Normal, QIcon::Off);
        addressBookButton->setIcon(icon);
        addressBookButton->setAutoDefault(false);
        label = new QLabel(StakeForCharityDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 120, 121, 20));
        label_5 = new QLabel(StakeForCharityDialog);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(30, 150, 111, 16));
        deleteButton = new QPushButton(StakeForCharityDialog);
        deleteButton->setObjectName(QStringLiteral("deleteButton"));
        deleteButton->setGeometry(QRect(120, 230, 91, 23));
        activateButton = new QPushButton(StakeForCharityDialog);
        activateButton->setObjectName(QStringLiteral("activateButton"));
        activateButton->setGeometry(QRect(20, 260, 91, 23));
        viewButton = new QPushButton(StakeForCharityDialog);
        viewButton->setObjectName(QStringLiteral("viewButton"));
        viewButton->setGeometry(QRect(60, 200, 121, 23));

        retranslateUi(StakeForCharityDialog);

        QMetaObject::connectSlotsByName(StakeForCharityDialog);
    } // setupUi

    void retranslateUi(QWidget *StakeForCharityDialog)
    {
        StakeForCharityDialog->setWindowTitle(QApplication::translate("StakeForCharityDialog", "Stake For Charity", 0));
#ifndef QT_NO_TOOLTIP
        charityPercentEdit->setToolTip(QApplication::translate("StakeForCharityDialog", "Enter whole numbers 1 - 100", 0));
#endif // QT_NO_TOOLTIP
        charityPercentEdit->setPlaceholderText(QApplication::translate("StakeForCharityDialog", "Enter % to Give (1-100)", 0));
#ifndef QT_NO_TOOLTIP
        charityAddressEdit->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        charityAddressEdit->setPlaceholderText(QApplication::translate("StakeForCharityDialog", "Enter Address to Send to", 0));
        label_2->setText(QApplication::translate("StakeForCharityDialog", "MultiSend allows you to automatically send up to 100% of your stake to a list of other HyperStake address after it matures.\n"
"To Add: enter percentage to give and HyperStake address to add to the MultiSend vector. \n"
"To Delete: Enter address to delete and press delete.\n"
"MultiSend will not be activated unless you have clicked Activate", 0));
        message->setText(QString());
#ifndef QT_NO_TOOLTIP
        addButton->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        addButton->setStatusTip(QApplication::translate("StakeForCharityDialog", "Add to MultiSend Vector", 0));
#endif // QT_NO_STATUSTIP
        addButton->setText(QApplication::translate("StakeForCharityDialog", "Add", 0));
#ifndef QT_NO_STATUSTIP
        disableButton->setStatusTip(QApplication::translate("StakeForCharityDialog", "Deactivate MultiSend", 0));
#endif // QT_NO_STATUSTIP
        disableButton->setText(QApplication::translate("StakeForCharityDialog", "Deactivate", 0));
#ifndef QT_NO_TOOLTIP
        addressBookButton->setToolTip(QApplication::translate("StakeForCharityDialog", "Choose an address from the address book", 0));
#endif // QT_NO_TOOLTIP
        addressBookButton->setText(QString());
        addressBookButton->setShortcut(QApplication::translate("StakeForCharityDialog", "Alt+A", 0));
#ifndef QT_NO_TOOLTIP
        label->setToolTip(QApplication::translate("StakeForCharityDialog", "Percentage of stake to send", 0));
#endif // QT_NO_TOOLTIP
        label->setText(QApplication::translate("StakeForCharityDialog", "Percentage:", 0));
#ifndef QT_NO_TOOLTIP
        label_5->setToolTip(QApplication::translate("StakeForCharityDialog", "Address to send portion of stake to", 0));
#endif // QT_NO_TOOLTIP
        label_5->setText(QApplication::translate("StakeForCharityDialog", "Address:", 0));
#ifndef QT_NO_TOOLTIP
        deleteButton->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        deleteButton->setStatusTip(QApplication::translate("StakeForCharityDialog", "Delete Address From MultiSend Vector", 0));
#endif // QT_NO_STATUSTIP
        deleteButton->setText(QApplication::translate("StakeForCharityDialog", "Delete", 0));
#ifndef QT_NO_STATUSTIP
        activateButton->setStatusTip(QApplication::translate("StakeForCharityDialog", "Activate MultiSend", 0));
#endif // QT_NO_STATUSTIP
        activateButton->setText(QApplication::translate("StakeForCharityDialog", "Activate", 0));
#ifndef QT_NO_TOOLTIP
        viewButton->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        viewButton->setStatusTip(QApplication::translate("StakeForCharityDialog", "View MultiSend Vector", 0));
#endif // QT_NO_STATUSTIP
        viewButton->setText(QApplication::translate("StakeForCharityDialog", "View MultiSend", 0));
    } // retranslateUi

};

namespace Ui {
    class StakeForCharityDialog: public Ui_StakeForCharityDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHARITYDIALOG_H
