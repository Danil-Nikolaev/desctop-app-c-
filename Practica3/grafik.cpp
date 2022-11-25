#include "grafik.h"
#include "ui_grafik.h"
#include <mainwindow.h>
#include <QPainter>


Grafik::Grafik(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Grafik)
{
    ui->setupUi(this);
}

void Grafik::Close(){
    close();
}

void Grafik::Paint(){
    repaint();
}

void Grafik::paintEvent(QPaintEvent *event){
    Q_UNUSED(event);

    QPainter painter(this);

    painter.setPen(QPen(Qt::black, 1, Qt::SolidLine, Qt::FlatCap));
    painter.drawLine(30,10, 30, 310);
    painter.drawLine(30,310, 800, 310);

    this->setMinimumWidth(830);
    this ->setMinimumHeight(390);

    int c = 20;
    for (int i = 1; i <= 20; i++){
        int x = 30;
        int y = 15;
        painter.setPen(QPen(Qt::black, 1, Qt::SolidLine, Qt::FlatCap));
        painter.drawLine(x-3, y * i, x + 3, y * i );
        painter.drawText(x-20, y * i + 5, QString::number(c));
        c -= 1;
        painter.setPen(QPen(Qt::black, 1, Qt::DotLine, Qt::FlatCap));
        painter.drawLine(30, y * i, 800, y * i );
    }

    c = 2005;
    for (int i = 2; i <= 26; i++){
        int y = 310;
        int x = 30;
        painter.setPen(QPen(Qt::black, 1, Qt::SolidLine, Qt::FlatCap));
        painter.drawLine(x * i, y - 3, x * i, y + 3);
        painter.drawText(x * i - 10, y + 15, QString::number(c));
        c += 1;
        painter.setPen(QPen(Qt::black, 1, Qt::DotLine, Qt::FlatCap));
        painter.drawLine(x * i, 10, x * i, 310);
    }

    std::fstream f;
    euser MyUser;
    int arrayyear[26];

    f.open("telefon.dat", std::ios::in| std::ios::binary);

    for (int i = 0; i <= 25; i++){
        arrayyear[i] = 0;
    }

    f.read(reinterpret_cast<char*>(&MyUser), sizeof(MyUser));

    while (!f.eof()){
        int year = std::stoi(std::string(MyUser.year)) - 2005;
        arrayyear[year] += 1;
        f.read(reinterpret_cast<char*>(&MyUser), sizeof(MyUser));
    }
    painter.setPen(QPen(Qt::blue, 2, Qt::SolidLine, Qt::FlatCap));
    int x = 30, y = 310, old_x = 30, old_y = 310;


    for (int i = 0; i <= 25; i++){
        if (arrayyear[i] != 0){
            x += 30;
            y = 310 - (15 * arrayyear[i]) + 4;
            painter.drawLine(old_x, old_y, x , y);
            old_x = x;
            old_y = y;
        }else{
            x += 30;
            painter.drawLine(old_x, old_y, x, 310);
            old_x = x;
            old_y = 310;
        }
    }
    f.close();
}

Grafik::~Grafik()
{
    delete ui;
}
