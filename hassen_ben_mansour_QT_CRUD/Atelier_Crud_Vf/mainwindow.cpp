#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "employee.h"
#include "chauffeur.h"
#include "qcustomplot.h"
#include <QMessageBox>
#include "smtp.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
//ui->setupUi(this);
    ui->setupUi(this);
ui->tabetudiant->setModel(tmpetudiant.afficher());

ui->tabetudiant_2->setModel(tmpchauffeur.afficher());
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::afficher(){

    ui->tabetudiant->setModel(tmpetudiant.afficher());

    ui->tabetudiant_2->setModel(tmpchauffeur.afficher());


    stat();
}

void MainWindow::on_pb_ajouter_clicked()
{
    int id = ui->lineEdit_id->text().toInt();
    QString nom= ui->lineEdit_nom->text();
    QString prenom= ui->lineEdit_prenom->text();
  Employee e(id,nom,prenom);
  bool test=e.ajouter();
  if(test)
{ui->tabetudiant->setModel(tmpetudiant.afficher());//refresh
QMessageBox::information(nullptr, QObject::tr("Ajouter un Employee"),
                  QObject::tr("Employee ajouté.\n"
                              "Click Cancel to exit."), QMessageBox::Cancel);

}
  else
      QMessageBox::critical(nullptr, QObject::tr("Ajouter un étudiant"),
                  QObject::tr("Erreur !.\n"
                              "Click Cancel to exit."), QMessageBox::Cancel);


}

void MainWindow::on_pb_supprimer_clicked()
{
int id = ui->lineEdit_id->text().toInt();
bool test=tmpetudiant.supprimer(id);
if(test)
{ui->tabetudiant->setModel(tmpetudiant.afficher());//refresh
    QMessageBox::information(nullptr, QObject::tr("Supprimer un Employee"),
                QObject::tr("Employee supprimé.\n"
                            "Click Cancel to exit."), QMessageBox::Cancel);

}
else
    QMessageBox::critical(nullptr, QObject::tr("Supprimer un Employee"),
                QObject::tr("Erreur !.\n"
                            "Click Cancel to exit."), QMessageBox::Cancel);


}


void MainWindow::on_pb_ajouter_2_clicked()
{
    int id = ui->lineEdit_id_3->text().toInt();
    QString nom= ui->lineEdit_nom_2->text();
    QString prenom= ui->lineEdit_prenom_2->text();
    QString mail= ui->lineEdit_mail->text();
  Chauffeur e(id,nom,prenom,mail);
  bool test=e.ajouter();
  if(test)
{ui->tabetudiant_2->setModel(tmpchauffeur.afficher());//refresh

QMessageBox::information(nullptr, QObject::tr("Ajouter un chauffeur"),
                  QObject::tr("Chauffeur ajouté.\n"
                              "Click Cancel to exit."), QMessageBox::Cancel);

}
  else
      QMessageBox::critical(nullptr, QObject::tr("Ajouter un chauffeur"),
                  QObject::tr("Erreur !.\n"
                              "Click Cancel to exit."), QMessageBox::Cancel);

}

void MainWindow::on_pb_supprimer_2_clicked()
{
int id = ui->lineEdit_id_4->text().toInt();
bool test=tmpchauffeur.supprimer(id);
if(test)
{ui->tabetudiant_2->setModel(tmpchauffeur.afficher());//refresh
    QMessageBox::information(nullptr, QObject::tr("Supprimer un chauffeur"),
                QObject::tr("Chauffeur supprimé.\n"
                            "Click Cancel to exit."), QMessageBox::Cancel);

}
else
    QMessageBox::critical(nullptr, QObject::tr("Supprimer un chauffeur"),
                QObject::tr("Erreur !.\n"
                            "Click Cancel to exit."), QMessageBox::Cancel);


}

void MainWindow::on_pb_ajouter_3_clicked()
{
    int id = ui->lineEdit_id->text().toInt();
    QString nom= ui->lineEdit_nom->text();
    QString prenom= ui->lineEdit_prenom->text();
  Employee e(id,nom,prenom);
  bool test=e.modifier();
  if(test)
{ui->tabetudiant->setModel(tmpetudiant.afficher());//refresh
QMessageBox::information(nullptr, QObject::tr("Modifier un étudiant"),
                  QObject::tr("Employee modifié.\n"
                              "Click Cancel to exit."), QMessageBox::Cancel);

}
  else
      QMessageBox::critical(nullptr, QObject::tr("Modifier un étudiant"),
                  QObject::tr("Erreur !.\n"
                              "Click Cancel to exit."), QMessageBox::Cancel);
}

void MainWindow::on_pb_ajouter_4_clicked()
{
    int id = ui->lineEdit_id_3->text().toInt();
    QString nom= ui->lineEdit_nom_2->text();
    QString prenom= ui->lineEdit_prenom_2->text();
    QString mail= ui->lineEdit_mail->text();
  Chauffeur e(id,nom,prenom,mail);
  bool test=e.modifier();
  if(test)
{ui->tabetudiant_2->setModel(tmpchauffeur.afficher());//refresh
QMessageBox::information(nullptr, QObject::tr("Modifier un chauffeur"),
                  QObject::tr("Chauffeur modifié.\n"
                              "Click Cancel to exit."), QMessageBox::Cancel);

}
  else
      QMessageBox::critical(nullptr, QObject::tr("Modifier un chauffeur"),
                  QObject::tr("Erreur !.\n"
                              "Click Cancel to exit."), QMessageBox::Cancel);
}

void MainWindow::stat(){
    ///////////////////////////////////////////////////////////////////////
        // set dark background gradient:
           QLinearGradient gradient(0, 0, 0, 400);
           gradient.setColorAt(0, QColor(90, 90, 90));
           gradient.setColorAt(0.38, QColor(105, 105, 105));
           gradient.setColorAt(1, QColor(70, 70, 70));
           ui->customPlot->setBackground(QBrush(gradient));

           // create empty bar chart objects:
           QCPBars *amande = new QCPBars(ui->customPlot->xAxis, ui->customPlot->yAxis);
           amande->setAntialiased(false);
           amande->setStackingGap(1);
            //set names and colors:
           amande->setName("aaaa");
           amande->setPen(QPen(QColor(0, 168, 140).lighter(130)));
           amande->setBrush(QColor(0, 168, 140));
           // stack bars on top of each other:


           // prepare x axis with country labels:
           QVector<double> ticks;
           QVector<QString> labels;
           QSqlQuery q;
           int i=0;
           q.exec("select EXTRACT(year FROM date_debut), count(*) from employee group by EXTRACT(year FROM date_debut) order by EXTRACT(year FROM date_debut)");
           while (q.next()) {
               QString adresse= q.value(0).toString();
               i++;
               ticks<<i;
               labels <<adresse;
           }
           QSharedPointer<QCPAxisTickerText> textTicker(new QCPAxisTickerText);
           textTicker->addTicks(ticks, labels);
           ui->customPlot->xAxis->setTicker(textTicker);
           ui->customPlot->xAxis->setTickLabelRotation(60);
           ui->customPlot->xAxis->setSubTicks(false);
           ui->customPlot->xAxis->setTickLength(0, 4);
           ui->customPlot->xAxis->setRange(0, 8);
           ui->customPlot->xAxis->setBasePen(QPen(Qt::white));
           ui->customPlot->xAxis->setTickPen(QPen(Qt::white));
           ui->customPlot->xAxis->grid()->setVisible(true);
           ui->customPlot->xAxis->grid()->setPen(QPen(QColor(130, 130, 130), 0, Qt::DotLine));
           ui->customPlot->xAxis->setTickLabelColor(Qt::white);
           ui->customPlot->xAxis->setLabelColor(Qt::white);

           // prepare y axis:
           ui->customPlot->yAxis->setRange(0,10);
           ui->customPlot->yAxis->setPadding(5); // a bit more space to the left border
           ui->customPlot->yAxis->setLabel("Nombre des employees");
           ui->customPlot->yAxis->setBasePen(QPen(Qt::white));
           ui->customPlot->yAxis->setTickPen(QPen(Qt::white));
           ui->customPlot->yAxis->setSubTickPen(QPen(Qt::white));
           ui->customPlot->yAxis->grid()->setSubGridVisible(true);
           ui->customPlot->yAxis->setTickLabelColor(Qt::white);
           ui->customPlot->yAxis->setLabelColor(Qt::white);
           ui->customPlot->yAxis->grid()->setPen(QPen(QColor(130, 130, 130), 0, Qt::SolidLine));
           ui->customPlot->yAxis->grid()->setSubGridPen(QPen(QColor(130, 130, 130), 0, Qt::DotLine));

           // Add data:

           QVector<double> PlaceData;
           QSqlQuery q1("select EXTRACT(year FROM date_debut), count(*) from employee group by EXTRACT(year FROM date_debut) order by EXTRACT(year FROM date_debut)");
           while (q1.next()) {
                         int  nbr_fautee = q1.value(1).toInt();
                         PlaceData<< nbr_fautee;
                           }
           amande->setData(ticks, PlaceData);
           // setup legend:
           ui->customPlot->legend->setVisible(false);
           ui->customPlot->axisRect()->insetLayout()->setInsetAlignment(0, Qt::AlignTop|Qt::AlignHCenter);
           ui->customPlot->legend->setBrush(QColor(255, 255, 255, 100));
           ui->customPlot->legend->setBorderPen(Qt::NoPen);
           QFont legendFont = font();
           legendFont.setPointSize(10);
           ui->customPlot->legend->setFont(legendFont);
           ui->customPlot->setInteractions(QCP::iRangeDrag | QCP::iRangeZoom);

}

void MainWindow::on_comboBox_activated(const QString &arg1)
{

}

void MainWindow::on_pushButton_clicked()
{
    Smtp smtp("hassen.benmansour@esprit.tn","11383464HBM@","smtp.gmail.com");
    smtp.sendMail("hassen.benmansour@esprit.tn",ui->lineEdit->text(),ui->mail_objet->text(),ui->mail_body->text());
}
