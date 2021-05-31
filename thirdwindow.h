#ifndef THIRDWINDOW_H
#define THIRDWINDOW_H
#include<mainwindow.h>
#include <QDialog>

namespace Ui {
class thirdWindow;
}

class thirdWindow : public QDialog
{
    Q_OBJECT
    MainWindow *mainWindow;
public:
    explicit thirdWindow(QWidget *parent = nullptr);
    ~thirdWindow();
     int index;
private slots:
    void on_count_bt_clicked();

private:
    Ui::thirdWindow *ui;
     bool is_prime(int x);
     double factorial(int num);
     QVector<int> find_dividers(int x);
     int BellNumber(int n);

};

#endif // THIRDWINDOW_H
