#ifndef MINUS_H
#define MINUS_H

#include <QDialog>

namespace Ui {
class minus;
}

class minus : public QDialog
{
    Q_OBJECT

public:
    explicit minus(QWidget *parent = nullptr);
    ~minus();
private slots:
    void Close();
    void Search();

private:
    void MyStrToChar(std::string stra, char *ch);
    Ui::minus *ui;
};

#endif // MINUS_H
