#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
#include "thread"
#include "chrono"
#include "QString"
#include <mutex>
#include <atomic>

using namespace std;
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}

mutex mtx;
int result;
atomic<int>res;

void findNumWithMutex(int firstIndex, int secondIndex, const int array[]) {
    mtx.lock();
    for (int i = firstIndex; i < secondIndex; i++) {
        if (array[i] == 25) {
            result++;
        }
    }
    mtx.unlock();
}

void findNumWithoutMutex(int firstIndex, int secondIndex, const int array[]) {
    for (int i = firstIndex; i < secondIndex; i++) {
        if (array[i] == 25) {
            result++;
        }
    }
}
void findNumWithAtomicRes(int firstIndex, int secondIndex, const int array[]) {
    for (int i = firstIndex; i < secondIndex; i++) {
        if (array[i] == 25) {
            res++;
        }
    }
}

void withMutex(int array[]) {
    auto startTime = chrono::high_resolution_clock::now();
    result = 0;
    thread th1(findNumWithMutex, 0, 100000, array);
    thread th2(findNumWithMutex, 100001, 200001, array);
    thread th3(findNumWithMutex, 200002, 300002, array);
    thread th4(findNumWithMutex, 300003, 400003, array);
    thread th5(findNumWithMutex, 400004, 500004, array);
    thread th6(findNumWithMutex, 400005, 600005, array);
    thread th7(findNumWithMutex, 600006, 700006, array);
    thread th8(findNumWithMutex, 700007, 800007, array);
    thread th9(findNumWithMutex, 800008, 900008, array);
    thread th10(findNumWithMutex, 900009, 100000, array);

    auto endTime = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::microseconds>(endTime - startTime).count();
    cout << " Time:" << duration<< " ";

    th1.join();
    th2.join();
    th3.join();
    th4.join();
    th5.join();
    th6.join();
    th7.join();
    th8.join();
    th9.join();
    th10.join();
}

void withoutMutex(int array[]) {
    auto startTime = chrono::high_resolution_clock::now();

    result = 0;
    thread th1(findNumWithoutMutex, 0, 100000, array);
    thread th2(findNumWithoutMutex, 100001, 200001, array);
    thread th3(findNumWithoutMutex, 200002, 300002, array);
    thread th4(findNumWithoutMutex, 300003, 400003, array);
    thread th5(findNumWithoutMutex, 400004, 500004, array);
    thread th6(findNumWithoutMutex, 400005, 600005, array);
    thread th7(findNumWithoutMutex, 600006, 700006, array);
    thread th8(findNumWithoutMutex, 700007, 800007, array);
    thread th9(findNumWithoutMutex, 800008, 900008, array);
    thread th10(findNumWithoutMutex, 900009, 100000, array);

    auto endTime = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::microseconds>(endTime - startTime).count();
    cout << " Time:" << duration<< " ";

    th1.join();
    th2.join();
    th3.join();
    th4.join();
    th5.join();
    th6.join();
    th7.join();
    th8.join();
    th9.join();
    th10.join();
}
void withAtomicInt(int array[]) {
    auto startTime = chrono::high_resolution_clock::now();

    result = 0;
    thread th1(findNumWithMutex, 0, 100000, array);
    thread th2(findNumWithMutex, 100001, 200001, array);
    thread th3(findNumWithMutex, 200002, 300002, array);
    thread th4(findNumWithMutex, 300003, 400003, array);
    thread th5(findNumWithMutex, 400004, 500004, array);
    thread th6(findNumWithMutex, 400005, 600005, array);
    thread th7(findNumWithMutex, 600006, 700006, array);
    thread th8(findNumWithMutex, 700007, 800007, array);
    thread th9(findNumWithMutex, 800008, 900008, array);
    thread th10(findNumWithMutex, 900009, 100000, array);

    auto endTime = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::microseconds>(endTime - startTime).count();
    cout << " Time:" << duration<< " ";

    th1.join();
    th2.join();
    th3.join();
    th4.join();
    th5.join();
    th6.join();
    th7.join();
    th8.join();
    th9.join();
    th10.join();
}


void MainWindow::on_WithoutMutex_bt_clicked()
{
    int array[1000000];
    for (int &i : array) {
        i = rand() % 100;
    }
    int i = 0;
    while (i < 5) {
        withoutMutex(array);
        ui->Without_list->addItem( "result without mutex  "+ QString::number(result));
        cout << "result without mutex" <<" "<< result << endl;
        i++;
    }
}

void MainWindow::on_WithMutex_bt_clicked()
{
    int array[1000000];
    for (int &i : array) {
        i = rand() % 100;
    }
    int i = 0;
    while (i < 5) {
        withMutex(array);
        ui->With_list->addItem("result with mutex"+QString::number(result));
        cout << "result with mutex" <<" "<< result << endl;
        i++;
    }
}

void MainWindow::on_WithAtomInt_bt_clicked()
{
    int array[1000000];
    for (int &i : array) {
        i = rand() % 100;
    }
    int i = 0;
    while (i < 5) {
        withAtomicInt(array);
        ui->atomicInt_list->addItem("result with atomic int"+QString::number(result));
        cout << "result with atomic int" <<" "<< result << endl;
        i++;
    }
}




