
#ifndef CADEAU_H
#define CADEAU_H
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>

class Cadeau
{public:
    Cadeau();
    Cadeau(int,QString,int,int);
    QString get_type();
    int  get_prix();
    int get_point();
    int get_id();
    bool ajouter();
    QSqlQueryModel * afficher();
    bool supprimer(int);
    bool modifier(int);
    bool affecter;

    QSqlQueryModel * verifier(QString);
private:
    QString type;
    int prix;
    int point,id;

};

#endif // CADEAU_H
