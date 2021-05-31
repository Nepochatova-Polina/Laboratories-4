#ifndef SECONDWINDOW_H
#define SECONDWINDOW_H

#include <QDialog>

namespace Ui {
class secondWindow;
}

class secondWindow : public QDialog
{
    Q_OBJECT

public:
    explicit secondWindow(QWidget *parent = nullptr);
    ~secondWindow();
     int index = 0;

private slots:
    void on_count_bt_clicked();

private:
    Ui::secondWindow *ui;
    int leastCommonMultiple(int a, int b);
    int greatestCommonFactor(int a, int b);
    int Jacobi(int a, int n);
    int AriphmeticSum(int n, int res);
    int GeometrySum(int n, int k);

};

#endif // SECONDWINDOW_H
