#include "connexion.h"
#include <QSqlError>
#include <QString>

Connexion::Connexion(){
                      }
bool Connexion::ouvrirConnexion()
{bool test=false;
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
                           db.setDatabaseName("chedly");
                           db.setUserName("chedly");//inserer nom de l'utilisateur
                           db.setPassword("esprit19");//inserer mot de passe de cet utilisateur

if (db.open())
    test=true;

return  test;
}
void Connexion::fermerConnexion()
{db.close();}
