/********************************************************************************
** Form generated from reading UI file 'dialogaddcolumn.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGADDCOLUMN_H
#define UI_DIALOGADDCOLUMN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogAddColumn
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_newLang;
    QLineEdit *textField_newLang;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *btn_addcolCancel;
    QPushButton *btn_addColAccept;

    void setupUi(QDialog *DialogAddColumn)
    {
        if (DialogAddColumn->objectName().isEmpty())
            DialogAddColumn->setObjectName(QStringLiteral("DialogAddColumn"));
        DialogAddColumn->resize(320, 240);
        layoutWidget = new QWidget(DialogAddColumn);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 40, 261, 161));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_newLang = new QLabel(layoutWidget);
        label_newLang->setObjectName(QStringLiteral("label_newLang"));

        horizontalLayout_2->addWidget(label_newLang);

        textField_newLang = new QLineEdit(layoutWidget);
        textField_newLang->setObjectName(QStringLiteral("textField_newLang"));

        horizontalLayout_2->addWidget(textField_newLang);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btn_addcolCancel = new QPushButton(layoutWidget);
        btn_addcolCancel->setObjectName(QStringLiteral("btn_addcolCancel"));

        horizontalLayout->addWidget(btn_addcolCancel);

        btn_addColAccept = new QPushButton(layoutWidget);
        btn_addColAccept->setObjectName(QStringLiteral("btn_addColAccept"));

        horizontalLayout->addWidget(btn_addColAccept);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(DialogAddColumn);
        QObject::connect(btn_addcolCancel, SIGNAL(clicked()), DialogAddColumn, SLOT(reject()));

        QMetaObject::connectSlotsByName(DialogAddColumn);
    } // setupUi

    void retranslateUi(QDialog *DialogAddColumn)
    {
        DialogAddColumn->setWindowTitle(QApplication::translate("DialogAddColumn", "Add new language", 0));
        label_newLang->setText(QApplication::translate("DialogAddColumn", "New language:", 0));
        btn_addcolCancel->setText(QApplication::translate("DialogAddColumn", "Cancel", 0));
        btn_addColAccept->setText(QApplication::translate("DialogAddColumn", "Ok", 0));
    } // retranslateUi

};

namespace Ui {
    class DialogAddColumn: public Ui_DialogAddColumn {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGADDCOLUMN_H
