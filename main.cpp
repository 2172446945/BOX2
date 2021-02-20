#include "mainwindow.h"
#include <QApplication>
#include "simplethreadone.h"
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    simplethreadone *SThread = new simplethreadone();
    
    qDebug()<<"线程启动!";

    SThread->start();


    return a.exec();
}
