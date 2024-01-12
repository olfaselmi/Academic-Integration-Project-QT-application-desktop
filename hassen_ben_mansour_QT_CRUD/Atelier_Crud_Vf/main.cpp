#include "mainwindow.h"
#include <QApplication>
#include <QMessageBox>
#include "connexion.h"
#include <QtDebug>




int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
     Connexion c;
    w.show();

    bool test=c.ouvrirConnexion();
    if(test)
    {w.show();
        QMessageBox::information(nullptr, QObject::tr("Database is opened"),
                    QObject::tr("Connection Successful.\n"
                                "Click OK to continue."), QMessageBox::Ok);
        w.afficher();
        w.stat();

}
    else
        QMessageBox::critical(nullptr, QObject::tr("database is not open"),
                    QObject::tr("Connection Failed.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);


    return a.exec();
}
