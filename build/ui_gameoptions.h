/********************************************************************************
** Form generated from reading UI file 'gameoptions.ui'
**
** Created: Wed Sep 7 21:37:02 2011
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
    QSpinBox *inningsSpinBox;
    QCheckBox *extrasCheckBox;
    QHBoxLayout *horizontalLayout_4;
    QCheckBox *buntingCheckBox;
    QCheckBox *hbpCheckBox;
    QHBoxLayout *horizontalLayout_5;
    QCheckBox *stealingCheckBox;
    QCheckBox *balksCheckBox;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QSpinBox *ballsSpinBox;
    QLabel *label_3;
    QSpinBox *strikesSpinBox;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_5;
    QSpinBox *playersSpinBox;

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

        inningsSpinBox = new QSpinBox(verticalLayoutWidget);
        inningsSpinBox->setObjectName(QString::fromUtf8("inningsSpinBox"));
        inningsSpinBox->setMinimum(1);
        inningsSpinBox->setMaximum(9);

        horizontalLayout->addWidget(inningsSpinBox);

        extrasCheckBox = new QCheckBox(verticalLayoutWidget);
        extrasCheckBox->setObjectName(QString::fromUtf8("extrasCheckBox"));

        horizontalLayout->addWidget(extrasCheckBox);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        buntingCheckBox = new QCheckBox(verticalLayoutWidget);
        buntingCheckBox->setObjectName(QString::fromUtf8("buntingCheckBox"));
        buntingCheckBox->setChecked(true);

        horizontalLayout_4->addWidget(buntingCheckBox);

        hbpCheckBox = new QCheckBox(verticalLayoutWidget);
        hbpCheckBox->setObjectName(QString::fromUtf8("hbpCheckBox"));
        hbpCheckBox->setChecked(true);

        horizontalLayout_4->addWidget(hbpCheckBox);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        stealingCheckBox = new QCheckBox(verticalLayoutWidget);
        stealingCheckBox->setObjectName(QString::fromUtf8("stealingCheckBox"));
        stealingCheckBox->setChecked(true);

        horizontalLayout_5->addWidget(stealingCheckBox);

        balksCheckBox = new QCheckBox(verticalLayoutWidget);
        balksCheckBox->setObjectName(QString::fromUtf8("balksCheckBox"));
        balksCheckBox->setChecked(true);

        horizontalLayout_5->addWidget(balksCheckBox);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        ballsSpinBox = new QSpinBox(verticalLayoutWidget);
        ballsSpinBox->setObjectName(QString::fromUtf8("ballsSpinBox"));
        ballsSpinBox->setMaximum(3);

        horizontalLayout_2->addWidget(ballsSpinBox);

        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFrameShape(QFrame::NoFrame);

        horizontalLayout_2->addWidget(label_3);

        strikesSpinBox = new QSpinBox(verticalLayoutWidget);
        strikesSpinBox->setObjectName(QString::fromUtf8("strikesSpinBox"));
        strikesSpinBox->setMaximum(2);

        horizontalLayout_2->addWidget(strikesSpinBox);

        label_4 = new QLabel(verticalLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_2->addWidget(label_4);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_5 = new QLabel(verticalLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_3->addWidget(label_5);

        playersSpinBox = new QSpinBox(verticalLayoutWidget);
        playersSpinBox->setObjectName(QString::fromUtf8("playersSpinBox"));
        playersSpinBox->setMinimum(1);
        playersSpinBox->setMaximum(12);
        playersSpinBox->setValue(9);

        horizontalLayout_3->addWidget(playersSpinBox);


        verticalLayout->addLayout(horizontalLayout_3);


        retranslateUi(GameOptions);

        QMetaObject::connectSlotsByName(GameOptions);
    } // setupUi

    void retranslateUi(QDialog *GameOptions)
    {
        GameOptions->setWindowTitle(QApplication::translate("GameOptions", "Game Attributes", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("GameOptions", "Number of Innings: ", 0, QApplication::UnicodeUTF8));
        inningsSpinBox->setSuffix(QString());
        inningsSpinBox->setPrefix(QString());
        extrasCheckBox->setText(QApplication::translate("GameOptions", "Extra Innings Allowed?", 0, QApplication::UnicodeUTF8));
        buntingCheckBox->setText(QApplication::translate("GameOptions", "Bunting Allowed?", 0, QApplication::UnicodeUTF8));
        hbpCheckBox->setText(QApplication::translate("GameOptions", "HBP allowed?", 0, QApplication::UnicodeUTF8));
        stealingCheckBox->setText(QApplication::translate("GameOptions", "Stealing Allowed?", 0, QApplication::UnicodeUTF8));
        balksCheckBox->setText(QApplication::translate("GameOptions", "Balks?", 0, QApplication::UnicodeUTF8));
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
