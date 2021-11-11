#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "voyage.h"
#include <QString>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    QString getVal();

private slots:
    void on_pushButton_ok_clicked();

    void on_pushButton_supprimer_clicked();


   void on_tab_voyage_activated(const QModelIndex &index);



   void on_pushButton_modifier_clicked();

   void on_pushButton_modifierr_clicked();

   void on_pushButton_clicked();

   void on_pushButton_annuler_clicked();

private:
    Ui::MainWindow *ui;
    Voyage V;
    QString val;
    bool modifier=false;
};
#endif // MAINWINDOW_H
