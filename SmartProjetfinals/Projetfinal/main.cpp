#include "mainwindow.h"

#include <QApplication>
#include <QMessageBox>
#include "connection.h"
#include <QtDebug>

int main(int argc, char *argv[])
{  QApplication a(argc, argv);

    connexion c;

  bool test=c.ouvrirConnexion();
  MainWindow ST;
  if(test)
  {ST.show();

  }
  else
      QMessageBox::critical(nullptr, QObject::tr("database is not open"),
                  QObject::tr("connection failed.\n"
                              "Click Cancel to exit."), QMessageBox::Cancel);

    return a.exec();}
