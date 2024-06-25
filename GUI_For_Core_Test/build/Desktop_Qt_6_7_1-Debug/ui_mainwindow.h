/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>
#include <graph_for_input.h>
#include <graph_pie.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action;
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    graph_for_input *tab_bar;
    graph_pie *tab_pie;
    QWidget *tab_pictest;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *pic_in;
    QLabel *pic_out;
    QPushButton *Load_Pic;
    QPushButton *Start_test;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1280, 910);
        MainWindow->setMinimumSize(QSize(320, 320));
        QIcon icon(QIcon::fromTheme(QString::fromUtf8("application-x-executable")));
        MainWindow->setWindowIcon(icon);
        MainWindow->setLocale(QLocale(QLocale::Chinese, QLocale::China));
        action = new QAction(MainWindow);
        action->setObjectName("action");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(10, 0, 1270, 860));
        tabWidget->setLocale(QLocale(QLocale::Chinese, QLocale::China));
        tab_bar = new graph_for_input();
        tab_bar->setObjectName("tab_bar");
        tabWidget->addTab(tab_bar, QString());
        tab_pie = new graph_pie();
        tab_pie->setObjectName("tab_pie");
        tabWidget->addTab(tab_pie, QString());
        tab_pictest = new QWidget();
        tab_pictest->setObjectName("tab_pictest");
        tab_pictest->setLocale(QLocale(QLocale::Chinese, QLocale::China));
        horizontalLayoutWidget = new QWidget(tab_pictest);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(9, 9, 1241, 721));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(10);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pic_in = new QLabel(horizontalLayoutWidget);
        pic_in->setObjectName("pic_in");
        pic_in->setTextFormat(Qt::AutoText);
        pic_in->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(pic_in);

        pic_out = new QLabel(horizontalLayoutWidget);
        pic_out->setObjectName("pic_out");
        pic_out->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(pic_out);

        Load_Pic = new QPushButton(tab_pictest);
        Load_Pic->setObjectName("Load_Pic");
        Load_Pic->setGeometry(QRect(370, 740, 140, 60));
        Start_test = new QPushButton(tab_pictest);
        Start_test->setObjectName("Start_test");
        Start_test->setGeometry(QRect(770, 740, 140, 60));
        tabWidget->addTab(tab_pictest, QString());
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        action->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_bar), QCoreApplication::translate("MainWindow", "\346\235\241\345\275\242\345\233\276", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_pie), QCoreApplication::translate("MainWindow", "\351\245\274\345\233\276", nullptr));
        pic_in->setText(QCoreApplication::translate("MainWindow", "pic_input", nullptr));
        pic_out->setText(QCoreApplication::translate("MainWindow", "pic_out", nullptr));
        Load_Pic->setText(QCoreApplication::translate("MainWindow", "\345\212\240\350\275\275\345\233\276\347\211\207", nullptr));
        Start_test->setText(QCoreApplication::translate("MainWindow", "\345\274\200\345\247\213\346\265\213\350\257\225", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_pictest), QCoreApplication::translate("MainWindow", "\345\233\276\347\211\207\346\265\213\350\257\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
