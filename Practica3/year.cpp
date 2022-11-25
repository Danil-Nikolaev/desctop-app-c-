#include "year.h"
#include "ui_year.h"
#include <mainwindow.h>


year::year(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::year)
{
    ui->setupUi(this);
}

void year::Close(){
    close();
}

void year::MyStrToChar(std::string stra, char *ch){
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

void year::Search(){
    std::fstream f;
    euser MyUser;
    char yearch[30];
    int c = 1;

    ui->textEdit->clear();

    f.open("telefon.dat", std::ios::in| std::ios::binary);

    MyStrToChar(ui->lineEdit_year->text().toStdString(), yearch);

    f.read(reinterpret_cast<char*>(&MyUser), sizeof(MyUser));

    while(!f.eof()){
        if (strcmp(yearch, MyUser.year) == 0){
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
        }
        f.read(reinterpret_cast<char*>(&MyUser), sizeof(MyUser));
    }
    if (c != 0){
        ui->textEdit->insertPlainText("Нет данных");
    }

    f.close();
}

year::~year()
{
    delete ui;
}
