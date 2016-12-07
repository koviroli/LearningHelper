/********************************************************************************
** Form generated from reading UI file 'sessionwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SESSIONWINDOW_H
#define UI_SESSIONWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SessionWindow
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QTableWidget *wordsTable;
    QHBoxLayout *horizontalLayout;
    QLabel *wordCountLabel;
    QLabel *wordsCountNum;
    QHBoxLayout *horizontalLayout_2;
    QLabel *SessionNameLabel;
    QLabel *SessionNameValue;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QPushButton *btnAddLanguage;
    QPushButton *pushButton_2;

    void setupUi(QWidget *SessionWindow)
    {
        if (SessionWindow->objectName().isEmpty())
            SessionWindow->setObjectName(QStringLiteral("SessionWindow"));
        SessionWindow->resize(640, 480);
        widget = new QWidget(SessionWindow);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(22, 12, 601, 451));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        wordsTable = new QTableWidget(widget);
        wordsTable->setObjectName(QStringLiteral("wordsTable"));

        verticalLayout->addWidget(wordsTable);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        wordCountLabel = new QLabel(widget);
        wordCountLabel->setObjectName(QStringLiteral("wordCountLabel"));
        wordCountLabel->setMargin(10);

        horizontalLayout->addWidget(wordCountLabel);

        wordsCountNum = new QLabel(widget);
        wordsCountNum->setObjectName(QStringLiteral("wordsCountNum"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(wordsCountNum->sizePolicy().hasHeightForWidth());
        wordsCountNum->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(wordsCountNum);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        SessionNameLabel = new QLabel(widget);
        SessionNameLabel->setObjectName(QStringLiteral("SessionNameLabel"));
        SessionNameLabel->setMargin(10);

        horizontalLayout_2->addWidget(SessionNameLabel);

        SessionNameValue = new QLabel(widget);
        SessionNameValue->setObjectName(QStringLiteral("SessionNameValue"));
        sizePolicy.setHeightForWidth(SessionNameValue->sizePolicy().hasHeightForWidth());
        SessionNameValue->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(SessionNameValue);


        verticalLayout->addLayout(horizontalLayout_2);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QFont font;
        font.setFamily(QStringLiteral("Purisa"));
        pushButton->setFont(font);

        verticalLayout->addWidget(pushButton);

        pushButton_3 = new QPushButton(widget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setFont(font);

        verticalLayout->addWidget(pushButton_3);

        btnAddLanguage = new QPushButton(widget);
        btnAddLanguage->setObjectName(QStringLiteral("btnAddLanguage"));
        btnAddLanguage->setFont(font);

        verticalLayout->addWidget(btnAddLanguage);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setFont(font);

        verticalLayout->addWidget(pushButton_2);


        retranslateUi(SessionWindow);

        QMetaObject::connectSlotsByName(SessionWindow);
    } // setupUi

    void retranslateUi(QWidget *SessionWindow)
    {
        SessionWindow->setWindowTitle(QApplication::translate("SessionWindow", "Session_English-Hungarian", 0));
        wordCountLabel->setText(QApplication::translate("SessionWindow", "Words count", 0));
        wordsCountNum->setText(QApplication::translate("SessionWindow", "0", 0));
        SessionNameLabel->setText(QApplication::translate("SessionWindow", "Session name", 0));
        SessionNameValue->setText(QApplication::translate("SessionWindow", "0", 0));
        pushButton->setText(QApplication::translate("SessionWindow", "Add word", 0));
        pushButton_3->setText(QApplication::translate("SessionWindow", "Read words from file", 0));
        btnAddLanguage->setText(QApplication::translate("SessionWindow", "Add column(language)", 0));
        pushButton_2->setText(QApplication::translate("SessionWindow", "Start Test!", 0));
    } // retranslateUi

};

namespace Ui {
    class SessionWindow: public Ui_SessionWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SESSIONWINDOW_H
