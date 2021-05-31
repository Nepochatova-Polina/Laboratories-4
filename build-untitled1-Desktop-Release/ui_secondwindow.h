/********************************************************************************
** Form generated from reading UI file 'secondwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECONDWINDOW_H
#define UI_SECONDWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_secondWindow
{
public:
    QPushButton *count_bt;
    QTextEdit *textEdit1;
    QPlainTextEdit *textEdit2;
    QLabel *firstNum;
    QLabel *SecondNum;
    QLabel *result_lb;
    QTextEdit *textEdit_result;

    void setupUi(QDialog *secondWindow)
    {
        if (secondWindow->objectName().isEmpty())
            secondWindow->setObjectName(QString::fromUtf8("secondWindow"));
        secondWindow->resize(487, 387);
        count_bt = new QPushButton(secondWindow);
        count_bt->setObjectName(QString::fromUtf8("count_bt"));
        count_bt->setGeometry(QRect(160, 160, 111, 41));
        textEdit1 = new QTextEdit(secondWindow);
        textEdit1->setObjectName(QString::fromUtf8("textEdit1"));
        textEdit1->setGeometry(QRect(250, 20, 161, 41));
        textEdit2 = new QPlainTextEdit(secondWindow);
        textEdit2->setObjectName(QString::fromUtf8("textEdit2"));
        textEdit2->setGeometry(QRect(250, 70, 161, 41));
        firstNum = new QLabel(secondWindow);
        firstNum->setObjectName(QString::fromUtf8("firstNum"));
        firstNum->setGeometry(QRect(50, 30, 181, 17));
        SecondNum = new QLabel(secondWindow);
        SecondNum->setObjectName(QString::fromUtf8("SecondNum"));
        SecondNum->setGeometry(QRect(50, 80, 181, 17));
        result_lb = new QLabel(secondWindow);
        result_lb->setObjectName(QString::fromUtf8("result_lb"));
        result_lb->setGeometry(QRect(20, 276, 91, 21));
        textEdit_result = new QTextEdit(secondWindow);
        textEdit_result->setObjectName(QString::fromUtf8("textEdit_result"));
        textEdit_result->setGeometry(QRect(160, 250, 251, 91));

        retranslateUi(secondWindow);

        QMetaObject::connectSlotsByName(secondWindow);
    } // setupUi

    void retranslateUi(QDialog *secondWindow)
    {
        secondWindow->setWindowTitle(QApplication::translate("secondWindow", "Dialog", nullptr));
        count_bt->setText(QApplication::translate("secondWindow", "count", nullptr));
        firstNum->setText(QApplication::translate("secondWindow", "enter first number", nullptr));
        SecondNum->setText(QApplication::translate("secondWindow", "enter second number", nullptr));
        result_lb->setText(QApplication::translate("secondWindow", "Your result", nullptr));
    } // retranslateUi

};

namespace Ui {
    class secondWindow: public Ui_secondWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECONDWINDOW_H
