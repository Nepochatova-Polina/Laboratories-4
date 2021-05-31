/********************************************************************************
** Form generated from reading UI file 'thirdwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_THIRDWINDOW_H
#define UI_THIRDWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_thirdWindow
{
public:
    QLabel *label;
    QTextEdit *textEdit_result;
    QTextEdit *textEdit1;
    QPushButton *count_bt;
    QLabel *label_3;

    void setupUi(QDialog *thirdWindow)
    {
        if (thirdWindow->objectName().isEmpty())
            thirdWindow->setObjectName(QString::fromUtf8("thirdWindow"));
        thirdWindow->resize(589, 434);
        label = new QLabel(thirdWindow);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 60, 131, 17));
        textEdit_result = new QTextEdit(thirdWindow);
        textEdit_result->setObjectName(QString::fromUtf8("textEdit_result"));
        textEdit_result->setGeometry(QRect(180, 220, 251, 91));
        textEdit1 = new QTextEdit(thirdWindow);
        textEdit1->setObjectName(QString::fromUtf8("textEdit1"));
        textEdit1->setGeometry(QRect(190, 50, 161, 41));
        count_bt = new QPushButton(thirdWindow);
        count_bt->setObjectName(QString::fromUtf8("count_bt"));
        count_bt->setGeometry(QRect(110, 130, 111, 41));
        label_3 = new QLabel(thirdWindow);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(50, 250, 91, 21));

        retranslateUi(thirdWindow);

        QMetaObject::connectSlotsByName(thirdWindow);
    } // setupUi

    void retranslateUi(QDialog *thirdWindow)
    {
        thirdWindow->setWindowTitle(QApplication::translate("thirdWindow", "Dialog", nullptr));
        label->setText(QApplication::translate("thirdWindow", "enter number", nullptr));
        count_bt->setText(QApplication::translate("thirdWindow", "count", nullptr));
        label_3->setText(QApplication::translate("thirdWindow", "Your result", nullptr));
    } // retranslateUi

};

namespace Ui {
    class thirdWindow: public Ui_thirdWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_THIRDWINDOW_H
