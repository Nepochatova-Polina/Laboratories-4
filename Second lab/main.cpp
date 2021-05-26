#include "mainwindow.h"
#include "Patient.h"
#include "queue.h"
#include <QApplication>

void call();
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    call();
    w.show();
    return a.exec();
}

void call(){
    Patient newPatient = Patient::Builder()
                .withName("Jane")
                .withAge(32)
                .withHeight(165)
                .withWeight(70)
                .build();
        Patient newPatient2 = Patient::Builder()
                .withName("Yuri")
                .withSex("male")
                .withAge(-1)
                .withHeight(180)
                .withWeight(85)
                .build();
        newPatient.ShowInfo();
        auto *hospitalQueue = new Queue;
        hospitalQueue->addToQueue(&newPatient);
        hospitalQueue->addToQueue(&newPatient2);
//        MainWindow::Hospital.push_back(*hospitalQueue);
}
