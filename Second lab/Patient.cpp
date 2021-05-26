#include "Patient.h"
#include"queue.h"
#include "mainwindow.h"

QString Patient::ShowInfo() const {
    QString info = this->name + "br" + this->age + "br" + this->sex + "br" + this->fullSurvey;
    return info;
   }

