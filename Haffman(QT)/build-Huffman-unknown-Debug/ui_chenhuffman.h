/********************************************************************************
** Form generated from reading UI file 'chenhuffman.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHENHUFFMAN_H
#define UI_CHENHUFFMAN_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QProgressBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QTextEdit>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChenHuffman
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QProgressBar *progressBar;
    QTextEdit *textEdit;
    QLabel *label;
    QLabel *label_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *ChenHuffman)
    {
        if (ChenHuffman->objectName().isEmpty())
            ChenHuffman->setObjectName(QString::fromUtf8("ChenHuffman"));
        ChenHuffman->resize(788, 680);
        centralWidget = new QWidget(ChenHuffman);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(140, 490, 151, 61));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(460, 490, 151, 61));
        progressBar = new QProgressBar(centralWidget);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setGeometry(QRect(20, 570, 751, 41));
        progressBar->setValue(24);
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(100, 340, 551, 131));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 801, 291));
        label->setTextFormat(Qt::AutoText);
        label->setPixmap(QPixmap(QString::fromUtf8("MainMeun.png")));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(-300, 290, 1131, 41));
        label_2->setPixmap(QPixmap(QString::fromUtf8("SecMenu.png")));
        ChenHuffman->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(ChenHuffman);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 788, 26));
        ChenHuffman->setMenuBar(menuBar);
        mainToolBar = new QToolBar(ChenHuffman);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        ChenHuffman->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(ChenHuffman);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        ChenHuffman->setStatusBar(statusBar);

        retranslateUi(ChenHuffman);

        QMetaObject::connectSlotsByName(ChenHuffman);
    } // setupUi

    void retranslateUi(QMainWindow *ChenHuffman)
    {
        ChenHuffman->setWindowTitle(QApplication::translate("ChenHuffman", "ChenHuffman", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("ChenHuffman", "\345\216\213\347\274\251", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("ChenHuffman", "\350\247\243\345\216\213", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ChenHuffman: public Ui_ChenHuffman {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHENHUFFMAN_H
