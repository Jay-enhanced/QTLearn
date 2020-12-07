#ifndef MAINTEXTEDITOR_H
#define MAINTEXTEDITOR_H

#include <QMainWindow>

namespace Ui {
class MainTextEditor;
}

class MainTextEditor : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainTextEditor(QWidget *parent = nullptr);
    ~MainTextEditor();

private:
    Ui::MainTextEditor *ui;
};

#endif // MAINTEXTEDITOR_H
