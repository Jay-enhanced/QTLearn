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
    void on_calculate_pushButton_clicked();

    void on_dec_lineEdit_textChanged(const QString &arg1);

    void on_bin_lineEdit_textChanged(const QString &arg1);

    void on_hex_lineEdit_textChanged(const QString &arg1);

private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
