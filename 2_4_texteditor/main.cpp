#include "maintexteditor.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainTextEditor w;
    w.show();

    return a.exec();
}
