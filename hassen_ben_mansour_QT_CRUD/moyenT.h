#ifndef MOYENT_H
#define MOYENT_H
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>

class moyen
{public:

    moyen();
    moyen(int,QString,QString);
    QString get_typeM();
    QString get_etatM();
    int get_numeroM();
    bool ajouter();
    QSqlQueryModel * afficher();
    bool supprimer(int);
    bool Modifier(int,QString,QString);


private:
    QString typeM,etatM;
    int numeroM;
};

#endif // MOYENT_H
