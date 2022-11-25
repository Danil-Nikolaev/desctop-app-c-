/********************************************************************************
** Form generated from reading UI file 'minus.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MINUS_H
#define UI_MINUS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_minus
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QTextEdit *textEdit;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton;

    void setupUi(QDialog *minus)
    {
        if (minus->objectName().isEmpty())
            minus->setObjectName(QString::fromUtf8("minus"));
        minus->resize(400, 300);
        verticalLayout = new QVBoxLayout(minus);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(minus);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        textEdit = new QTextEdit(minus);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        verticalLayout->addWidget(textEdit);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout->addItem(horizontalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton_2 = new QPushButton(minus);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        pushButton = new QPushButton(minus);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(minus);
        QObject::connect(pushButton, SIGNAL(clicked()), minus, SLOT(Close()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), minus, SLOT(Search()));

        QMetaObject::connectSlotsByName(minus);
    } // setupUi

    void retranslateUi(QDialog *minus)
    {
        minus->setWindowTitle(QCoreApplication::translate("minus", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("minus", "\320\220\320\261\320\276\320\275\320\265\320\275\321\202\321\213 \321\201 \320\276\321\202\321\200\320\270\321\206\320\260\321\202\320\265\320\273\321\214\320\275\321\213\320\274 \320\261\320\260\320\273\320\260\320\275\321\201\320\276\320\274", nullptr));
        pushButton_2->setText(QCoreApplication::translate("minus", "\320\237\320\276\320\270\321\201\320\272", nullptr));
        pushButton->setText(QCoreApplication::translate("minus", "\320\222\321\213\321\205\320\276\320\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class minus: public Ui_minus {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MINUS_H
