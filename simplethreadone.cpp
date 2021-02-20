#include "simplethreadone.h"
#include <QDebug>

simplethreadone::simplethreadone()
{

}
void simplethreadone::run()
{
    while (true)
    {
        qDebug()<<"SimpleThreadOne run!";
        sleep(2);
    }
}
