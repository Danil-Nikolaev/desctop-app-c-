#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr);
    void MyStrToChar(std::string stra, char *ch);
    ~Dialog();
private slots:
    void Close();
    void Record();

private:

    Ui::Dialog *ui;
};

#endif // DIALOG_H
