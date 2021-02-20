#include "mainwindow.h"
#include <QApplication>
#include "simplethreadone.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    simplethreadone *SThread = new simplethreadone();
    SThread->start();


    return a.exec();
}
