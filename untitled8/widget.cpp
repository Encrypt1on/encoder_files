#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_pushButton_clicked()
{
    encW.setWindowModality(Qt::ApplicationModal);
    encW.show();

}


void Widget::on_pushButton_2_clicked()
{
    decW.setWindowModality(Qt::ApplicationModal);
    decW.show();

}

