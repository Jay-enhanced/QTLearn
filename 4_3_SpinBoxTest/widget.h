#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_pushButtonCalculate_clicked();

    void on_spinBoxDec_valueChanged(int arg1);

    void on_spinBoxBin_valueChanged(int arg1);

    void on_spinBoxHex_valueChanged(int arg1);

private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
