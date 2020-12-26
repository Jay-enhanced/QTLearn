#include "widget.h"
#include "ui_widget.h"
#include <QMessageBox>

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

void Widget::on_calculate_pushButton_clicked()
{
    QMessageBox *warningMessageBox = new QMessageBox("错误",
                                                    "数量输入应为整数",
                                                    QMessageBox::Critical,
                                                    QMessageBox::Ok | QMessageBox::Default,
                                                    QMessageBox::Cancel | QMessageBox::Escape,
                                                    0);
    QString str = ui->quantity_lineEdit->text();

    if(str.contains('.', Qt::CaseInsensitive))
    {
        warningMessageBox->show();
    }
    else
    {
        int quantity = str.toInt();
        str = ui->unitPrice_lineEdit->text();
        float unitPrice = str.toFloat();
        float totalPrice = quantity*unitPrice;
        str = str.sprintf("%.2f", totalPrice);
        ui->totalPrice_lineEdit->setText(str);
    }
}

void Widget::on_dec_lineEdit_textChanged(const QString &arg1)
{
    QString str = arg1;
    int val = str.toInt();
    str = str.setNum(val, 2);
    ui->bin_lineEdit->setText(str);
    str = str.setNum(val, 16);
    ui->hex_lineEdit->setText(str);
}

void Widget::on_bin_lineEdit_textChanged(const QString &arg1)
{
    QString str = arg1;
    bool ok;
    int val = str.toInt(&ok, 2);
    str = str.setNum(val, 10);
    ui->dec_lineEdit->setText(str);
    str = str.setNum(val, 16);
    ui->hex_lineEdit->setText(str);
}

void Widget::on_hex_lineEdit_textChanged(const QString &arg1)
{
    QString str = arg1;
    bool ok;
    int val = str.toInt(&ok, 16);
    str = str.setNum(val, 2);
    ui->bin_lineEdit->setText(str);
    str = str.setNum(val, 10);
    ui->dec_lineEdit->setText(str);
}
