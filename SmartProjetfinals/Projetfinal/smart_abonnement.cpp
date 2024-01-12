#include "smart_abonnement.h"
#include "ui_smart_abonnement.h"
#include "abonneforfaits.h"
#include <QMessageBox>

Smart_abonnement::Smart_abonnement(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Smart_abonnement)
{
    ui->setupUi(this);
    ui->tableView_abonne->setModel(abf.afficher());
    ui->tableView_abonne_2->setModel(abf.afficherfor
                                   ());
}

Smart_abonnement::~Smart_abonnement()
{
    delete ui;
}

void Smart_abonnement::on_pushButton_10_clicked()
{
   ui->stackedWidget->setCurrentIndex(0);
}

void Smart_abonnement::on_pushButton_9_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void Smart_abonnement::on_pushButton_2_clicked()
{
    int id =ui->numero->text().toInt();
    QString nom = ui->nom->text();
    QString prenom = ui->prenom->text();
    abonneforfaits ab(id,nom,prenom);
    if(ab.ajouter())
    {
        QMessageBox::information(nullptr, QObject::tr("Abonnements"),
                    QObject::tr("reussie.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
        ui->tableView_abonne->setModel(ab.afficher());
        ui->numero->setText("");
        ui->nom->setText("");
        ui->prenom->setText("");
    }
    else
    {
        QMessageBox::critical(nullptr, QObject::tr("Abonnements"),
                    QObject::tr("Erreur.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
    }
}

void Smart_abonnement::on_pushButton_clicked()
{
    int id =ui->numero->text().toInt();
    QString nom = ui->nom->text();
    QString prenom = ui->prenom->text();
    abonneforfaits ab(id,nom,prenom);
    if(ab.modifier(id))
    {
        QMessageBox::information(nullptr, QObject::tr("Abonnements"),
                    QObject::tr("reussie.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
        ui->tableView_abonne->setModel(ab.afficher());
        ui->numero->setText("");
        ui->nom->setText("");
        ui->prenom->setText("");
    }
    else
    {
        QMessageBox::critical(nullptr, QObject::tr("Abonnements"),
                    QObject::tr("Erreur.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
    }
}

void Smart_abonnement::on_pushButton_3_clicked()
{
    int id;
    id = ui->chercher->text().toInt();
    QSqlQuery query;
    QString res= QString::number(id);
    query.prepare("Select *from abonnements where numero = :id ");
    query.bindValue(":id", res);
    bool test=query.exec();

    if(test)
    {

        while(query.next())
        {
             ui->numero->setText(query.value(0).toString());
             ui->nom->setText(query.value(1).toString());
             ui->prenom->setText(query.value(2).toString());

        }

    }
    else
    {
        QMessageBox::critical(nullptr, QObject::tr("abonnemnts"),
                    QObject::tr("Erreur !.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

    }
}

void Smart_abonnement::on_pushButton_4_clicked()
{
    int id;
    id = ui->chercher->text().toInt();
    abonneforfaits ab;
    if(ab.supprimer(id))
    {
        QMessageBox::information(nullptr, QObject::tr("Abonnements"),
                    QObject::tr("reussie.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
        ui->tableView_abonne->setModel(ab.afficher());
        ui->chercher->setText("");

    }
    else
    {
        QMessageBox::critical(nullptr, QObject::tr("Abonnements"),
                    QObject::tr("Erreur.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
    }

}

void Smart_abonnement::on_chercher_2_textChanged(const QString &arg1)
{
    abonneforfaits ab;
    ui->tableView_abonne_4->setModel(ab.afficher_idn(arg1));
}

void Smart_abonnement::on_pushButton_5_clicked()
{
    int id =ui->numero_2->text().toInt();
    QString nom = ui->nom_2->text();
    QString prenom = ui->prenom_2->text();
    abonneforfaits ab(id,nom,prenom);
    if(ab.ajouterfor())
    {
        QMessageBox::information(nullptr, QObject::tr("forfaits"),
                    QObject::tr("reussie.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
        ui->tableView_abonne_2->setModel(ab.afficherfor());
        ui->numero_2->setText("");
        ui->nom_2->setText("");
        ui->prenom_2->setText("");
    }
    else
    {
        QMessageBox::critical(nullptr, QObject::tr("forfaits"),
                    QObject::tr("Erreur.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
    }
}

void Smart_abonnement::on_pushButton_6_clicked()
{
    int id =ui->numero_2->text().toInt();
    QString nom = ui->nom_2->text();
    QString prenom = ui->prenom_2->text();
    abonneforfaits ab(id,nom,prenom);
    if(ab.modifierfor(id))
    {
        QMessageBox::information(nullptr, QObject::tr("forfaits"),
                    QObject::tr("reussie.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
        ui->tableView_abonne_2->setModel(ab.afficherfor());
        ui->numero_2->setText("");
        ui->nom_2->setText("");
        ui->prenom_2->setText("");
    }
    else
    {
        QMessageBox::critical(nullptr, QObject::tr("forfaits"),
                    QObject::tr("Erreur.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
    }
}

void Smart_abonnement::on_pushButton_8_clicked()
{
    int id;
    id = ui->chercher_3->text().toInt();
    abonneforfaits ab;
    if(ab.supprimerfor(id))
    {
        QMessageBox::information(nullptr, QObject::tr("forfaits"),
                    QObject::tr("reussie.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
        ui->tableView_abonne_2->setModel(ab.afficherfor());
        ui->chercher_3->setText("");

    }
    else
    {
        QMessageBox::critical(nullptr, QObject::tr("forfaits"),
                    QObject::tr("Erreur.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
    }
}

void Smart_abonnement::on_pushButton_7_clicked()
{
    int id;
    id = ui->chercher_3->text().toInt();
    QSqlQuery query;
    QString res= QString::number(id);
    query.prepare("Select *from forfaits where numero = :id ");
    query.bindValue(":id", res);
    bool test=query.exec();

    if(test)
    {

        while(query.next())
        {
             ui->numero_2->setText(query.value(0).toString());
             ui->nom_2->setText(query.value(1).toString());
             ui->prenom_2->setText(query.value(2).toString());

        }

    }
    else
    {
        QMessageBox::critical(nullptr, QObject::tr("forfaits"),
                    QObject::tr("Erreur !.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

    }
}

void Smart_abonnement::on_chercher_4_textChanged(const QString &arg1)
{
    abonneforfaits ab;
    ui->tableView_abonne_3->setModel(ab.afficher_idnfor(arg1));
}
