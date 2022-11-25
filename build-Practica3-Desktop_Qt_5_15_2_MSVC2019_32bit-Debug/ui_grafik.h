/********************************************************************************
** Form generated from reading UI file 'grafik.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRAFIK_H
#define UI_GRAFIK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Grafik
{
public:
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_close;

    void setupUi(QDialog *Grafik)
    {
        if (Grafik->objectName().isEmpty())
            Grafik->setObjectName(QString::fromUtf8("Grafik"));
        Grafik->resize(538, 350);
        verticalLayout = new QVBoxLayout(Grafik);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer = new QSpacerItem(20, 297, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_close = new QPushButton(Grafik);
        pushButton_close->setObjectName(QString::fromUtf8("pushButton_close"));

        horizontalLayout->addWidget(pushButton_close);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(Grafik);
        QObject::connect(pushButton_close, SIGNAL(clicked()), Grafik, SLOT(Close()));

        QMetaObject::connectSlotsByName(Grafik);
    } // setupUi

    void retranslateUi(QDialog *Grafik)
    {
        Grafik->setWindowTitle(QCoreApplication::translate("Grafik", "Dialog", nullptr));
        pushButton_close->setText(QCoreApplication::translate("Grafik", "\320\222\321\213\321\205\320\276\320\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Grafik: public Ui_Grafik {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRAFIK_H
