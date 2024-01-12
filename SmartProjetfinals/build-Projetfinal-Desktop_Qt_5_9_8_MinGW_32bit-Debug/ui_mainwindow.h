/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QToolButton *toolButton_3;
    QFrame *frame_12;
    QLineEdit *username;
    QLineEdit *password;
    QPushButton *seconnecter;
    QLabel *label_35;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        toolButton_3 = new QToolButton(centralwidget);
        toolButton_3->setObjectName(QStringLiteral("toolButton_3"));
        toolButton_3->setGeometry(QRect(340, 30, 121, 121));
        toolButton_3->setStyleSheet(QLatin1String("QToolButton\n"
"{\n"
"border-radius:60px;\n"
"background-color:#0080FE;\n"
"}"));
        QIcon icon;
        icon.addFile(QStringLiteral("D:/Projet_smartTransport/loginc.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_3->setIcon(icon);
        frame_12 = new QFrame(centralwidget);
        frame_12->setObjectName(QStringLiteral("frame_12"));
        frame_12->setGeometry(QRect(230, 90, 341, 371));
        frame_12->setStyleSheet(QLatin1String("QFrame\n"
"{\n"
" background:brown;\n"
"border-radius:25px;\n"
"}\n"
""));
        frame_12->setFrameShape(QFrame::StyledPanel);
        frame_12->setFrameShadow(QFrame::Raised);
        username = new QLineEdit(frame_12);
        username->setObjectName(QStringLiteral("username"));
        username->setGeometry(QRect(40, 170, 271, 41));
        username->setStyleSheet(QLatin1String("QLineEdit\n"
"{\n"
"background:transparent;\n"
"border:none;\n"
"color:#717072;\n"
"border-bottom:1px solid #717072;\n"
"font-size:20px;\n"
"color:black;\n"
"}"));
        password = new QLineEdit(frame_12);
        password->setObjectName(QStringLiteral("password"));
        password->setGeometry(QRect(40, 250, 271, 41));
        password->setStyleSheet(QLatin1String("QLineEdit\n"
"{\n"
"background:transparent;\n"
"border:none;\n"
"color:#717072;\n"
"border-bottom:1px solid #717072;\n"
"font-size:20px;\n"
"color:black;\n"
"}"));
        password->setEchoMode(QLineEdit::Password);
        seconnecter = new QPushButton(frame_12);
        seconnecter->setObjectName(QStringLiteral("seconnecter"));
        seconnecter->setGeometry(QRect(70, 320, 211, 41));
        seconnecter->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
" background-color:#0080FE;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"color:white;\n"
"border-radius:15px;\n"
"background:#000080;\n"
"}"));
        label_35 = new QLabel(frame_12);
        label_35->setObjectName(QStringLiteral("label_35"));
        label_35->setGeometry(QRect(90, 110, 161, 61));
        label_35->setStyleSheet(QLatin1String("font: 17pt \"MS Gothic\";\n"
"color:white;\n"
""));
        MainWindow->setCentralWidget(centralwidget);
        frame_12->raise();
        toolButton_3->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        toolButton_3->setText(QApplication::translate("MainWindow", "...", Q_NULLPTR));
        username->setText(QString());
        username->setPlaceholderText(QApplication::translate("MainWindow", "Nom Utilisateur :", Q_NULLPTR));
        password->setText(QString());
        password->setPlaceholderText(QApplication::translate("MainWindow", "Mot de passe :", Q_NULLPTR));
        seconnecter->setText(QApplication::translate("MainWindow", "Connecter", Q_NULLPTR));
        label_35->setText(QApplication::translate("MainWindow", "Connecter ici", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
