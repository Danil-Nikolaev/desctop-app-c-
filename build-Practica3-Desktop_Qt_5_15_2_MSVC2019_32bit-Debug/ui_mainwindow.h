/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QPushButton *Button_record;
    QPushButton *Button_search;
    QPushButton *Button_search_year;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *verticalLayout_2;
    QPushButton *Button_minus;
    QPushButton *Button_grafik;
    QSpacerItem *verticalSpacer;
    QPushButton *Button_ext;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout_4 = new QVBoxLayout(centralwidget);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setLineWidth(6);
        label->setAlignment(Qt::AlignCenter);
        label->setIndent(3);

        verticalLayout_3->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        Button_record = new QPushButton(centralwidget);
        Button_record->setObjectName(QString::fromUtf8("Button_record"));

        verticalLayout->addWidget(Button_record);

        Button_search = new QPushButton(centralwidget);
        Button_search->setObjectName(QString::fromUtf8("Button_search"));

        verticalLayout->addWidget(Button_search);

        Button_search_year = new QPushButton(centralwidget);
        Button_search_year->setObjectName(QString::fromUtf8("Button_search_year"));

        verticalLayout->addWidget(Button_search_year);


        horizontalLayout->addLayout(verticalLayout);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        horizontalLayout->addItem(verticalSpacer_2);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        Button_minus = new QPushButton(centralwidget);
        Button_minus->setObjectName(QString::fromUtf8("Button_minus"));

        verticalLayout_2->addWidget(Button_minus);

        Button_grafik = new QPushButton(centralwidget);
        Button_grafik->setObjectName(QString::fromUtf8("Button_grafik"));

        verticalLayout_2->addWidget(Button_grafik);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 150, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer);


        verticalLayout_4->addLayout(verticalLayout_3);

        Button_ext = new QPushButton(centralwidget);
        Button_ext->setObjectName(QString::fromUtf8("Button_ext"));

        verticalLayout_4->addWidget(Button_ext);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);
        QObject::connect(Button_record, SIGNAL(clicked()), MainWindow, SLOT(OpenRec()));
        QObject::connect(Button_search, SIGNAL(clicked()), MainWindow, SLOT(OpenSearch()));
        QObject::connect(Button_search_year, SIGNAL(clicked()), MainWindow, SLOT(OpenYear()));
        QObject::connect(Button_minus, SIGNAL(clicked()), MainWindow, SLOT(OpenMinus()));
        QObject::connect(Button_grafik, SIGNAL(clicked()), MainWindow, SLOT(OpenGrafik()));
        QObject::connect(Button_ext, SIGNAL(clicked()), MainWindow, SLOT(Close()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\221\320\260\320\267\320\260 \320\264\320\260\320\275\320\275\321\213\321\205 \320\276\320\277\320\265\321\200\320\260\321\202\320\276\321\200\320\260 \320\274\320\276\320\261\320\270\320\273\321\214\320\275\320\276\320\271 \321\201\320\262\321\217\320\267\320\270", nullptr));
        Button_record->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\277\320\270\321\201\321\214 \320\262 \320\221\320\224", nullptr));
        Button_search->setText(QCoreApplication::translate("MainWindow", "\320\236\320\277\321\200\320\265\320\264\320\265\320\273\320\270\321\202\321\214 \320\275\320\276\320\274\320\265\321\200\320\260", nullptr));
        Button_search_year->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\270\321\201\320\272 \320\277\320\276 \320\263\320\276\320\264\321\203", nullptr));
        Button_minus->setText(QCoreApplication::translate("MainWindow", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\275\320\276\320\274\320\265\321\200\320\276\320\262 \321\201 \320\276\321\202\321\200\320\270\321\206\320\260\321\202\320\265\320\273\321\214\320\275\321\213\320\274 \320\261\320\260\320\273\320\260\320\275\321\201\320\276\320\274", nullptr));
        Button_grafik->setText(QCoreApplication::translate("MainWindow", "\320\223\321\200\320\260\321\204\320\270\320\272", nullptr));
        Button_ext->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\321\205\320\276\320\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
