#include "thirdwindow.h"
#include "ui_thirdwindow.h"
#include "cmath"
#include "QVector"
#include "QString"
using namespace std;
thirdWindow::thirdWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::thirdWindow)
{
    ui->setupUi(this);
}

thirdWindow::~thirdWindow()
{
    delete ui;
}

void thirdWindow::on_count_bt_clicked()
{
    switch (this->index) {
    case 0:{
           double x = factorial(ui->textEdit1->toPlainText().toInt());
           ui->textEdit_result->setText(QString::number(x));
          break;
    }
    case 1:{
        QVector<int> dividers = find_dividers(ui->textEdit1->toPlainText().toInt());
        for(int i = 0; i < dividers.size(); i++){
            ui->textEdit_result->setText(QString::number( dividers[i]));
        }
            break;
    }
    case 2:{
       if(is_prime(ui->textEdit1->toPlainText().toInt()) == false){
        ui->textEdit_result->setText("This number is not prime");
       }else{
           ui->textEdit_result->setText("Yeah! Your number is prime");

       }
            break;
      }
    case 3:{
        int x = BellNumber(ui->textEdit1->toPlainText().toInt());
        ui->textEdit_result->setText("Bell Number " + ui->textEdit1->toPlainText() + " is " + QString::number(x));
       break;
    }
    }
}


/**
 * @brief thirdWindow::is_prime
 * @brief function that check is your number prime
 * @param x - integer to be checked
 * @return bool statement
 */
bool thirdWindow::is_prime(int x) {
    for (int i = 2; i <= sqrt(x); i++) {
        if (x % i == 0) {
            return false;
        }
    }
    return true;
}
/**
 * @brief thirdWindow::factorial
 * @param num - integer number
 * @return
 */
double thirdWindow::factorial(int num) {
    if (num < 0)
        return 0;
    if (num == 0)
        return 1;
    else
        return num * factorial(num - 1);
}
/**
 * @brief thirdWindow::find_dividers
 * @brief function that find all divider for transmitted number
 * @param x - integer number
 * @return
 */
QVector<int> thirdWindow::find_dividers(int x) {
    QVector<int> dividers;

    for (int i = 1; i <= sqrt(x); i++) {
        if (x % i == 0) {
            dividers.push_back(i);
            if (i * i != x) {
                dividers.push_back(x / i);
            }
        }
    }
    return dividers;
}
/**
 * @brief thirdWindow::BellNumber
 * @brief counts the number of partitions of the set
 * @param n - transmitted integer number
 * @return
 */
int thirdWindow::BellNumber(int n) {
    int bell[n+1][n+1];
      bell[0][0] = 1;
      for (int i=1; i<=n; i++)
      {
         bell[i][0] = bell[i-1][i-1];
         for (int j=1; j<=i; j++)
            bell[i][j] = bell[i-1][j-1] + bell[i][j-1];
      }
      return bell[n][0];
   }

