#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "moyenT.h"
#include <QMainWindow>
#include <QString>
//#include<QSound>
//#include <QMediaPlayer>
#include"moyendialoge.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


private slots:
    void on_pb_ajouter_clicked();

    void on_pb_supprimer_clicked();

    void on_pb_modifier_clicked();

private:
    Ui::MainWindow *ui;
    moyen tmpmoyen;
    moyendialoge *moyendialog;
  //  QSound *son ;
};

#endif // MAINWINDOW_H
