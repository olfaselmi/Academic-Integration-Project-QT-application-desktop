#include "connection.h"
#include "exception"
#include <QSqlError>

connexion::connexion(){
                      }
bool connexion::ouvrirConnexion()
{bool test=false;
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
                           db.setDatabaseName("Projet_final");
                           db.setUserName("grst");//inserer nom de l'utilisateur
                           db.setPassword("grst");//inserer mot de passe de cet utilisateur

if (db.open())
    test=true;

else throw QString ("Erreur Paramétres"+db.lastError().text());
return  test;
}
void connexion::fermerConnexion()
{db.close();}




