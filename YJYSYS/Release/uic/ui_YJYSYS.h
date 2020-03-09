/********************************************************************************
** Form generated from reading UI file 'YJYSYS.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_YJYSYS_H
#define UI_YJYSYS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_YJYSYSClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *YJYSYSClass)
    {
        if (YJYSYSClass->objectName().isEmpty())
            YJYSYSClass->setObjectName(QString::fromUtf8("YJYSYSClass"));
        YJYSYSClass->resize(600, 400);
        menuBar = new QMenuBar(YJYSYSClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        YJYSYSClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(YJYSYSClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        YJYSYSClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(YJYSYSClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        YJYSYSClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(YJYSYSClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        YJYSYSClass->setStatusBar(statusBar);

        retranslateUi(YJYSYSClass);

        QMetaObject::connectSlotsByName(YJYSYSClass);
    } // setupUi

    void retranslateUi(QMainWindow *YJYSYSClass)
    {
        YJYSYSClass->setWindowTitle(QApplication::translate("YJYSYSClass", "YJYSYS", nullptr));
    } // retranslateUi

};

namespace Ui {
    class YJYSYSClass: public Ui_YJYSYSClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_YJYSYS_H
