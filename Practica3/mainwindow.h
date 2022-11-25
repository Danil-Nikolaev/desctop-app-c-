#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <fstream>
#include <iostream>


typedef struct {
    char fam[30];
    char name[30];
    char futh[30];
    char phone[30];
    char bal[30];
    char year[30];
}euser;

//std::fstream extern f;


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void OpenRec();
    void OpenSearch();
    void OpenYear();
    void OpenMinus();
    void OpenGrafik();
    void Close();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
