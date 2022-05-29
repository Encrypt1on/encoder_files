#ifndef DECW_H
#define DECW_H

#include <QWidget>

namespace Ui {
class decW;
}

class decW : public QWidget
{
    Q_OBJECT

public:
    explicit decW(QWidget *parent = nullptr);
    ~decW();
private slots:
    void on_pushButton_clicked();

    void on_spinBox_valueChanged(int arg1);

    void on_pushButton_2_clicked();

    void on_comboBox_activated(int index);

    void on_pushButton_3_clicked();
private:
    Ui::decW *ui;
    void DecodeFile();
};

#endif // DECW_H
