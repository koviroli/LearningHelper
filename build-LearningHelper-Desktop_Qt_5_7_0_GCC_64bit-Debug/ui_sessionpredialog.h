/********************************************************************************
** Form generated from reading UI file 'sessionpredialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SESSIONPREDIALOG_H
#define UI_SESSIONPREDIALOG_H

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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SessionPreDialog
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_sessionName;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEdit_lang1;
    QLineEdit *lineEdit_lang2;
    QLineEdit *textField_SessionName;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_2;
    QPushButton *pushButton;

    void setupUi(QDialog *SessionPreDialog)
    {
        if (SessionPreDialog->objectName().isEmpty())
            SessionPreDialog->setObjectName(QStringLiteral("SessionPreDialog"));
        SessionPreDialog->resize(320, 240);
        layoutWidget = new QWidget(SessionPreDialog);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 30, 281, 85));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        label_sessionName = new QLabel(layoutWidget);
        label_sessionName->setObjectName(QStringLiteral("label_sessionName"));

        verticalLayout->addWidget(label_sessionName);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        lineEdit_lang1 = new QLineEdit(layoutWidget);
        lineEdit_lang1->setObjectName(QStringLiteral("lineEdit_lang1"));

        verticalLayout_2->addWidget(lineEdit_lang1);

        lineEdit_lang2 = new QLineEdit(layoutWidget);
        lineEdit_lang2->setObjectName(QStringLiteral("lineEdit_lang2"));

        verticalLayout_2->addWidget(lineEdit_lang2);

        textField_SessionName = new QLineEdit(layoutWidget);
        textField_SessionName->setObjectName(QStringLiteral("textField_SessionName"));

        verticalLayout_2->addWidget(textField_SessionName);


        horizontalLayout->addLayout(verticalLayout_2);

        layoutWidget1 = new QWidget(SessionPreDialog);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(110, 200, 191, 25));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton_2 = new QPushButton(layoutWidget1);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout_2->addWidget(pushButton_2);

        pushButton = new QPushButton(layoutWidget1);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout_2->addWidget(pushButton);


        retranslateUi(SessionPreDialog);
        QObject::connect(pushButton_2, SIGNAL(clicked()), SessionPreDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(SessionPreDialog);
    } // setupUi

    void retranslateUi(QDialog *SessionPreDialog)
    {
        SessionPreDialog->setWindowTitle(QApplication::translate("SessionPreDialog", "Dialog", 0));
        label->setText(QApplication::translate("SessionPreDialog", "Language #1", 0));
        label_2->setText(QApplication::translate("SessionPreDialog", "Language #2", 0));
        label_sessionName->setText(QApplication::translate("SessionPreDialog", "Session name", 0));
        pushButton_2->setText(QApplication::translate("SessionPreDialog", "Cancel", 0));
        pushButton->setText(QApplication::translate("SessionPreDialog", "Ok", 0));
    } // retranslateUi

};

namespace Ui {
    class SessionPreDialog: public Ui_SessionPreDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SESSIONPREDIALOG_H
