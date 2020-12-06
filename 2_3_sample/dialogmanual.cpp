#include "dialogmanual.h"
#include <QHBoxLayout>
#include <QVBoxLayout>

DialogManual::DialogManual(QWidget *parent)
    : QDialog(parent)
{
    initUI();
    initSignalSlots();
    setWindowTitle("Form created manually");
}

DialogManual::~DialogManual()
{
    delete this;
}

void DialogManual::initUI(void)
{
    //create checkBox
    chkBoxBold = new QCheckBox(tr("Bold"));
    chkBoxUnder = new QCheckBox(tr("Underline"));
    chkBoxBold = new QCheckBox(tr("Bold"));
    QHBoxLayout *hboxlayout_chkBox = new QHBoxLayout;
    hboxlayout_chkBox->addWidget(chkBoxUnder);
    hboxlayout_chkBox->addWidget(chkBoxBold);
    hboxlayout_chkBox->addWidget(chkBoxItalic);

    //create radioButton
    rBtnRed = new QRadioButton(tr("Red"));
    rBtnBlue = new QRadioButton(tr("Blue"));
    rBtnBlack = new QRadioButton(tr("Black"));
    QHBoxLayout *hboxlayout_rBtn = new QHBoxLayout;
    hboxlayout_rBtn->addWidget(rBtnRed);
    hboxlayout_rBtn->addWidget(rBtnBlue);
    hboxlayout_rBtn->addWidget(rBtnBlack);


    //create button
    btnOK = new QPushButton(tr("Confirm"));
    btnCancel = new QPushButton(tr("Cancel"));
    btnExit = new QPushButton(tr("Exit"));
    QHBoxLayout *hboxlayout_btn = new QHBoxLayout;
    hboxlayout_btn->addWidget(btnOK);
    hboxlayout_btn->addWidget(btnCancel);
    hboxlayout_btn->addWidget(btnExit);

    //create plaintextEdit
    plainTextEdit = new QPlainTextEdit;
    plainTextEdit->setPlainText("This is my demo\n");
    QFont font = plainTextEdit->font();
    font.setPointSize(20);
    plainTextEdit->setFont(font);

    //create QVBoxLayout
    QVBoxLayout *vboxlayout = new QVBoxLayout;
    vboxlayout->addLayout(hboxlayout_chkBox);
    vboxlayout->addLayout(hboxlayout_rBtn);
    vboxlayout->addWidget(plainTextEdit);
    vboxlayout->addLayout(hboxlayout_btn);

    //set main layout
    setLayout(vboxlayout);
}

void DialogManual::initSignalSlots(void)
{
    //connect checkbox and slot
    connect(chkBoxBold, SIGNAL(clicked(bool)), this, SLOT(on_chkBoxBold()));
    connect(chkBoxUnder, SIGNAL(clicked(bool)), this, SLOT(on_chkBoxUnder()));
    connect(chkBoxItalic, SIGNAL(clicked(bool)), this, SLOT(on_chkBoxItalic()));

    //connect radiobutton and slot
    connect(rBtnRed, SIGNAL(clicked), this, SLOT(setPlainTextColor()));
    connect(rBtnBlue, SIGNAL(clicked), this, SLOT(setPlainTextColor()));
    connect(rBtnBlack, SIGNAL(clicked), this, SLOT(setPlainTextColor()));

    //connect button and slot
    connect(btnOK, SIGNAL(clicked), this, SLOT(accept()));
    connect(btnExit, SIGNAL(clicked), this, SLOT(close()));
    connect(btnCancel, SIGNAL(clicked), this, SLOT(reject()));
}

void DialogManual::on_chkBoxBold(bool checked)
{
    QFont font = plainTextEdit->font();
    font.setBold(checked);
    plainTextEdit->setFont(font);
}

void DialogManual::on_chkBoxUnder(bool checked)
{
    QFont font = plainTextEdit->font();
    font.setUnderline(checked);
    plainTextEdit->setFont(font);
}

void DialogManual::on_chkBoxItalic(bool checked)
{
    QFont font = plainTextEdit->font();
    font.setItalic(checked);
    plainTextEdit->setFont(font);
}

void DialogManual::setPlainTextColor(void)
{
    QPalette palette = plainTextEdit->palette();

    if(rBtnRed->isChecked())
        palette.setColor(QPalette::Text, Qt::red);
    else if(rBtnBlue->isChecked())
        palette.setColor(QPalette::Text, Qt::blue);
    else if(rBtnBlack->isChecked())
        palette.setColor(QPalette::Text, Qt::black);
    else palette.setColor(QPalette::Text, Qt::black);
}

