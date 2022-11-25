#include "minus.h"
#include "ui_minus.h"
#include <mainwindow.h>


minus::minus(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::minus)
{
    ui->setupUi(this);
}

void minus::MyStrToChar(std::string stra, char *ch){
    int i = 0;
    for (int c = 0; c < 30; c++){
        ch[c] = ' ';
    }
    for (std::string::iterator it = stra.begin(); it != stra.end(); ++it){
        ch[i] = *it;
        i += 1;
    }
    ch[i] = '\0';
}

void minus::Close(){
    close();
    //fclose(f);
}

void minus::Search(){
    std::fstream f;
    euser MyUser;
    std::string bal;
    int c = 1, inbal;

    ui->textEdit->clear();

    f.open("telefon.dat", std::ios::in| std::ios::binary);


    f.read(reinterpret_cast<char*>(&MyUser), sizeof(MyUser));

    while (!f.eof()){
        inbal =std::stoi(std::string(MyUser.bal));

        if (inbal < 0){
            c = 0;
            ui->textEdit->insertPlainText(QString::fromStdString(std::string(MyUser.fam)));
            ui->textEdit->insertPlainText("\n");
            ui->textEdit->insertPlainText(QString::fromStdString(std::string(MyUser.name)));
            ui->textEdit->insertPlainText("\n");
            ui->textEdit->insertPlainText(QString::fromStdString(std::string(MyUser.futh)));
            ui->textEdit->insertPlainText("\n");
            ui->textEdit->insertPlainText(QString::fromStdString(std::string(MyUser.phone)));
            ui->textEdit->insertPlainText("\n");
            ui->textEdit->insertPlainText(QString::fromStdString(std::string(MyUser.bal)));
            ui->textEdit->insertPlainText("\n");
            ui->textEdit->insertPlainText(QString::fromStdString(std::string(MyUser.year)));
            ui->textEdit->insertPlainText("\n");
        }
        f.read(reinterpret_cast<char*>(&MyUser), sizeof(MyUser));
    }
    if (c != 0){
        ui->textEdit->insertPlainText("Нет данных");
    }

    f.close();
}

minus::~minus()
{
    delete ui;
}
