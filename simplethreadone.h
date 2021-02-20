#ifndef SIMPLETHREADONE_H
#define SIMPLETHREADONE_H
#include <QThread>

class simplethreadone : public QThread
{
public:
    simplethreadone();
    void run();
};

#endif // SIMPLETHREADONE_H
