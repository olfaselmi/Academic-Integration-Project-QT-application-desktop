#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "connection.h"
#include "rreservations.h"
#include "smart_abonnement.h"
#include "reseau_circuit.h"


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_seconnecter_clicked();

private:
    Ui::MainWindow *ui;
    Ui::RRESERVATIONS * rr;
    Ui::Smart_abonnement *sa;
    Ui::reseau_circuit *rc;
};
#endif // MAINWINDOW_H
