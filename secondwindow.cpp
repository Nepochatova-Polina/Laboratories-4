#include "secondwindow.h"
#include "ui_secondwindow.h"
#include "mainwindow.h"

secondWindow::secondWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::secondWindow)
{
    ui->setupUi(this);
}
//int indx = 0;
secondWindow::~secondWindow()
{
    delete ui;
}
/**
 * @brief secondWindow::on_count_bt_clicked
 * @brief function that react on button click action
 * @brief due to element's index function call function
 */
void secondWindow::on_count_bt_clicked()
{
    switch (this->index) {
         case 4:{
             int x = leastCommonMultiple(ui->textEdit1->toPlainText().toInt(),ui->textEdit2->toPlainText().toInt());
             ui->textEdit_result->setText(QString::number(x));
             break;
        }
        case 5:{
            int x = greatestCommonFactor(ui->textEdit1->toPlainText().toInt(),ui->textEdit2->toPlainText().toInt());
            ui->textEdit_result->setText(QString::number(x));
            break;
        }
         case 6:{
            int x = Jacobi(ui->textEdit1->toPlainText().toInt(),ui->textEdit2->toPlainText().toInt());
            ui->textEdit_result->setText(QString::number(x));
            break;
        }
        case 7:{
             ui->firstNum->setText("Enter difference d");
             ui->SecondNum->setText("Enter number of elements");
            int x = AriphmeticSum(ui->textEdit1->toPlainText().toInt(),ui->textEdit2->toPlainText().toInt());
            ui->textEdit_result->setText(QString::number(x));
            break;
        }
        case 8:{
            int x = GeometrySum(ui->textEdit1->toPlainText().toInt(),ui->textEdit2->toPlainText().toInt());
            ui->textEdit_result->setText(QString::number(x));
            break;
        }

    }
}

/**
 * @brief secondWindow::leastCommonMultiple
 * @brief function that count least common multiple number for two transmitted numbers
 * @param a - first integer number
 * @param b - second integer number
 * @return
 */
int secondWindow::leastCommonMultiple(int a, int b) {
        return (a * b) / greatestCommonFactor(a, b);
}
/**
 * @brief secondWindow::greatestCommonFactor
 * @brief function that count greatest common factor number for two transmitted numbers
 * @param a - first integer number
 * @param b - second integer number
 * @return
 */
int secondWindow::greatestCommonFactor(int a, int b) {
    if (a % b == 0)
        return b;
    if (b % a == 0)
        return a;
    if (a > b)
        return greatestCommonFactor(a % b, b);
    return greatestCommonFactor(a, b % a);
}
/**
 * @brief secondWindow::Jacobi
 * @param a
 * @param n
 * @return
 */
int secondWindow::Jacobi(int a, int n) {
   int ans = 0;
    if (a == 0)
        ans = (n == 1) ? 1 : 0;
    else if (a == 2) {
        switch (n % 8) {
            case 1:
            case 7:
                ans = 1;
                break;
            case 3:
            case 5:
                ans = -1;
                break;
        }
    } else if (a >= n)
        ans = Jacobi(a % n, n);
    else if (a % 2 == 0)
        ans = Jacobi(2, n) * Jacobi(a / 2, n);
    else
        ans = (a % 4 == 3 && n % 4 == 3) ? -Jacobi(n, a) : Jacobi(n, a);
    return ans;
}

/**
 * @brief secondWindow::AriphmeticSum
 * @brief function count ariphmetic sum for n elements with difference d. First element = 2;
 * @param n - number of elements
 * @param d -difference
 * @return
 */
int secondWindow::AriphmeticSum(int n, int d) {
    int a1 = 2, res = 0;
    res = ((2 * a1 + d * (n - 1)) / 2) * n;
    return res + 1;
}

/**
 * @brief secondWindow::GeometrySum
 * @brief function count geometry sum for n elements with denominator q. First element = 1;
 * @param n - number of elements
 * @param q -denominator
 * @return
 */
int secondWindow::GeometrySum(int n, int q) {
   int b1 = 1;
    for (int i = n; i > 0; i--) {
        if (b1 > q) b1 -= q;
        b1 *= 2;
    }
    return b1;
}
