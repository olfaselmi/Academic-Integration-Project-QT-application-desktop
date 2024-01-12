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
    bool ajouter1();
    QSqlQueryModel * afficher1();
    bool supprimer1(int);
    bool Modifier(int,QString,QString);
       bool Modifier1(int,QString,QString);
       void tri1();
       void tri2();
       QSqlQueryModel * afficher_avec_id(const QString &arg1);
       QSqlQueryModel * afficher_avec_id1(const QString &arg1);
  QSqlQueryModel*trier_moy();
  QSqlQueryModel*trier_moy1();

private:
    QString typeM,etatM;
    int numeroM;
};

#endif // MOYENT_H
