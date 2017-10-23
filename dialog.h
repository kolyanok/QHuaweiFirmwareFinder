#ifndef DIALOG_H
#define DIALOG_H

#include <QWidget>
#include "ui_dialog.h"

class Dialog : public QDialog
{
    Q_OBJECT
public:
    explicit Dialog(QWidget *parent = 0);

signals:

public slots:

private slots:
    void on_pushButton_clicked();

private:
    Ui::Dialog *ui;
};

#endif // DIALOG_H
