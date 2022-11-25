#ifndef YEAR_H
#define YEAR_H

#include <QDialog>

namespace Ui {
class year;
}

class year : public QDialog
{
    Q_OBJECT

public:
    explicit year(QWidget *parent = nullptr);
    ~year();

private slots:
    void Close();
    void Search();

private:
    Ui::year *ui;
    void MyStrToChar(std::string stra, char *ch);
};

#endif // YEAR_H
