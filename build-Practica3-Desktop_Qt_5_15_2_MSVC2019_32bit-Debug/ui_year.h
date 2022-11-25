/********************************************************************************
** Form generated from reading UI file 'year.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_YEAR_H
#define UI_YEAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_year
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *lineEdit_year;
    QTextEdit *textEdit;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_2;

    void setupUi(QDialog *year)
    {
        if (year->objectName().isEmpty())
            year->setObjectName(QString::fromUtf8("year"));
        year->resize(482, 341);
        verticalLayout_2 = new QVBoxLayout(year);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(year);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(year);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        lineEdit_year = new QLineEdit(year);
        lineEdit_year->setObjectName(QString::fromUtf8("lineEdit_year"));

        horizontalLayout->addWidget(lineEdit_year);


        verticalLayout->addLayout(horizontalLayout);

        textEdit = new QTextEdit(year);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        verticalLayout->addWidget(textEdit);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pushButton = new QPushButton(year);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout_2->addWidget(pushButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        pushButton_2 = new QPushButton(year);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout_2->addWidget(pushButton_2);


        verticalLayout_2->addLayout(horizontalLayout_2);


        retranslateUi(year);
        QObject::connect(pushButton_2, SIGNAL(clicked()), year, SLOT(Close()));
        QObject::connect(pushButton, SIGNAL(clicked()), year, SLOT(Search()));

        QMetaObject::connectSlotsByName(year);
    } // setupUi

    void retranslateUi(QDialog *year)
    {
        year->setWindowTitle(QCoreApplication::translate("year", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("year", "\320\237\320\265\321\200\320\265\321\207\320\265\320\275\321\214 \320\260\320\261\320\276\320\275\320\265\320\275\321\202\320\276\320\262 , \320\277\320\276\320\264\320\272\320\273\321\216\321\207\320\265\320\275\320\275\321\213\321\205 \320\262 \320\267\320\260\320\264\320\260\320\275\320\275\320\276\320\274 \320\263\320\276\320\264\321\203.", nullptr));
        label_2->setText(QCoreApplication::translate("year", "\320\223\320\276\320\264", nullptr));
        pushButton->setText(QCoreApplication::translate("year", "\320\237\320\276\320\270\321\201\320\272", nullptr));
        pushButton_2->setText(QCoreApplication::translate("year", "\320\222\321\213\321\205\320\276\320\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class year: public Ui_year {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_YEAR_H
