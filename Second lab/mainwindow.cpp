#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "Patient.h"
#include "queue.h"
#include"QString"
#include "QDate"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->currentDate->setText((QDate::currentDate().toString(Qt::DefaultLocaleLongDate)));

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_Monday_bt_clicked()
{
    if(Hospital.empty()){
        ui->PatientList->clear();
        ui->PatientList->addItem("Today is a free day");
     }else{
        QList<Patient>::iterator iter;
        QString x;
        ui->PatientList->clear();
        iter = Hospital.begin()->DayQueue.begin();
       for ( iter = Hospital.begin()->DayQueue.begin(); iter !=  Hospital.begin()->DayQueue.end(); iter++){
            x += iter->name + iter->sex + iter->age + iter->fullSurvey;
         ui->PatientList->addItem(x);
    }
}
}

void MainWindow::on_Tuesday_bt_clicked()
{
if(Hospital.empty()){
        ui->PatientList->clear();
        ui->PatientList->addItem("Today is a free day");
    }else{
        ui->PatientList->clear();
        QList<Queue>::iterator iter= Hospital.begin();
        iter++;
        QList<Patient>::iterator i= iter->DayQueue.begin();
        while(i != iter->DayQueue.end()){
            ui->PatientList->addItem(i->name);
            i++;
        }
    }
}

void MainWindow::on_Wednesday_bt_clicked()
{
if(Hospital.empty()){
     ui->PatientList->clear();
    ui->PatientList->addItem("Today is a free day");
}else{
    ui->PatientList->clear();
    QList<Queue>::iterator iter= Hospital.begin();
    for(int i = 0; i < 2; i++){
      iter++;
     }
    QList<Patient>::iterator i= iter->DayQueue.begin();
    while(i != iter->DayQueue.end()){
        ui->PatientList->addItem(i->name);
        i++;
    }
}
}


void MainWindow::on_Thursday_bt_clicked()
{
if(Hospital.empty()){
        ui->PatientList->clear();
        ui->PatientList->addItem("Today is a free day");
    }else{
        ui->PatientList->clear();
        QList<Queue>::iterator iter= Hospital.begin();
        for(int i = 0; i < 3; i++){
          iter++;
         }
        QList<Patient>::iterator i= iter->DayQueue.begin();
        while(i != iter->DayQueue.end()){
            ui->PatientList->addItem(i->name);
            i++;
        }
    }
}


void MainWindow::on_Friday_bt_clicked()
{
if(Hospital.empty()){
        ui->PatientList->clear();
        ui->PatientList->addItem("Today is a free day");
    }else{
        ui->PatientList->clear();
        QList<Queue>::iterator iter= Hospital.begin();
        for(int i = 0; i < 4; i++){
          iter++;
         }
        QList<Patient>::iterator i= iter->DayQueue.begin();
        while(i != iter->DayQueue.end()){
            ui->PatientList->addItem(i->name);
            i++;
        }
    }
}
void MainWindow::on_Saturday_bt_clicked()
{
    ui->PatientList->clear();
    ui->PatientList->addItem("Today is a weekend.");
    ui->PatientList->addItem("Our doctors need a rest");
    ui->PatientList->addItem("See you next week!)");

}




void MainWindow::on_Add_bt_clicked()
{
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
        auto *hospitalQueue = new Queue;
        auto *hospitalQueue2 = new Queue;
        hospitalQueue->addToQueue(&newPatient);
        hospitalQueue->addToQueue(&newPatient2);
        hospitalQueue2->addToQueue(&newPatient2);
        hospitalQueue2->addToQueue(&newPatient);
        Hospital.push_back(*hospitalQueue);
        Hospital.push_back(*hospitalQueue2);

}

