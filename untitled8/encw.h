#ifndef ENCW_H
#define ENCW_H

#include <QWidget>

namespace Ui {
class encW;
}

class encW : public QWidget
{
    Q_OBJECT

public:
    explicit encW(QWidget *parent = nullptr);
    ~encW();
private slots:
    void on_pushButton_clicked();

    void on_spinBox_valueChanged(int arg1);

    void on_pushButton_2_clicked();

    void on_comboBox_activated(int index);

    void on_pushButton_3_clicked();



private:
    Ui::encW *ui;
    void EncodeFile();
};

#endif // ENCW_H
