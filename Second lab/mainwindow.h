#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "Patient.h"
#include "queue.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_Monday_bt_clicked();

    void on_Saturday_bt_clicked();

    void on_Tuesday_bt_clicked();

    void on_Wednesday_bt_clicked();

    void on_Thursday_bt_clicked();

    void on_Friday_bt_clicked();


    void on_Add_bt_clicked();

private:
    QList<Queue> Hospital;

    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
