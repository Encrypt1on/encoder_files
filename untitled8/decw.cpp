#include "decw.h"
#include "ui_decw.h"
#include <iostream>
#include <string>
#include <QTextStream>
#include <QFileDialog>
using namespace std;

decW::decW(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::decW)
{
    ui->setupUi(this);
}

decW::~decW()
{
    delete ui;
}

void decW::on_pushButton_clicked()
{
    DecodeFile();
}
QString _filePath;
void decW::on_pushButton_2_clicked()
{
    _filePath = QFileDialog::getOpenFileName(0, "Открыть", "", "*.txt");
    ui->lineEdit->setText(_filePath);
    qDebug()<<_filePath;
}
QString _Path;
void decW::on_pushButton_3_clicked()
{
    _Path = QFileDialog::getExistingDirectory(0, "Directory Dialog", "");
}

char charDecode(char c, int k) {
    char a, b;
    if (isupper(c)) {
        if (int(c) - k < 65) {
            a = -k + int(c) + 26;
            b = char(a);
        }
        else {
            b = char(c - k);
        }
    }
    else if (islower(c)) {
        if (int(c) - k < 97) {
            a = -k + int(c) + 26;
            b = char(a);
        }
        else {
            b = char(c - k);
        }
    }
    return b;
}

QString wordDecode(string s, int k) {
    QString b;
    for (int i = 0; s[i]; i++) {
        if (!(isalpha(s[i]))) {
            b += s[i];
        }
        else {
            b += charDecode(s[i], k);
        }
    }
    return b;
}

int dec_value;

void decW::DecodeFile(){
    //поток с чтением файла
    QFile inputFile(ui->lineEdit->text());
    if(inputFile.exists()){
        qDebug() << "Файл для чтения открыт";
    }
    else qDebug() << "Файл для чтения не открыт";

    inputFile.open(QIODevice::ReadOnly);
    QTextStream in(&inputFile);
    QString line;

    //поток с записью в файл
    QFile encryptFile(_Path + "/" + ui->lineEdit_2->text() + ".txt");
    if(encryptFile.exists()){
        qDebug() << "Файл для записи открыт";
    }
    else qDebug() << "Файл для записи НЕ открыт";

    encryptFile.open(QIODevice::WriteOnly);
    QTextStream out(&encryptFile);
    int shift = dec_value;
    QString s,strr;
    QString str;

    while (!in.atEnd()){
        s = in.readLine();
        //s += " ";
        std::string utf8_text = s.toUtf8().constData();
        str = wordDecode(utf8_text, shift);
        out << str << "\n";
    }

    inputFile.close();
    encryptFile.close();
    ui->lineEdit->setText("input");
    ui->lineEdit_2->setText("output");
    ui->spinBox->setValue(0);
    return;
}

void decW::on_spinBox_valueChanged(int arg1)
{
    dec_value = arg1;
}






