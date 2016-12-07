/********************************************************************************
** Form generated from reading UI file 'infodialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFODIALOG_H
#define UI_INFODIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_InfoDialog
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QLabel *TitleLabel;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_4;
    QLabel *InfoLabel;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QDialog *InfoDialog)
    {
        if (InfoDialog->objectName().isEmpty())
            InfoDialog->setObjectName(QStringLiteral("InfoDialog"));
        InfoDialog->resize(320, 240);
        layoutWidget = new QWidget(InfoDialog);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 50, 321, 121));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        TitleLabel = new QLabel(layoutWidget);
        TitleLabel->setObjectName(QStringLiteral("TitleLabel"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        TitleLabel->setFont(font);

        horizontalLayout->addWidget(TitleLabel);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        InfoLabel = new QLabel(layoutWidget);
        InfoLabel->setObjectName(QStringLiteral("InfoLabel"));

        horizontalLayout_2->addWidget(InfoLabel);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(InfoDialog);

        QMetaObject::connectSlotsByName(InfoDialog);
    } // setupUi

    void retranslateUi(QDialog *InfoDialog)
    {
        InfoDialog->setWindowTitle(QApplication::translate("InfoDialog", "About", 0));
        TitleLabel->setText(QApplication::translate("InfoDialog", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt; font-weight:600;\">Learning Helper v0.5</span></p></body></html>", 0));
        InfoLabel->setText(QApplication::translate("InfoDialog", "<html><head/><body><p align=\"center\"><span style=\" text-decoration: underline;\">desing &amp; code:</span> Roland Kov\303\241cs</p><p align=\"center\"><span style=\" text-decoration: underline;\">contact:</span> kovirolig@gmail.com</p><p align=\"center\"><span style=\" text-decoration: underline;\">License:</span><a href=\"http://www.fsf.org/\"><span style=\" text-decoration: underline; color:#007af4;\">GNU/GPL</span></a></p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class InfoDialog: public Ui_InfoDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFODIALOG_H
