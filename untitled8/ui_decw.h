/********************************************************************************
** Form generated from reading UI file 'decw.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DECW_H
#define UI_DECW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_decW
{
public:
    QPushButton *pushButton_2;
    QLineEdit *lineEdit;
    QPushButton *pushButton_3;
    QPushButton *pushButton;
    QLineEdit *lineEdit_2;
    QLabel *label;
    QSpinBox *spinBox;
    QComboBox *comboBox;

    void setupUi(QWidget *decW)
    {
        if (decW->objectName().isEmpty())
            decW->setObjectName(QString::fromUtf8("decW"));
        decW->resize(444, 232);
        pushButton_2 = new QPushButton(decW);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(20, 70, 111, 24));
        lineEdit = new QLineEdit(decW);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(140, 70, 281, 24));
        pushButton_3 = new QPushButton(decW);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(20, 110, 111, 24));
        pushButton = new QPushButton(decW);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(140, 170, 131, 41));
        lineEdit_2 = new QLineEdit(decW);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(140, 110, 281, 24));
        label = new QLabel(decW);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(160, 20, 111, 31));
        spinBox = new QSpinBox(decW);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setGeometry(QRect(240, 140, 51, 21));
        spinBox->setMinimum(0);
        spinBox->setMaximum(20);
        spinBox->setValue(0);
        comboBox = new QComboBox(decW);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(120, 140, 111, 24));

        retranslateUi(decW);

        QMetaObject::connectSlotsByName(decW);
    } // setupUi

    void retranslateUi(QWidget *decW)
    {
        decW->setWindowTitle(QCoreApplication::translate("decW", "Form", nullptr));
        pushButton_2->setText(QCoreApplication::translate("decW", "Select file", nullptr));
        lineEdit->setText(QCoreApplication::translate("decW", "input", nullptr));
        pushButton_3->setText(QCoreApplication::translate("decW", "Select folder", nullptr));
        pushButton->setText(QCoreApplication::translate("decW", "START", nullptr));
        lineEdit_2->setText(QCoreApplication::translate("decW", "output", nullptr));
        label->setText(QCoreApplication::translate("decW", "DECODE WINDOW", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("decW", "Caesar Cipher", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("decW", "Polybius square", nullptr));

    } // retranslateUi

};

namespace Ui {
    class decW: public Ui_decW {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DECW_H
