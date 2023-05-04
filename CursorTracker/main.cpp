#include "mousetracker.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MouseTracker w;
    w.show();
    return a.exec();
}
