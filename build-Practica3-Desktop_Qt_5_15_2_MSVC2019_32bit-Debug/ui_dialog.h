/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEdit_fam;
    QLineEdit *lineEdit_name;
    QLineEdit *lineEdit_futh;
    QLineEdit *lineEdit_phone;
    QLineEdit *lineEdit_bal;
    QLineEdit *lineEdit_year;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_search;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_exit;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(581, 417);
        verticalLayout_3 = new QVBoxLayout(Dialog);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(Dialog);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        label_2 = new QLabel(Dialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(Dialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(Dialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout->addWidget(label_4);

        label_5 = new QLabel(Dialog);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout->addWidget(label_5);

        label_6 = new QLabel(Dialog);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout->addWidget(label_6);


        horizontalLayout->addLayout(verticalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        horizontalLayout->addItem(verticalSpacer);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        lineEdit_fam = new QLineEdit(Dialog);
        lineEdit_fam->setObjectName(QString::fromUtf8("lineEdit_fam"));

        verticalLayout_2->addWidget(lineEdit_fam);

        lineEdit_name = new QLineEdit(Dialog);
        lineEdit_name->setObjectName(QString::fromUtf8("lineEdit_name"));

        verticalLayout_2->addWidget(lineEdit_name);

        lineEdit_futh = new QLineEdit(Dialog);
        lineEdit_futh->setObjectName(QString::fromUtf8("lineEdit_futh"));

        verticalLayout_2->addWidget(lineEdit_futh);

        lineEdit_phone = new QLineEdit(Dialog);
        lineEdit_phone->setObjectName(QString::fromUtf8("lineEdit_phone"));

        verticalLayout_2->addWidget(lineEdit_phone);

        lineEdit_bal = new QLineEdit(Dialog);
        lineEdit_bal->setObjectName(QString::fromUtf8("lineEdit_bal"));

        verticalLayout_2->addWidget(lineEdit_bal);

        lineEdit_year = new QLineEdit(Dialog);
        lineEdit_year->setObjectName(QString::fromUtf8("lineEdit_year"));

        verticalLayout_2->addWidget(lineEdit_year);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pushButton_search = new QPushButton(Dialog);
        pushButton_search->setObjectName(QString::fromUtf8("pushButton_search"));

        horizontalLayout_2->addWidget(pushButton_search);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        pushButton_exit = new QPushButton(Dialog);
        pushButton_exit->setObjectName(QString::fromUtf8("pushButton_exit"));

        horizontalLayout_2->addWidget(pushButton_exit);


        verticalLayout_3->addLayout(horizontalLayout_2);


        retranslateUi(Dialog);
        QObject::connect(pushButton_exit, SIGNAL(clicked()), Dialog, SLOT(Close()));
        QObject::connect(pushButton_search, SIGNAL(clicked()), Dialog, SLOT(Record()));

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Dialog", "\320\244\320\260\320\274\320\270\320\273\320\270\321\201\321\217", nullptr));
        label_2->setText(QCoreApplication::translate("Dialog", "\320\230\320\274\321\217", nullptr));
        label_3->setText(QCoreApplication::translate("Dialog", "\320\236\321\202\321\207\320\265\321\201\321\202\320\262\320\276", nullptr));
        label_4->setText(QCoreApplication::translate("Dialog", "\320\235\320\276\320\274\320\265\321\200 \321\202\320\265\320\273\320\265\321\204\320\276\320\275\320\260", nullptr));
        label_5->setText(QCoreApplication::translate("Dialog", "\320\221\320\260\320\273\320\260\320\275\321\201", nullptr));
        label_6->setText(QCoreApplication::translate("Dialog", "\320\223\320\276\320\264 \320\277\320\276\320\264\320\272\320\273\321\216\321\207\320\265\320\275\320\270\321\217", nullptr));
        pushButton_search->setText(QCoreApplication::translate("Dialog", "\320\227\320\260\320\277\320\270\321\201\320\260\321\202\321\214", nullptr));
        pushButton_exit->setText(QCoreApplication::translate("Dialog", "\320\222\321\213\321\205\320\276\320\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
