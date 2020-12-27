#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButtonCalculate_clicked()
{
    int num = ui->spinBoxQuantity->value();
    double price = ui->doubleSpinBoxUnitPrice->value();
    double totalPrice = num * price;
    ui->doubleSpinBoxTotalPrice->setValue(totalPrice);
}

void Widget::on_spinBoxDec_valueChanged(int arg1)
{
    ui->spinBoxBin->setValue(arg1);
    ui->spinBoxHex->setValue(arg1);
}

void Widget::on_spinBoxBin_valueChanged(int arg1)
{
    ui->spinBoxDec->setValue(arg1);
    ui->spinBoxHex->setValue(arg1);
}

void Widget::on_spinBoxHex_valueChanged(int arg1)
{
    ui->spinBoxDec->setValue(arg1);
    ui->spinBoxBin->setValue(arg1);
}
