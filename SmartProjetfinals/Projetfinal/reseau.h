#ifndef RESEAU_H
#define RESEAU_H

#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>

class reseau
{
private:
    int no_reseau ;
    int  nb_circuit ;
    QString type  ;
public:
    reseau();
    reseau(int,int,QString);
    int get_no_reseau();
    int get_nb_circuit();
    QString get_type();
    bool ajouter();
    QSqlQueryModel * afficher();
    bool modifier(int );
    bool supprimer(int);
    QSqlQueryModel * rechercher(const QString &arg1);
};
#endif // RESEAU_H
