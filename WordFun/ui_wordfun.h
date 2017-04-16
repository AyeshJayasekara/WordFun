/********************************************************************************
** Form generated from reading UI file 'wordfun.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WORDFUN_H
#define UI_WORDFUN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WordFun
{
public:
    QWidget *centralWidget;
    QGroupBox *groupBox;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pushButton;
    QLabel *label_4;
    QPushButton *pushButton_2;
    QLabel *label_5;
    QTextEdit *textEdit;
    QGroupBox *groupBox_2;
    QPushButton *pushButton_7;
    QLabel *label_7;
    QPushButton *pushButton_3;
    QLabel *label_8;
    QLabel *label_9;
    QTextEdit *textEdit_2;
    QLabel *label_10;
    QLabel *label;
    QPushButton *pushButton_4;
    QLabel *label_11;
    QPushButton *pushButton_5;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *WordFun)
    {
        if (WordFun->objectName().isEmpty())
            WordFun->setObjectName(QStringLiteral("WordFun"));
        WordFun->resize(716, 444);
        centralWidget = new QWidget(WordFun);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 30, 271, 321));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 50, 71, 41));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(100, 50, 161, 41));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(30, 110, 171, 23));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(70, 170, 101, 31));
        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(30, 260, 171, 23));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(10, 290, 191, 31));
        textEdit = new QTextEdit(groupBox);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(30, 210, 171, 31));
        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(370, 30, 311, 321));
        pushButton_7 = new QPushButton(groupBox_2);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(40, 260, 171, 23));
        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(30, 50, 71, 41));
        pushButton_3 = new QPushButton(groupBox_2);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(40, 110, 171, 23));
        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(110, 50, 201, 41));
        label_9 = new QLabel(groupBox_2);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(80, 170, 111, 31));
        textEdit_2 = new QTextEdit(groupBox_2);
        textEdit_2->setObjectName(QStringLiteral("textEdit_2"));
        textEdit_2->setGeometry(QRect(40, 210, 171, 31));
        label_10 = new QLabel(groupBox_2);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(250, 430, 131, 16));
        label = new QLabel(groupBox_2);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 290, 231, 21));
        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(290, 150, 75, 23));
        label_11 = new QLabel(centralWidget);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(200, 310, 291, 111));
        pushButton_5 = new QPushButton(centralWidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(290, 120, 75, 23));
        WordFun->setCentralWidget(centralWidget);
        groupBox->raise();
        groupBox_2->raise();
        pushButton_4->raise();
        label_11->raise();
        label_8->raise();
        pushButton_5->raise();
        menuBar = new QMenuBar(WordFun);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 716, 21));
        WordFun->setMenuBar(menuBar);
        mainToolBar = new QToolBar(WordFun);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        WordFun->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(WordFun);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        WordFun->setStatusBar(statusBar);

        retranslateUi(WordFun);

        QMetaObject::connectSlotsByName(WordFun);
    } // setupUi

    void retranslateUi(QMainWindow *WordFun)
    {
        WordFun->setWindowTitle(QApplication::translate("WordFun", "Word Fun Club", 0));
        groupBox->setTitle(QApplication::translate("WordFun", "Player 1", 0));
        label_2->setText(QApplication::translate("WordFun", "Your Letters", 0));
        label_3->setText(QApplication::translate("WordFun", "Shuffle!!", 0));
        pushButton->setText(QApplication::translate("WordFun", "Shuffle", 0));
        label_4->setText(QApplication::translate("WordFun", "Enter Word Here", 0));
        pushButton_2->setText(QApplication::translate("WordFun", "Submit", 0));
        label_5->setText(QApplication::translate("WordFun", "Submit the word!", 0));
        groupBox_2->setTitle(QApplication::translate("WordFun", "Player 2", 0));
        pushButton_7->setText(QApplication::translate("WordFun", "Submit", 0));
        label_7->setText(QApplication::translate("WordFun", "Your Letters", 0));
        pushButton_3->setText(QApplication::translate("WordFun", "Shuffle", 0));
        label_8->setText(QApplication::translate("WordFun", "Shuffle!!", 0));
        label_9->setText(QApplication::translate("WordFun", "Enter Word Here", 0));
        label_10->setText(QApplication::translate("WordFun", "TextLabel", 0));
        label->setText(QApplication::translate("WordFun", "Submit the word!", 0));
        pushButton_4->setText(QApplication::translate("WordFun", "END Game", 0));
        label_11->setText(QApplication::translate("WordFun", "Shuffle to start! Use given letters to form a WORD!", 0));
        pushButton_5->setText(QApplication::translate("WordFun", "HELP", 0));
    } // retranslateUi

};

namespace Ui {
    class WordFun: public Ui_WordFun {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WORDFUN_H
