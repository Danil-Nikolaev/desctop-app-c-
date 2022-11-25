#include "dialog.h"
#include "ui_dialog.h"
#include <mainwindow.h>


Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    ui->lineEdit_fam->setPlaceholderText("Введите фамилию");
    ui->lineEdit_name->setPlaceholderText("Введите имя");
    ui->lineEdit_futh->setPlaceholderText("Введите отчество");
    ui->lineEdit_phone->setPlaceholderText("Введите номер телефона");
    ui->lineEdit_bal->setPlaceholderText("Введите баланс");
    ui->lineEdit_year->setPlaceholderText("Введите год подключения");
}

void Dialog::Close(){
    close();
}

void Dialog::MyStrToChar(std::string stra, char*ch){
    int i = 0;
    for (int c = 0; c < 30; c++){
        ch[c] = rand() % 26 + 65;
    }
    for (std::string::iterator it = stra.begin(); it != stra.end(); ++it){
        ch[i] = *it;
        i += 1;
    }
    ch[i] = '\0';
}

void Dialog::Record(){

    euser MyUser;
    std::fstream  f;
    char name[30], fam[30], futh[30], phone[30], bal[30], year[30];

    f.open("telefon.dat", std::ios::out| std::ios::app| std::ios::binary);

    bool valid = true;

    for(int i = 0; i < ui->lineEdit_fam->text().toStdString().length(); i++){

        if (ui->lineEdit_fam->text().toStdString().length() > 20) {
            valid = false;
            ui->lineEdit_fam->setText("Длина строки больше 20 символов");
            break;
        }

//        if (std::isalpha(ui->lineEdit_fam->text().toStdString()[i]) == 0) {
//            valid = false;
//            ui->lineEdit_fam->setText("В Фамилии должны присутствовать только буквы");
//            break;
//        }
    }

    for(int i = 0; i < ui->lineEdit_name->text().toStdString().length(); i++){

        if (ui->lineEdit_name->text().toStdString().length() > 20) {
            ui->lineEdit_name->setText("Длина строки больше 20 символов");
            valid = false;
            break;
        }

//        if (std::isalpha(ui->lineEdit_name->text().toStdString()[i]) == 0) {
//            valid = false;
//            ui->lineEdit_name->setText("В имени должны присутствовать только буквы");
//            break;
//        }
    }

    for(int i = 0; i < ui->lineEdit_futh->text().toStdString().length(); i++){

        if (ui->lineEdit_futh->text().toStdString().length() > 20) {
            valid = false;
            ui->lineEdit_futh->setText("Длина строки больше 20 символов");
            break;
        }

//        if (std::isalpha(ui->lineEdit_futh->text().toStdString()[i]) == 0) {
//            valid = false;
//            ui->lineEdit_futh->setText("В отчестве должны присутствовать только буквы");
//            break;
//        }
    }

    for (int i = 0; i < ui->lineEdit_phone->text().toStdString().length(); i++){

        if (ui->lineEdit_phone->text().toStdString().length() > 20) {
            valid = false;
            ui->lineEdit_phone->setText("Длина строки больше 20 символов");
            break;
        }

        if (std::isdigit(ui->lineEdit_phone->text().toStdString()[i]) == 0) {
            valid = false;
            ui->lineEdit_phone->setText("У номера телефона должны присутствовать только цифры");
            break;
        }
    }

    for (int i = 0; i < ui->lineEdit_bal->text().toStdString().length(); i++){

        if (ui->lineEdit_bal->text().toStdString().length() > 20 ) {
            valid = false;
            ui->lineEdit_bal->setText("Длина строки больше 20 символов");
            break;
        }

        if (std::isdigit(ui->lineEdit_bal->text().toStdString()[i]) == 0 || ui->lineEdit_bal->text().toStdString()[0] == '-' ) {
            valid = false;
            ui->lineEdit_bal->setText("У номера телефона должны присутствовать только цифры");
            break;
        }
    }

    for (int i = 0; i < ui->lineEdit_year->text().toStdString().length(); i++){

        if (ui->lineEdit_year->text().toStdString().length() > 20) {
            valid = false;
            ui->lineEdit_year->setText("Длина строки больше 20 символов");
            break;
        }

//        if (std::isdigit(ui->lineEdit_year->text().toStdString()[i]) == 0) {
//            valid = false;
//            ui->lineEdit_year->setText("В году должны присутствовать только цифры");
//            break;
//        }

        if (std::stoi(ui->lineEdit_year->text().toStdString()) < 2005 || std::stoi(ui->lineEdit_year->text().toStdString()) > 2029){
            valid = false;
            ui->lineEdit_year->setText("Допускается значения от 2005 до 2029");
            break;
        }
    }

    if (valid){

        MyStrToChar(ui->lineEdit_name->text().toStdString(), name);
        MyStrToChar(ui->lineEdit_fam->text().toStdString(), fam);
        MyStrToChar(ui->lineEdit_futh->text().toStdString(), futh);
        MyStrToChar(ui->lineEdit_phone->text().toStdString(), phone);
        MyStrToChar(ui->lineEdit_bal->text().toStdString(), bal);
        MyStrToChar(ui->lineEdit_year->text().toStdString(), year);

        strcpy(MyUser.name, name);
        strcpy(MyUser.fam, fam);
        strcpy(MyUser.futh, futh);
        strcpy(MyUser.phone, phone);
        strcpy(MyUser.bal, bal);
        strcpy(MyUser.year, year);

        ui->lineEdit_fam->clear();
        ui->lineEdit_name->clear();
        ui->lineEdit_futh->clear();
        ui->lineEdit_phone->clear();
        ui->lineEdit_bal->clear();
        ui->lineEdit_year->clear();

        f.write(reinterpret_cast<char*>(&MyUser), sizeof(MyUser));
    }

    f.close();
}


Dialog::~Dialog()
{
    delete ui;
}
