#include "zied_mainwindow.h"
#include "zied_employe.h"
#include "zied_connection.h"
#include "zied_dialog.h"
#include "gestionvoyage.h"
#include <QApplication>
#include <QMessageBox>
#include <iostream>
using namespace std;
#include <string>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Connection c;
    bool test=c.createconnect();
    Dialog d;
    if(test)
    {
        d.show();
        //QMessageBox::information(nullptr,QObject::tr("database is open"),QObject::tr("connection seccessful.\nClick Cancel to exit."),QMessageBox::Cancel);
    }
    else
    {
        QMessageBox::critical(nullptr,QObject::tr("database is not open "),QObject::tr("connection failed.\nClick Cancel to exit."),QMessageBox::Cancel);
    }
    return a.exec();
}
