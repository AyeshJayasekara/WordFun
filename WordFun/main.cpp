#include "wordfun.h"
#include <QApplication>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    WordFun w;
    w.show();

    return a.exec();
}
