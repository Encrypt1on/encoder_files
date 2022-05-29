#include "encw.h"
#include "ui_encw.h"
#include <iostream>
#include <string>
#include <QTextStream>
#include <QFileDialog>
using namespace std;

encW::encW(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::encW)
{
    ui->setupUi(this);
}

encW::~encW()
{
    delete ui;
}

void encW::on_pushButton_clicked()
{
    EncodeFile();
}
QString enc_filePath;
void encW::on_pushButton_2_clicked()
{
    enc_filePath = QFileDialog::getOpenFileName(0, "Открыть", "", "*.txt");
    ui->lineEdit->setText(enc_filePath);
    qDebug()<<enc_filePath;
}
QString enc_Path;
void encW::on_pushButton_3_clicked()
{
    enc_Path = QFileDialog::getExistingDirectory(0, "Directory Dialog", "");
}

char charEncode(char c, int k) {
    char a, b;
    if (isupper(c)) {
        if (int(c) + k > 90) {
            a = k + int(c) - 26;
            b = char(a);
        }
        else {
            b = char(c + k);
        }
    }
    else if (islower(c)) {
        if (int(c) + k > 122) {
            a = k + int(c) - 26;
            b = char(a);
        }
        else {
            b = char(c + k);
        }
    }
    return b;
}

QString wordEncode(string s, int k) {
    QString b;
    for (int i = 0; s[i]; i++) {
        if (!(isalpha(s[i]))) {
            b += s[i];
        }
        else {
            b += charEncode(s[i], k);
        }
    }
    return b;
}

int enc_value;

void encW::EncodeFile(){
    //открваем поток с чтением файла
    QFile inputFile(ui->lineEdit->text());
    if(inputFile.exists()){
        qDebug() << "Файл есть";
    }
    else qDebug() << "Файла нет";
    inputFile.open(QIODevice::ReadOnly);
    QTextStream in(&inputFile);
    QString line;

    //открываем поток с записью в файл
    QFile encryptFile(enc_Path+ "/" + ui->lineEdit_2->text() + ".txt");
    if(encryptFile.exists()){
        qDebug() << "Файл енкрипт есть";
    }
    else qDebug() << "Файла нет";
    encryptFile.open(QIODevice::WriteOnly);
    QTextStream out(&encryptFile);

    int shift = enc_value;
    QString s,strr;
    QString str;
    QString line1;

    while (!in.atEnd()){
        s = in.readLine();
        std::string utf8_text = s.toUtf8().constData();
        str = wordEncode(utf8_text, shift);
        out << str << "\n";
    }

    inputFile.close();
    encryptFile.close();
    ui->lineEdit->setText("input");
    ui->lineEdit_2->setText("output");
    ui->spinBox->setValue(0);
    return;
}


void encW::on_spinBox_valueChanged(int arg1)
{
    enc_value = arg1;
}







void encW::on_comboBox_activated(int index)
{

}

