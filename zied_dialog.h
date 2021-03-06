#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include "zied_mainwindow.h"
#include "zied_account.h"
#include "menu.h"
namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr);
    ~Dialog();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Dialog *ui;
    menu m;
    account a;
};

#endif // DIALOG_H
