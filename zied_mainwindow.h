#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <iostream>
using namespace std;
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void chart();

private slots:
    void on_pushButton_ajout_clicked();

    void on_pushButton_supp_clicked();

    void on_pushButton_mod_clicked();

    void on_pushButton_aff_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_11_clicked();

    void on_pushButton_8_clicked();


    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
