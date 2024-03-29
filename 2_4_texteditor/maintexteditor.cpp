#include "maintexteditor.h"
#include "ui_maintexteditor.h"
#include <QFont>
#include <QTextCharFormat>

MainTextEditor::MainTextEditor(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainTextEditor)
{
    ui->setupUi(this);
    initUI();
    initSignalSlots();
}

MainTextEditor::~MainTextEditor()
{
    delete ui;
}

void MainTextEditor::initUI()
{
    //状态栏上添加组件
    fLabCurFile = new QLabel;
    fLabCurFile->setMinimumWidth(150);
    fLabCurFile->setText("当前文件：");
    ui->statusBar->addWidget(fLabCurFile);

    progressBar1 = new QProgressBar;
    progressBar1->setMaximumWidth(200);
    progressBar1->setMinimum(5);
    progressBar1->setMaximum(50);
    progressBar1->setValue(ui->textEdit->font().pointSize());
    ui->statusBar->addWidget(progressBar1);

    //在工具栏上添加组件
    spinFontSize = new QSpinBox;
    spinFontSize->setMinimum(5);
    spinFontSize->setMaximum(50);
    spinFontSize->setValue(ui->textEdit->font().pointSize());
    spinFontSize->setMinimumWidth(50);
    ui->mainToolBar->addWidget(new QLabel("字体大小 "));
    ui->mainToolBar->addWidget(spinFontSize);

    ui->mainToolBar->addSeparator();
    ui->mainToolBar->addWidget(new QLabel(" 字体 "));
    comboFont = new QFontComboBox;
    comboFont->setMinimumWidth(150);
    ui->mainToolBar->addWidget(comboFont);

    setCentralWidget(ui->textEdit);
}

void MainTextEditor::initSignalSlots()
{
    connect(spinFontSize, SIGNAL(valueChanged(int)), this, SLOT(on_spinBoxFontSize_valueChanged(int)));
    connect(comboFont, SIGNAL(currentIndexChanged(QString)), this, SLOT(on_comboFont_currentIndexChanged(const QString &arg1)));
}

void MainTextEditor::on_actionBold_triggered(bool checked)
{
    //这种方法是改变格式，对接下来的输入有效，或者对选中的有效
    QTextCharFormat fmt;
    fmt = ui->textEdit->currentCharFormat();
    if(checked)
        fmt.setFontWeight(QFont::Bold);
    else
        fmt.setFontWeight(QFont::Normal);
    ui->textEdit->mergeCurrentCharFormat(fmt);

    //这种方法对所有文本有效
    /*QFont font;
    font = ui->textEdit->font();
    font.setBold(checked);
    ui->textEdit->setFont(font);*/
}

void MainTextEditor::on_actionItalic_triggered(bool checked)
{
    QTextCharFormat fmt;
    fmt = ui->textEdit->currentCharFormat();
    fmt.setFontItalic(checked);
    ui->textEdit->mergeCurrentCharFormat(fmt);
}

void MainTextEditor::on_actionUnderline_triggered(bool checked)
{
    QTextCharFormat fmt;
    fmt = ui->textEdit->currentCharFormat();
    fmt.setFontUnderline(checked);
    ui->textEdit->mergeCurrentCharFormat(fmt);
}

void MainTextEditor::on_textEdit_copyAvailable(bool b)
{
    ui->actionCut->setEnabled(b);
    ui->actionCopy->setEnabled(b);
    ui->actionPatse->setEnabled(ui->textEdit->canPaste());
}

void MainTextEditor::on_textEdit_selectionChanged()
{
    QTextCharFormat fmt;
    //fmt = ui->textEdit->currentCharFormat();
    ui->actionItalic->setChecked(fmt.fontItalic());
    ui->actionBold->setChecked(fmt.font().bold());
    ui->actionUnderline->setChecked(fmt.fontUnderline());
}

void MainTextEditor::on_spinBoxFontSize_valueChanged(int aFontSize)
{
    QTextCharFormat fmt;
    //fmt = ui->textEdit->currentCharFormat();
    fmt.setFontPointSize(aFontSize);
    ui->textEdit->mergeCurrentCharFormat(fmt);
    progressBar1->setValue(aFontSize);
}

void MainTextEditor::on_comboFont_currentIndexChanged(const QString &arg1)
{
    QTextCharFormat fmt;
    fmt = ui->textEdit->currentCharFormat();
    fmt.setFontFamily(arg1);
    ui->textEdit->mergeCurrentCharFormat(fmt);
}
