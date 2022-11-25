#ifndef SEARCH_H
#define SEARCH_H

#include <QDialog>

namespace Ui {
class Search;
}

class Search : public QDialog
{
    Q_OBJECT

public:
    explicit Search(QWidget *parent = nullptr);
    ~Search();
private slots:
    void Close();
    void Search_func();
    void CleanEdit();

private:
    void MyStrToChar(std::string stra, char *ch);
    Ui::Search *ui;
};

#endif // SEARCH_H
