#ifndef QUEUE_H
#define QUEUE_H
#include"Patient.h"
#include "QList"
#include "QString"

class Queue {
private:
public:
    QList<Patient> DayQueue;
    Queue();

    virtual ~Queue();

    void addToQueue(Patient *newPatient);

    Patient findPatient(const QString &name);



};


#endif // QUEUE_H
