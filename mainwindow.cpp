#include "mainwindow.h"
#include "secondwindow.h"
#include"thirdwindow.h"
#include "ui_mainwindow.h"
#include<QLabel>
#include<QTextEdit>
#include<QMessageBox>
#include<QString>
#include"string"
#include<QList>

using namespace std;
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow){   
    ui->setupUi(this);
    ui->listWidget->addItem("Factorial function");
    ui->listWidget->addItem("Dividers");
    ui->listWidget->addItem("Is your number prime?");
    ui->listWidget->addItem("Bell number");

    ui->listWidget->addItem("Least common multiple");
    ui->listWidget->addItem("Greatest common factor");
    ui->listWidget->addItem("Jacobi number");
    ui->listWidget->addItem("Ariphmetic sum");
    ui->listWidget->addItem("Geometry sum");
   }

MainWindow::~MainWindow(){
    delete ui;
}

void MainWindow::on_Choose_pb_clicked(){
    secondWindow window1;
    thirdWindow window;

    int x = ui->listWidget->currentRow();
    switch (x) {
    case 0:
        window.index = 0;
        window.setModal(true);
        window.exec();
        break;
    case 1:
        window.index = 1;
        window.setModal(true);
        window.exec();
        break;
    case 2:
        window.index = 2;
        window.setModal(true);
        window.exec();
        break;
    case 3:
        window.index = 3;
        window.setModal(true);
        window.exec();
        break;
    case 4:
        window1.index = 4;
        window1.setModal(true);
        window1.exec();
        break;
    case 5:
        window1.index = 5;
        window1.setModal(true);
        window1.exec();
        break;
    case 6:
        window1.index = 6;
        window1.setModal(true);
        window1.exec();
        break;
    case 7:
        window1.index = 7;
        window1.setModal(true);
        window1.exec();
        break;
    case 8:
        window1.index = 8;
        window1.setModal(true);
        window1.exec();
        break;

    }

}

void MainWindow::on_actionHelp_triggered(){
   QMessageBox::about(this,"Help box", " Hi, this page will explain what each icon means");
}

void MainWindow::on_Choose_pb_2_clicked(){
    int x = ui->listWidget->currentRow();
    switch (x) {
    case 0:
         QMessageBox::about(this,"About", " In mathematics, the factorial of a non-negative integer n, denoted by n!, is the product of all positive integers less than or equal to n");

        break;
    case 1:
        QMessageBox::about(this,"About", " An Armstrong number of three digits is an integer such that the sum of the cubes of its digits is equal to the number itself");
        break;
    case 2:
        QMessageBox::about(this,"About", " A division algorithm is an algorithm which, given two integers N and D, computes their quotient and/or remainder, the result of Euclidean division."
                                             "Fast division methods start with a close approximation to the final quotient and produce twice as many digits of the final quotient on each iteration.");
        break;
    case 3:
        QMessageBox::about(this,"About", "Function that check your number to being prime");
        break;
    case 4:
        QMessageBox::about(this,"About", " In arithmetic and number theory, the least common multiple, lowest common multiple, "
                                         "or smallest common multiple of two integers a and b is the smallest positive integer that is divisible by both a and b");
        break;
    case 5:
        QMessageBox::about(this,"About", " The Greatest Common Factor is the largest of the common factors (of two or more numbers)");


        break;
    case 6:
        QMessageBox::about(this,"About", " The Jacobi symbol is a generalization of the Legendre symbol. Introduced by Jacobi in 1837,it is of theoretical"
                                             " interest in modular arithmetic and other branches of number theory, but its main use is in computational number theory,"
                                             " especially primality testing and integer factorization; these in turn are important in cryptography");
        break;
    case 7:
        QMessageBox::about(this,"About", "An Arithmetic progression (AP) or arithmetic sequence is a sequence of numbers such that the difference between the consecutive terms is constant."
                                             "The sum of the members of a finite arithmetic progression is called an arithmetic series.");
        break;
    case 8:
        QMessageBox::about(this,"About", "In mathematics, a geometric progression, also known as a geometric sequence,is a sequence of non-zero numbers where each term after the first is found"
                                             " by multiplying the previous one by a fixed, non-zero number called the common ratio.A geometric series is the sum of the numbers in a geometric progression.");

        break;
    case 9:
        QMessageBox::about(this,"About", "The Bell numbers describe the number of ways a set with n elements can be partitioned into disjoint, non-empty subsets.");
        break;
    }
}

