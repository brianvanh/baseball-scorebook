/********************************************************************************
** Form generated from reading UI file 'gameoptions.ui'
**
** Created: Mon Sep 5 20:49:41 2011
**      by: Qt User Interface Compiler version 4.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMEOPTIONS_H
#define UI_GAMEOPTIONS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpinBox>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GameOptions
{
public:
    QDialogButtonBox *buttonBox;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpinBox *spinBox;
    QCheckBox *checkBox;
    QHBoxLayout *horizontalLayout_4;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QHBoxLayout *horizontalLayout_5;
    QCheckBox *checkBox_4;
    QCheckBox *checkBox_5;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QSpinBox *spinBox_2;
    QLabel *label_3;
    QSpinBox *spinBox_3;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_5;
    QSpinBox *spinBox_4;

    void setupUi(QDialog *GameOptions)
    {
        if (GameOptions->objectName().isEmpty())
            GameOptions->setObjectName(QString::fromUtf8("GameOptions"));
        GameOptions->resize(413, 220);
        buttonBox = new QDialogButtonBox(GameOptions);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(10, 180, 391, 27));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Save);
        buttonBox->setCenterButtons(false);
        verticalLayoutWidget = new QWidget(GameOptions);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(9, 9, 386, 161));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        spinBox = new QSpinBox(verticalLayoutWidget);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setMinimum(1);
        spinBox->setMaximum(9);

        horizontalLayout->addWidget(spinBox);

        checkBox = new QCheckBox(verticalLayoutWidget);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        horizontalLayout->addWidget(checkBox);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        checkBox_2 = new QCheckBox(verticalLayoutWidget);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));
        checkBox_2->setChecked(true);

        horizontalLayout_4->addWidget(checkBox_2);

        checkBox_3 = new QCheckBox(verticalLayoutWidget);
        checkBox_3->setObjectName(QString::fromUtf8("checkBox_3"));
        checkBox_3->setChecked(true);

        horizontalLayout_4->addWidget(checkBox_3);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        checkBox_4 = new QCheckBox(verticalLayoutWidget);
        checkBox_4->setObjectName(QString::fromUtf8("checkBox_4"));
        checkBox_4->setChecked(true);

        horizontalLayout_5->addWidget(checkBox_4);

        checkBox_5 = new QCheckBox(verticalLayoutWidget);
        checkBox_5->setObjectName(QString::fromUtf8("checkBox_5"));
        checkBox_5->setChecked(true);

        horizontalLayout_5->addWidget(checkBox_5);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        spinBox_2 = new QSpinBox(verticalLayoutWidget);
        spinBox_2->setObjectName(QString::fromUtf8("spinBox_2"));
        spinBox_2->setMaximum(3);

        horizontalLayout_2->addWidget(spinBox_2);

        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFrameShape(QFrame::NoFrame);

        horizontalLayout_2->addWidget(label_3);

        spinBox_3 = new QSpinBox(verticalLayoutWidget);
        spinBox_3->setObjectName(QString::fromUtf8("spinBox_3"));
        spinBox_3->setMaximum(2);

        horizontalLayout_2->addWidget(spinBox_3);

        label_4 = new QLabel(verticalLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_2->addWidget(label_4);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_5 = new QLabel(verticalLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_3->addWidget(label_5);

        spinBox_4 = new QSpinBox(verticalLayoutWidget);
        spinBox_4->setObjectName(QString::fromUtf8("spinBox_4"));
        spinBox_4->setMinimum(1);
        spinBox_4->setMaximum(12);
        spinBox_4->setValue(9);

        horizontalLayout_3->addWidget(spinBox_4);


        verticalLayout->addLayout(horizontalLayout_3);


        retranslateUi(GameOptions);

        QMetaObject::connectSlotsByName(GameOptions);
    } // setupUi

    void retranslateUi(QDialog *GameOptions)
    {
        GameOptions->setWindowTitle(QApplication::translate("GameOptions", "Game Attributes", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("GameOptions", "Number of Innings: ", 0, QApplication::UnicodeUTF8));
        spinBox->setSuffix(QString());
        spinBox->setPrefix(QString());
        checkBox->setText(QApplication::translate("GameOptions", "Extra Innings Allowed?", 0, QApplication::UnicodeUTF8));
        checkBox_2->setText(QApplication::translate("GameOptions", "Bunting Allowed?", 0, QApplication::UnicodeUTF8));
        checkBox_3->setText(QApplication::translate("GameOptions", "HBP allowed?", 0, QApplication::UnicodeUTF8));
        checkBox_4->setText(QApplication::translate("GameOptions", "Stealing Allowed?", 0, QApplication::UnicodeUTF8));
        checkBox_5->setText(QApplication::translate("GameOptions", "Balks?", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("GameOptions", "Starts At: ", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("GameOptions", " balls and ", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("GameOptions", "strikes.", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("GameOptions", "Number of Players: ", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class GameOptions: public Ui_GameOptions {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMEOPTIONS_H
