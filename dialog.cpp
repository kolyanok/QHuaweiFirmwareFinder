#include "dialog.h"


Dialog::Dialog(QWidget *parent) : QDialog(parent), ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

void Dialog::on_pushButton_clicked()
{
    this->close();
    this->deleteLater();
}
