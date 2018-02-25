/********************************************************************************
** Form generated from reading UI file 'calcdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCDIALOG_H
#define UI_CALCDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_calcDialog
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QLabel *label_2;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *avgWeightResult;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label_3;
    QComboBox *comboBoxTargetDays;
    QLineEdit *blockSizeEdit;
    QLabel *label_4;
    QPushButton *pushButton;

    void setupUi(QDialog *calcDialog)
    {
        if (calcDialog->objectName().isEmpty())
            calcDialog->setObjectName(QStringLiteral("calcDialog"));
        calcDialog->resize(250, 352);
        buttonBox = new QDialogButtonBox(calcDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(1, 301, 161, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(true);
        label = new QLabel(calcDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 10, 251, 31));
        QFont font;
        font.setPointSize(16);
        label->setFont(font);
        label->setScaledContents(false);
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(calcDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(35, 42, 181, 41));
        label_2->setLineWidth(1);
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_2->setWordWrap(true);
        verticalLayoutWidget = new QWidget(calcDialog);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(30, 180, 191, 121));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        avgWeightResult = new QLabel(verticalLayoutWidget);
        avgWeightResult->setObjectName(QStringLiteral("avgWeightResult"));
        avgWeightResult->setLineWidth(1);
        avgWeightResult->setAlignment(Qt::AlignJustify|Qt::AlignTop);
        avgWeightResult->setWordWrap(true);

        verticalLayout->addWidget(avgWeightResult);

        formLayoutWidget = new QWidget(calcDialog);
        formLayoutWidget->setObjectName(QStringLiteral("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(30, 80, 191, 81));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        comboBoxTargetDays = new QComboBox(formLayoutWidget);
        comboBoxTargetDays->setObjectName(QStringLiteral("comboBoxTargetDays"));

        formLayout->setWidget(1, QFormLayout::FieldRole, comboBoxTargetDays);

        blockSizeEdit = new QLineEdit(formLayoutWidget);
        blockSizeEdit->setObjectName(QStringLiteral("blockSizeEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, blockSizeEdit);

        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_4);

        pushButton = new QPushButton(formLayoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        formLayout->setWidget(2, QFormLayout::LabelRole, pushButton);


        retranslateUi(calcDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), calcDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), calcDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(calcDialog);
    } // setupUi

    void retranslateUi(QDialog *calcDialog)
    {
        calcDialog->setWindowTitle(QApplication::translate("calcDialog", "Stake Calculator", 0));
        label->setText(QApplication::translate("calcDialog", "Stake Calculator", 0));
        label_2->setText(QApplication::translate("calcDialog", "Calculate optimal stake input sizing based on current network statistics", 0));
        avgWeightResult->setText(QString());
        label_3->setText(QApplication::translate("calcDialog", "Target Days To Stake:", 0));
        comboBoxTargetDays->clear();
        comboBoxTargetDays->insertItems(0, QStringList()
         << QApplication::translate("calcDialog", "10", 0)
         << QApplication::translate("calcDialog", "15", 0)
         << QApplication::translate("calcDialog", "20", 0)
         << QApplication::translate("calcDialog", "25", 0)
         << QApplication::translate("calcDialog", "30", 0)
        );
        blockSizeEdit->setPlaceholderText(QApplication::translate("calcDialog", "HYP", 0));
        label_4->setText(QApplication::translate("calcDialog", "Amount of HYP to Split", 0));
        pushButton->setText(QApplication::translate("calcDialog", "Calculate", 0));
    } // retranslateUi

};

namespace Ui {
    class calcDialog: public Ui_calcDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCDIALOG_H
