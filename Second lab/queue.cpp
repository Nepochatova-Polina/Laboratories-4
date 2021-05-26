#include "queue.h"
#include "Patient.h"
#include <iostream>
#include "mainwindow.h"

Queue::Queue(){}

using namespace std;
/**
 * @brief Deque constructor
 */
/**
 * @brief Deque destructor
 */
Queue::~Queue() = default;
/**
 * @brief function to add new element to deque
 * @param newPatient  - element of class Patient
 */
void Queue::addToQueue(Patient *newPatient) {
    for (auto & iter : this->DayQueue) {
        if(newPatient->name == iter.name){
            //cout << patient is
            break;
        }
}
    this->DayQueue.push_front(*newPatient);
}
/**
 *
 * @param name - name of patient
 * @return pointer to patient
 */
Patient Queue::findPatient(const QString& name) {
    for (auto & iter : this->DayQueue){
        if(iter.name == name){
            return iter;
        }
    }
    return *this->DayQueue.begin();
}
/**
 * @brief function to show all queue
 */

