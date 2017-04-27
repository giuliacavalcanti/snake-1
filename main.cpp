#include "mysnake.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MySnake w;
    w.show();

    return a.exec();
}
