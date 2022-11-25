#ifndef GRAFIK_H
#define GRAFIK_H

#include <QDialog>

namespace Ui {
class Grafik;
}

class Grafik : public QDialog
{
    Q_OBJECT

public:
    explicit Grafik(QWidget *parent = nullptr);
    ~Grafik();
private slots:
    void Close();
    void Paint();

private:
    void PaintGrafik();
    Ui::Grafik *ui;
protected:
    void paintEvent(QPaintEvent *event);
};

#endif // GRAFIK_H
