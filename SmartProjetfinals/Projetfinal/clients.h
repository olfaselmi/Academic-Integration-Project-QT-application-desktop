#ifndef CLIENTS_H
#define CLIENTS_H

#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>

class clients
{
public:
    clients();
    clients(int,QString,QString,QString,QString,QString);
    bool ajouterclient();
    QSqlQueryModel * afficher();
        bool supprimerclient(int);
        bool modifierclient(int);
       QSqlQueryModel * afficher_avec_id(const QString &arg1);
private:
        QString nom,idsociete,nomsociete,email;
        QString prenom;
         int numero;
};

#endif // CLIENTS_H
