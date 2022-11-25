#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <dialog.h>
#include <search.h>
#include <minus.h>
#include <year.h>
#include <grafik.h>
#include <string>
#include <fstream>
#include <iostream>



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

void MainWindow::OpenRec(){
    Dialog *dialog = new Dialog;
    //f = fopen("telefon.dat", "w+b");
    //f.open("telefon.dat", std::ios::out| std::ios::app| std::ios::binary);
    dialog->show();
}

void MainWindow::OpenSearch(){
    Search *search = new Search;
     //f = fopen("telefon.dat", "r+b");
    search ->show();
}

void MainWindow::OpenYear(){
    year *Year = new year;
   //f = fopen("telefon.dat", "r+b");
    Year->show();
}

void MainWindow::OpenMinus(){
    minus *Minus = new minus;
   // f = fopen("telefon.dat", "r+b");
    Minus->show();
}

void MainWindow::OpenGrafik(){
    Grafik *grafik = new Grafik;
   // f = fopen("telefon.dat", "r+b");
    grafik->show();
}

void MainWindow::Close(){
    close();
}

MainWindow::~MainWindow()
{
    delete ui;
}

