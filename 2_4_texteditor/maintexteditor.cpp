#include "maintexteditor.h"
#include "ui_maintexteditor.h"

MainTextEditor::MainTextEditor(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainTextEditor)
{
    ui->setupUi(this);
}

MainTextEditor::~MainTextEditor()
{
    delete ui;
}
