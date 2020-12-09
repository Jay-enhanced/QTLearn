#ifndef MAINTEXTEDITOR_H
#define MAINTEXTEDITOR_H

#include <QMainWindow>
#include <QLabel>
#include <QProgressBar>
#include <QSpinBox>
#include <QFontComboBox>

namespace Ui {
class MainTextEditor;
}

class MainTextEditor : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainTextEditor(QWidget *parent = nullptr);
    ~MainTextEditor();

private slots:
    void on_actionBold_triggered(bool checked);

    void on_actionItalic_triggered(bool checked);

    void on_actionUnderline_triggered(bool checked);

    void on_textEdit_copyAvailable(bool b);

    void on_textEdit_selectionChanged();

    void on_spinBoxFontSize_valueChanged(int aFontSize);

    void on_comboFont_currentIndexChanged(const QString &arg1);

private:
    Ui::MainTextEditor *ui;
    QLabel *fLabCurFile;
    QProgressBar *progressBar1;
    QSpinBox *spinFontSize;
    QFontComboBox *comboFont;

    void initUI(void);

    void initSignalSlots();
};

#endif // MAINTEXTEDITOR_H
