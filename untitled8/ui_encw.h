/********************************************************************************
** Form generated from reading UI file 'encw.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENCW_H
#define UI_ENCW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_encW
{
public:
    QLineEdit *lineEdit;
    QPushButton *pushButton_3;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label;
    QComboBox *comboBox;
    QSpinBox *spinBox;

    void setupUi(QWidget *encW)
    {
        if (encW->objectName().isEmpty())
            encW->setObjectName(QString::fromUtf8("encW"));
        encW->resize(423, 228);
        lineEdit = new QLineEdit(encW);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(130, 70, 281, 24));
        pushButton_3 = new QPushButton(encW);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(10, 110, 111, 24));
        lineEdit_2 = new QLineEdit(encW);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(130, 110, 281, 24));
        pushButton = new QPushButton(encW);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(130, 170, 131, 41));
        pushButton_2 = new QPushButton(encW);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(10, 70, 111, 24));
        label = new QLabel(encW);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(150, 20, 111, 31));
        comboBox = new QComboBox(encW);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(110, 140, 111, 24));
        spinBox = new QSpinBox(encW);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setGeometry(QRect(230, 140, 51, 21));
        spinBox->setMinimum(0);
        spinBox->setMaximum(20);
        spinBox->setValue(0);

        retranslateUi(encW);

        QMetaObject::connectSlotsByName(encW);
    } // setupUi

    void retranslateUi(QWidget *encW)
    {
        encW->setWindowTitle(QCoreApplication::translate("encW", "Form", nullptr));
        lineEdit->setText(QCoreApplication::translate("encW", "input", nullptr));
        pushButton_3->setText(QCoreApplication::translate("encW", "Select folder", nullptr));
        lineEdit_2->setText(QCoreApplication::translate("encW", "output", nullptr));
        pushButton->setText(QCoreApplication::translate("encW", "START", nullptr));
        pushButton_2->setText(QCoreApplication::translate("encW", "Select file", nullptr));
        label->setText(QCoreApplication::translate("encW", "ENCODE WINDOW", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("encW", "Caesar Cipher", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("encW", "Polybius square", nullptr));

    } // retranslateUi

};

namespace Ui {
    class encW: public Ui_encW {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENCW_H
