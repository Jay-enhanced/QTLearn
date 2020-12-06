#ifndef DIALOGMANUAL_H
#define DIALOGMANUAL_H

#include <QDialog>
#include <QCheckBox>
#include <QRadioButton>
#include <QPlainTextEdit>
#include <QPushButton>

class DialogManual : public QDialog
{
    Q_OBJECT
private:
    QCheckBox *chkBoxUnder;
    QCheckBox *chkBoxItalic;
    QCheckBox *chkBoxBold;
    QRadioButton *rBtnBlack;
    QRadioButton *rBtnBlue;
    QRadioButton *rBtnRed;
    QPlainTextEdit *plainTextEdit;
    QPushButton *btnOK;
    QPushButton *btnCancel;
    QPushButton *btnExit;

    void initUI(void);
    void initSignalSlots(void);

private slots:
    void on_chkBoxUnder(bool checked);
    void on_chkBoxItalic(bool checked);
    void on_chkBoxBold(bool checked);
    void setPlainTextColor();

public:
    DialogManual(QWidget *parent = nullptr);
    ~DialogManual();
};

#endif // DIALOGMANUAL_H
