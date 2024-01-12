#include "mainwindow.h"
#include <QApplication>
#include <QMessageBox>
#include "connexion.h"
#include <QtDebug>
#include <QString>
#include "son.h"

/*#include<QSound>
#include <QMediaPlayer>*/

int main(int argc, char *argv[])
{  QApplication a(argc, argv);

    Connexion c;

mettreMusique();

// QSound *son = new QSound ("://2.mp3");

  bool test=c.ouvrirConnexion();
  MainWindow w;


  if(test)
  {w.show();

     // son->play();


      QMessageBox::critical(nullptr, QObject::tr("database is not open"),
                  QObject::tr("connection avec succés.\n"
                              "Click Cancel to exit."), QMessageBox::Cancel);

  }
  else
      QMessageBox::critical(nullptr, QObject::tr("database is not open"),
                  QObject::tr("connection failed.\n"
                              "Click Cancel to exit."), QMessageBox::Cancel);

    return a.exec();}



//#include <QtGui>

/*int main(int argc, char* argv[])
{
    QApplication app(argc, argv);
    QLabel w;

    // On crée une vidéo. Ici, c'est un GIF
    QMovie movie("c:/Mickey-11.gif");
    // On l'associe à un label
    w.setMovie (&movie);
    // On lance la vidéo
    movie.start ();

    w.show();
    return app.exec();
}
*/
