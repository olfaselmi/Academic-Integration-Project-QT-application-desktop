#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "employee.h"
#include "chauffeur.h"
#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void afficher();
    void stat();

private slots:
    void on_pb_ajouter_clicked();

    void on_pb_supprimer_clicked();

    void on_tabWidget_currentChanged(int index);

    void on_pb_ajouter_2_clicked();

    void on_pb_supprimer_2_clicked();

    void on_pb_ajouter_3_clicked();

    void on_pb_ajouter_4_clicked();

    void on_comboBox_activated(const QString &arg1);

    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    Employee tmpetudiant;
    Chauffeur tmpchauffeur;
};

#endif // MAINWINDOW_H
