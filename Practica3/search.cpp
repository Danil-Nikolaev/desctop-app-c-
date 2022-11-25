#include "search.h"
#include "ui_search.h"
#include <mainwindow.h>
#include <iostream>
#include <string>


Search::Search(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Search)
{
    ui->setupUi(this);
}

void Search::Close(){
    close();
}

void Search::MyStrToChar(std::string stra, char *ch){
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

void Search::CleanEdit(){
    ui->lineEdit_fam->clear();
    ui->lineEdit_name->clear();
    ui->lineEdit_futh->clear();
}

void Search::Search_func(){
    int c = 1;
    char name[30], futh[30], fam[30];

    euser MyUser;
    std::fstream  f;

    ui->textEdit->clear();
    f.open("telefon.dat", std::ios::in| std::ios::binary);

    MyStrToChar(ui->lineEdit_fam->text().toStdString(), fam);
    MyStrToChar(ui->lineEdit_name->text().toStdString(), name);
    MyStrToChar(ui->lineEdit_futh->text().toStdString(), futh);

    f.read(reinterpret_cast<char*>(&MyUser), sizeof(MyUser));

    while(!f.eof()){

        if ((strcmp(MyUser.fam, fam) == 0) && (strcmp(MyUser.name, name) == 0) && (strcmp(MyUser.futh, futh) == 0)){
            c = 0;
            ui->textEdit->insertPlainText(QString::fromStdString(std::string(MyUser.phone)));
            ui->textEdit->insertPlainText("\n");
            ui->textEdit->insertPlainText(QString::fromStdString(std::string(MyUser.bal)));
            ui->textEdit->insertPlainText("\n");
            ui->textEdit->insertPlainText(QString::fromStdString(std::string(MyUser.year)));
            ui->textEdit->insertPlainText("\n");
        }
        ui->textEdit->insertPlainText("Итерация");
        ui->textEdit->insertPlainText("\n");
        f.read(reinterpret_cast<char*>(&MyUser), sizeof(MyUser));
    }
    if (c != 0){
        ui->textEdit->insertPlainText("Нет данных");
    }

    ui->lineEdit_fam->clear();
    ui->lineEdit_name->clear();
    ui->lineEdit_futh->clear();

    f.close();
}

Search::~Search()
{
    delete ui;
}
