/********************************************************************************
** Form generated from reading UI file 'rreservations.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RRESERVATIONS_H
#define UI_RRESERVATIONS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RRESERVATIONS
{
public:
    QWidget *centralWidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QPushButton *supprimerres;
    QTableView *tableView_reservation;
    QPushButton *pushButton_2;
    QTableView *tableView_affirechercher;
    QPushButton *pushButton_chercher_reservation;
    QFrame *frame_7;
    QLabel *label_2;
    QLabel *Digital_Clock;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_24;
    QLineEdit *lineEdit_numero_2;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_25;
    QLineEdit *lineEdit_nom_2;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_26;
    QLineEdit *lineEdit_prenom_2;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_27;
    QLineEdit *lineEdit_moyen_2;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_28;
    QLineEdit *lineEdit_place_2;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_29;
    QTimeEdit *date_3;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_30;
    QLineEdit *lineEdit_depart_2;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_31;
    QLineEdit *lineEdit_arrivee_2;
    QPushButton *OK_ajouter_reservation_2;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QLineEdit *numero_client_rechireservation;
    QLineEdit *numero_client_modireservation;
    QPushButton *pushButton_6;
    QPushButton *pushButton_17;
    QWidget *page_2;
    QLineEdit *numerorescher;
    QPushButton *supprimerres_2;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_25;
    QLabel *label_40;
    QLineEdit *lineEdit_numero_4;
    QHBoxLayout *horizontalLayout_26;
    QLabel *label_41;
    QLineEdit *lineEdit_nom_4;
    QHBoxLayout *horizontalLayout_27;
    QLabel *label_42;
    QLineEdit *lineEdit_prenom_4;
    QHBoxLayout *horizontalLayout_28;
    QLabel *label_43;
    QLineEdit *lineEdit_moyen_4;
    QHBoxLayout *horizontalLayout_29;
    QLabel *label_44;
    QLineEdit *lineEdit_place_4;
    QHBoxLayout *horizontalLayout_30;
    QLabel *label_45;
    QTimeEdit *date_2;
    QHBoxLayout *horizontalLayout_31;
    QLabel *label_46;
    QLineEdit *lineEdit_depart_4;
    QHBoxLayout *horizontalLayout_32;
    QLabel *label_47;
    QLineEdit *lineEdit_arrivee_4;
    QPushButton *OK_ajouter_reservation_4;
    QTableView *tableView_reservation_2;
    QPushButton *pushButton_chercher_reservation_2;
    QFrame *frame_8;
    QLabel *label_4;
    QPushButton *supprimerres_3;
    QLineEdit *numero_client_modireservation_3;
    QPushButton *pushButton_chercher_reservation_3;
    QTableView *tableView_reservation_3;
    QWidget *layoutWidget_3;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_41;
    QLabel *label_56;
    QLineEdit *numerohor;
    QHBoxLayout *horizontalLayout_46;
    QLabel *label_61;
    QTimeEdit *date_4;
    QPushButton *OK_ajouter_reservation_6;
    QPushButton *pushButton_15;
    QPushButton *pushButton_18;
    QLabel *label_5;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *RRESERVATIONS)
    {
        if (RRESERVATIONS->objectName().isEmpty())
            RRESERVATIONS->setObjectName(QStringLiteral("RRESERVATIONS"));
        RRESERVATIONS->resize(824, 538);
        RRESERVATIONS->setStyleSheet(QLatin1String("\n"
"Qlabel\n"
"{\n"
" \n"
"	font: 16pt \"MS Shell Dlg 2\";\n"
"    color:blue;\n"
"}\n"
"\n"
"\n"
"QFrame\n"
"{\n"
"background-color:#0F52BA;\n"
"}\n"
"\n"
"QLabel\n"
"{\n"
"font: 12pt \"MS Shell Dlg 2\";\n"
"color:rgb(255, 255, 255);\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color:white;\n"
"border-radius:15px;\n"
"background:#000080;\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QToolTip\n"
"{\n"
"     border: 1px solid black;\n"
"     background-color: #ffa02f;\n"
"     padding: 1px;\n"
"     border-radius: 3px;\n"
"     opacity: 100;\n"
"}\n"
"\n"
"QWidget\n"
"{\n"
"    color: #b1b1b1;\n"
"    background-color: #323232;\n"
"}\n"
"\n"
"QWidget:item:hover\n"
"{\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #ffa02f, stop: 1 #ca0619);\n"
"    color: #000000;\n"
"}\n"
"\n"
"QWidget:item:selected\n"
"{\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #ffa02f, stop: 1 #d7801a);\n"
"}\n"
"\n"
"QMenuBar::item\n"
"{\n"
"    background: transparent;\n"
"}\n"
""
                        "\n"
"QMenuBar::item:selected\n"
"{\n"
"    background: transparent;\n"
"    border: 1px solid #ffaa00;\n"
"}\n"
"\n"
"QMenuBar::item:pressed\n"
"{\n"
"    background: #444;\n"
"    border: 1px solid #000;\n"
"    background-color: QLinearGradient(\n"
"        x1:0, y1:0,\n"
"        x2:0, y2:1,\n"
"        stop:1 #212121,\n"
"        stop:0.4 #343434/*,\n"
"        stop:0.2 #343434,\n"
"        stop:0.1 #ffaa00*/\n"
"    );\n"
"    margin-bottom:-1px;\n"
"    padding-bottom:1px;\n"
"}\n"
"\n"
"QMenu\n"
"{\n"
"    border: 1px solid #000;\n"
"}\n"
"\n"
"QMenu::item\n"
"{\n"
"    padding: 2px 20px 2px 20px;\n"
"}\n"
"\n"
"QMenu::item:selected\n"
"{\n"
"    color: #000000;\n"
"}\n"
"\n"
"QWidget:disabled\n"
"{\n"
"    color: #404040;\n"
"    background-color: #323232;\n"
"}\n"
"\n"
"QAbstractItemView\n"
"{\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #4d4d4d, stop: 0.1 #646464, stop: 1 #5d5d5d);\n"
"}\n"
"\n"
"QWidget:focus\n"
"{\n"
"    /*border: 2px solid QLinearGradient( x1: 0,"
                        " y1: 0, x2: 0, y2: 1, stop: 0 #ffa02f, stop: 1 #d7801a);*/\n"
"}\n"
"\n"
"QLineEdit\n"
"{\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #4d4d4d, stop: 0 #646464, stop: 1 #5d5d5d);\n"
"    padding: 1px;\n"
"    border-style: solid;\n"
"    border: 1px solid #1e1e1e;\n"
"    border-radius: 5;\n"
"}\n"
"\n"
"QPushButton\n"
"{\n"
"    color: #b1b1b1;\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #565656, stop: 0.1 #525252, stop: 0.5 #4e4e4e, stop: 0.9 #4a4a4a, stop: 1 #464646);\n"
"    border-width: 1px;\n"
"    border-color: #1e1e1e;\n"
"    border-style: solid;\n"
"    border-radius: 6;\n"
"    padding: 3px;\n"
"    font-size: 12px;\n"
"    padding-left: 5px;\n"
"    padding-right: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #2d2d2d, stop: 0.1 #2b2b2b, stop: 0.5 #292929, stop: 0.9 #282828, stop: 1 #252525);\n"
"}\n"
"\n"
"QComboBox\n"
"{\n"
"    selection-background-c"
                        "olor: #ffaa00;\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #565656, stop: 0.1 #525252, stop: 0.5 #4e4e4e, stop: 0.9 #4a4a4a, stop: 1 #464646);\n"
"    border-style: solid;\n"
"    border: 1px solid #1e1e1e;\n"
"    border-radius: 5;\n"
"}\n"
"\n"
"QComboBox:hover,QPushButton:hover\n"
"{\n"
"    border: 2px solid QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #ffa02f, stop: 1 #d7801a);\n"
"}\n"
"\n"
"\n"
"QComboBox:on\n"
"{\n"
"    padding-top: 3px;\n"
"    padding-left: 4px;\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #2d2d2d, stop: 0.1 #2b2b2b, stop: 0.5 #292929, stop: 0.9 #282828, stop: 1 #252525);\n"
"    selection-background-color: #ffaa00;\n"
"}\n"
"\n"
"QComboBox QAbstractItemView\n"
"{\n"
"    border: 2px solid darkgray;\n"
"    selection-background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #ffa02f, stop: 1 #d7801a);\n"
"}\n"
"\n"
"QComboBox::drop-down\n"
"{\n"
"     subcontrol-origin: padding;\n"
"     subcont"
                        "rol-position: top right;\n"
"     width: 15px;\n"
"\n"
"     border-left-width: 0px;\n"
"     border-left-color: darkgray;\n"
"     border-left-style: solid; /* just a single line */\n"
"     border-top-right-radius: 3px; /* same radius as the QComboBox */\n"
"     border-bottom-right-radius: 3px;\n"
" }\n"
"\n"
"QComboBox::down-arrow\n"
"{\n"
"     image: url(:/down_arrow.png);\n"
"}\n"
"\n"
"QGroupBox:focus\n"
"{\n"
"border: 2px solid QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #ffa02f, stop: 1 #d7801a);\n"
"}\n"
"\n"
"QTextEdit:focus\n"
"{\n"
"    border: 2px solid QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #ffa02f, stop: 1 #d7801a);\n"
"}\n"
"\n"
"QScrollBar:horizontal {\n"
"     border: 1px solid #222222;\n"
"     background: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0.0 #121212, stop: 0.2 #282828, stop: 1 #484848);\n"
"     height: 10px;\n"
"     margin: 0px 16px 0 16px;\n"
"}\n"
"\n"
"QScrollBar::handle:horizontal\n"
"{\n"
"      background: QLinearGradient( x1: 0, y1: 0, x2:"
                        " 1, y2: 0, stop: 0 #ffa02f, stop: 0.5 #d7801a, stop: 1 #ffa02f);\n"
"      min-height: 20px;\n"
"      border-radius: 2px;\n"
"}\n"
"\n"
"QScrollBar::add-line:horizontal {\n"
"      border: 1px solid #1b1b19;\n"
"      border-radius: 2px;\n"
"      background: QLinearGradient( x1: 0, y1: 0, x2: 1, y2: 0, stop: 0 #ffa02f, stop: 1 #d7801a);\n"
"      width: 14px;\n"
"      subcontrol-position: right;\n"
"      subcontrol-origin: margin;\n"
"}\n"
"\n"
"QScrollBar::sub-line:horizontal {\n"
"      border: 1px solid #1b1b19;\n"
"      border-radius: 2px;\n"
"      background: QLinearGradient( x1: 0, y1: 0, x2: 1, y2: 0, stop: 0 #ffa02f, stop: 1 #d7801a);\n"
"      width: 14px;\n"
"     subcontrol-position: left;\n"
"     subcontrol-origin: margin;\n"
"}\n"
"\n"
"QScrollBar::right-arrow:horizontal, QScrollBar::left-arrow:horizontal\n"
"{\n"
"      border: 1px solid black;\n"
"      width: 1px;\n"
"      height: 1px;\n"
"      background: white;\n"
"}\n"
"\n"
"QScrollBar::add-page:horizontal, QScrollBar::sub-page:hori"
                        "zontal\n"
"{\n"
"      background: none;\n"
"}\n"
"\n"
"QScrollBar:vertical\n"
"{\n"
"      background: QLinearGradient( x1: 0, y1: 0, x2: 1, y2: 0, stop: 0.0 #121212, stop: 0.2 #282828, stop: 1 #484848);\n"
"      width: 7px;\n"
"      margin: 16px 0 16px 0;\n"
"      border: 1px solid #222222;\n"
"}\n"
"\n"
"QScrollBar::handle:vertical\n"
"{\n"
"      background: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #ffa02f, stop: 0.5 #d7801a, stop: 1 #ffa02f);\n"
"      min-height: 20px;\n"
"      border-radius: 2px;\n"
"}\n"
"\n"
"QScrollBar::add-line:vertical\n"
"{\n"
"      border: 1px solid #1b1b19;\n"
"      border-radius: 2px;\n"
"      background: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #ffa02f, stop: 1 #d7801a);\n"
"      height: 14px;\n"
"      subcontrol-position: bottom;\n"
"      subcontrol-origin: margin;\n"
"}\n"
"\n"
"QScrollBar::sub-line:vertical\n"
"{\n"
"      border: 1px solid #1b1b19;\n"
"      border-radius: 2px;\n"
"      background: QLinearGradient( x1: 0, y1: 0, x2: 0, y2"
                        ": 1, stop: 0 #d7801a, stop: 1 #ffa02f);\n"
"      height: 14px;\n"
"      subcontrol-position: top;\n"
"      subcontrol-origin: margin;\n"
"}\n"
"\n"
"QScrollBar::up-arrow:vertical, QScrollBar::down-arrow:vertical\n"
"{\n"
"      border: 1px solid black;\n"
"      width: 1px;\n"
"      height: 1px;\n"
"      background: white;\n"
"}\n"
"\n"
"\n"
"QScrollBar::add-page:vertical, QScrollBar::sub-page:vertical\n"
"{\n"
"      background: none;\n"
"}\n"
"\n"
"QTextEdit\n"
"{\n"
"    background-color: #242424;\n"
"}\n"
"\n"
"QPlainTextEdit\n"
"{\n"
"    background-color: #000080;\n"
"}\n"
"\n"
"QHeaderView::section\n"
"{\n"
"    background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:0 #616161, stop: 0.5 #505050, stop: 0.6 #434343, stop:1 #656565);\n"
"    color: white;\n"
"    padding-left: 4px;\n"
"    border: 1px solid #6c6c6c;\n"
"}\n"
"\n"
"QCheckBox:disabled\n"
"{\n"
"color: #414141;\n"
"}\n"
"\n"
"QDockWidget::title\n"
"{\n"
"    text-align: center;\n"
"    spacing: 3px; /* spacing between items in th"
                        "e tool bar */\n"
"    background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:0 #323232, stop: 0.5 #242424, stop:1 #323232);\n"
"}\n"
"\n"
"QDockWidget::close-button, QDockWidget::float-button\n"
"{\n"
"    text-align: center;\n"
"    spacing: 1px; /* spacing between items in the tool bar */\n"
"    background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:0 #323232, stop: 0.5 #242424, stop:1 #323232);\n"
"}\n"
"\n"
"QDockWidget::close-button:hover, QDockWidget::float-button:hover\n"
"{\n"
"    background: #242424;\n"
"}\n"
"\n"
"QDockWidget::close-button:pressed, QDockWidget::float-button:pressed\n"
"{\n"
"    padding: 1px -1px -1px 1px;\n"
"}\n"
"\n"
"QMainWindow::separator\n"
"{\n"
"    background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:0 #161616, stop: 0.5 #151515, stop: 0.6 #212121, stop:1 #343434);\n"
"    color: white;\n"
"    padding-left: 4px;\n"
"    border: 1px solid #4c4c4c;\n"
"    spacing: 3px; /* spacing between items in the tool bar */\n"
"}\n"
"\n"
"QMainWindow::separat"
                        "or:hover\n"
"{\n"
"\n"
"    background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:0 #d7801a, stop:0.5 #b56c17 stop:1 #ffa02f);\n"
"    color: white;\n"
"    padding-left: 4px;\n"
"    border: 1px solid #6c6c6c;\n"
"    spacing: 3px; /* spacing between items in the tool bar */\n"
"}\n"
"\n"
"QToolBar::handle\n"
"{\n"
"     spacing: 3px; /* spacing between items in the tool bar */\n"
"     background: url(:/images/handle.png);\n"
"}\n"
"\n"
"QMenu::separator\n"
"{\n"
"    height: 2px;\n"
"    background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:0 #161616, stop: 0.5 #151515, stop: 0.6 #212121, stop:1 #343434);\n"
"    color: white;\n"
"    padding-left: 4px;\n"
"    margin-left: 10px;\n"
"    margin-right: 5px;\n"
"}\n"
"\n"
"QProgressBar\n"
"{\n"
"    border: 2px solid grey;\n"
"    border-radius: 5px;\n"
"    text-align: center;\n"
"}\n"
"\n"
"QProgressBar::chunk\n"
"{\n"
"    background-color: #d7801a;\n"
"    width: 2.15px;\n"
"    margin: 0.5px;\n"
"}\n"
"\n"
"\n"
"\n"
"QRadioButton::indic"
                        "ator:checked, QRadioButton::indicator:unchecked{\n"
"    color: #b1b1b1;\n"
"    background-color: #323232;\n"
"    border: 1px solid #b1b1b1;\n"
"    border-radius: 6px;\n"
"}\n"
"\n"
"QRadioButton::indicator:checked\n"
"{\n"
"    background-color: qradialgradient(\n"
"        cx: 0.5, cy: 0.5,\n"
"        fx: 0.5, fy: 0.5,\n"
"        radius: 1.0,\n"
"        stop: 0.25 #ffaa00,\n"
"        stop: 0.3 #323232\n"
"    );\n"
"}\n"
"\n"
"QCheckBox::indicator{\n"
"    color: #b1b1b1;\n"
"    background-color: #323232;\n"
"    border: 1px solid #b1b1b1;\n"
"    width: 9px;\n"
"    height: 9px;\n"
"}\n"
"\n"
"QRadioButton::indicator\n"
"{\n"
"    border-radius: 6px;\n"
"}\n"
"\n"
"QRadioButton::indicator:hover, QCheckBox::indicator:hover\n"
"{\n"
"    border: 1px solid #ffaa00;\n"
"}\n"
"\n"
"QCheckBox::indicator:checked\n"
"{\n"
"    image:url(:/images/checkbox.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:disabled, QRadioButton::indicator:disabled\n"
"{\n"
"    border: 1px solid #444;\n"
"}\n"
"\n"
"QTabBar::tab {\n"
""
                        "    color: #b1b1b1;\n"
"    border: 1px solid #444;\n"
"    border-bottom-style: none;\n"
"    background-color: #323232;\n"
"    padding-left: 10px;\n"
"    padding-right: 10px;\n"
"    padding-top: 3px;\n"
"    padding-bottom: 2px;\n"
"    margin-right: -1px;\n"
"}\n"
"\n"
"QTabWidget::pane {\n"
"    border: 1px solid #444;\n"
"    top: 1px;\n"
"}\n"
"\n"
"QTabBar::tab:last\n"
"{\n"
"    margin-right: 0; /* the last selected tab has nothing to overlap with on the right */\n"
"    border-top-right-radius: 3px;\n"
"}\n"
"\n"
"QTabBar::tab:first:!selected\n"
"{\n"
" margin-left: 0px; /* the last selected tab has nothing to overlap with on the right */\n"
"\n"
"\n"
"    border-top-left-radius: 3px;\n"
"}\n"
"\n"
"QTabBar::tab:!selected\n"
"{\n"
"    color: #b1b1b1;\n"
"    border-bottom-style: solid;\n"
"    margin-top: 3px;\n"
"    background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:1 #212121, stop:.4 #343434);\n"
"}\n"
"\n"
"QTabBar::tab:selected\n"
"{\n"
"    border-top-left-radius: 3px;\n"
"    bo"
                        "rder-top-right-radius: 3px;\n"
"    margin-bottom: 0px;\n"
"}\n"
"\n"
"QTabBar::tab:!selected:hover\n"
"{\n"
"    /*border-top: 2px solid #ffaa00;\n"
"    padding-bottom: 3px;*/\n"
"    border-top-left-radius: 3px;\n"
"    border-top-right-radius: 3px;\n"
"    background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:1 #212121, stop:0.4 #343434, stop:0.2 #343434, stop:0.1 #ffaa00);\n"
"}\n"
"\n"
""));
        centralWidget = new QWidget(RRESERVATIONS);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 0, 821, 481));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        supprimerres = new QPushButton(page);
        supprimerres->setObjectName(QStringLiteral("supprimerres"));
        supprimerres->setGeometry(QRect(470, 150, 81, 31));
        tableView_reservation = new QTableView(page);
        tableView_reservation->setObjectName(QStringLiteral("tableView_reservation"));
        tableView_reservation->setGeometry(QRect(10, 70, 451, 171));
        pushButton_2 = new QPushButton(page);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(350, 250, 111, 31));
        tableView_affirechercher = new QTableView(page);
        tableView_affirechercher->setObjectName(QStringLiteral("tableView_affirechercher"));
        tableView_affirechercher->setGeometry(QRect(10, 330, 451, 141));
        pushButton_chercher_reservation = new QPushButton(page);
        pushButton_chercher_reservation->setObjectName(QStringLiteral("pushButton_chercher_reservation"));
        pushButton_chercher_reservation->setGeometry(QRect(470, 110, 81, 31));
        frame_7 = new QFrame(page);
        frame_7->setObjectName(QStringLiteral("frame_7"));
        frame_7->setGeometry(QRect(10, 0, 791, 61));
        frame_7->setStyleSheet(QLatin1String("QFrame\n"
"{\n"
"background-color:#89CFEF;\n"
"}"));
        frame_7->setFrameShape(QFrame::StyledPanel);
        frame_7->setFrameShadow(QFrame::Raised);
        label_2 = new QLabel(frame_7);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(250, 20, 261, 21));
        label_2->setStyleSheet(QLatin1String("color: black;\n"
"font: 16pt \"MS Shell Dlg 2\";"));
        Digital_Clock = new QLabel(frame_7);
        Digital_Clock->setObjectName(QStringLiteral("Digital_Clock"));
        Digital_Clock->setGeometry(QRect(640, 23, 101, 31));
        Digital_Clock->setStyleSheet(QStringLiteral("color: rgb(0, 0, 0);"));
        layoutWidget = new QWidget(page);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(600, 70, 201, 321));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label_24 = new QLabel(layoutWidget);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setStyleSheet(QStringLiteral(""));

        horizontalLayout_9->addWidget(label_24);

        lineEdit_numero_2 = new QLineEdit(layoutWidget);
        lineEdit_numero_2->setObjectName(QStringLiteral("lineEdit_numero_2"));

        horizontalLayout_9->addWidget(lineEdit_numero_2);


        verticalLayout_2->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        label_25 = new QLabel(layoutWidget);
        label_25->setObjectName(QStringLiteral("label_25"));

        horizontalLayout_10->addWidget(label_25);

        lineEdit_nom_2 = new QLineEdit(layoutWidget);
        lineEdit_nom_2->setObjectName(QStringLiteral("lineEdit_nom_2"));

        horizontalLayout_10->addWidget(lineEdit_nom_2);


        verticalLayout_2->addLayout(horizontalLayout_10);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        label_26 = new QLabel(layoutWidget);
        label_26->setObjectName(QStringLiteral("label_26"));

        horizontalLayout_11->addWidget(label_26);

        lineEdit_prenom_2 = new QLineEdit(layoutWidget);
        lineEdit_prenom_2->setObjectName(QStringLiteral("lineEdit_prenom_2"));

        horizontalLayout_11->addWidget(lineEdit_prenom_2);


        verticalLayout_2->addLayout(horizontalLayout_11);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        label_27 = new QLabel(layoutWidget);
        label_27->setObjectName(QStringLiteral("label_27"));

        horizontalLayout_12->addWidget(label_27);

        lineEdit_moyen_2 = new QLineEdit(layoutWidget);
        lineEdit_moyen_2->setObjectName(QStringLiteral("lineEdit_moyen_2"));

        horizontalLayout_12->addWidget(lineEdit_moyen_2);


        verticalLayout_2->addLayout(horizontalLayout_12);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        label_28 = new QLabel(layoutWidget);
        label_28->setObjectName(QStringLiteral("label_28"));

        horizontalLayout_13->addWidget(label_28);

        lineEdit_place_2 = new QLineEdit(layoutWidget);
        lineEdit_place_2->setObjectName(QStringLiteral("lineEdit_place_2"));

        horizontalLayout_13->addWidget(lineEdit_place_2);


        verticalLayout_2->addLayout(horizontalLayout_13);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setSpacing(6);
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        label_29 = new QLabel(layoutWidget);
        label_29->setObjectName(QStringLiteral("label_29"));

        horizontalLayout_14->addWidget(label_29);

        date_3 = new QTimeEdit(layoutWidget);
        date_3->setObjectName(QStringLiteral("date_3"));

        horizontalLayout_14->addWidget(date_3);


        verticalLayout_2->addLayout(horizontalLayout_14);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setSpacing(6);
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        label_30 = new QLabel(layoutWidget);
        label_30->setObjectName(QStringLiteral("label_30"));

        horizontalLayout_15->addWidget(label_30);

        lineEdit_depart_2 = new QLineEdit(layoutWidget);
        lineEdit_depart_2->setObjectName(QStringLiteral("lineEdit_depart_2"));

        horizontalLayout_15->addWidget(lineEdit_depart_2);


        verticalLayout_2->addLayout(horizontalLayout_15);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setSpacing(6);
        horizontalLayout_16->setObjectName(QStringLiteral("horizontalLayout_16"));
        label_31 = new QLabel(layoutWidget);
        label_31->setObjectName(QStringLiteral("label_31"));

        horizontalLayout_16->addWidget(label_31);

        lineEdit_arrivee_2 = new QLineEdit(layoutWidget);
        lineEdit_arrivee_2->setObjectName(QStringLiteral("lineEdit_arrivee_2"));

        horizontalLayout_16->addWidget(lineEdit_arrivee_2);


        verticalLayout_2->addLayout(horizontalLayout_16);

        OK_ajouter_reservation_2 = new QPushButton(layoutWidget);
        OK_ajouter_reservation_2->setObjectName(QStringLiteral("OK_ajouter_reservation_2"));

        verticalLayout_2->addWidget(OK_ajouter_reservation_2);

        pushButton_4 = new QPushButton(layoutWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        verticalLayout_2->addWidget(pushButton_4);

        pushButton_5 = new QPushButton(layoutWidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));

        verticalLayout_2->addWidget(pushButton_5);

        numero_client_rechireservation = new QLineEdit(page);
        numero_client_rechireservation->setObjectName(QStringLiteral("numero_client_rechireservation"));
        numero_client_rechireservation->setGeometry(QRect(10, 290, 451, 31));
        numero_client_modireservation = new QLineEdit(page);
        numero_client_modireservation->setObjectName(QStringLiteral("numero_client_modireservation"));
        numero_client_modireservation->setGeometry(QRect(470, 70, 121, 31));
        pushButton_6 = new QPushButton(page);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(10, 250, 101, 31));
        pushButton_17 = new QPushButton(page);
        pushButton_17->setObjectName(QStringLiteral("pushButton_17"));
        pushButton_17->setGeometry(QRect(690, 440, 111, 31));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        numerorescher = new QLineEdit(page_2);
        numerorescher->setObjectName(QStringLiteral("numerorescher"));
        numerorescher->setGeometry(QRect(470, 70, 121, 31));
        supprimerres_2 = new QPushButton(page_2);
        supprimerres_2->setObjectName(QStringLiteral("supprimerres_2"));
        supprimerres_2->setGeometry(QRect(470, 150, 81, 31));
        layoutWidget_2 = new QWidget(page_2);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(600, 70, 201, 321));
        verticalLayout_4 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_25 = new QHBoxLayout();
        horizontalLayout_25->setSpacing(6);
        horizontalLayout_25->setObjectName(QStringLiteral("horizontalLayout_25"));
        label_40 = new QLabel(layoutWidget_2);
        label_40->setObjectName(QStringLiteral("label_40"));
        label_40->setStyleSheet(QStringLiteral(""));

        horizontalLayout_25->addWidget(label_40);

        lineEdit_numero_4 = new QLineEdit(layoutWidget_2);
        lineEdit_numero_4->setObjectName(QStringLiteral("lineEdit_numero_4"));

        horizontalLayout_25->addWidget(lineEdit_numero_4);


        verticalLayout_4->addLayout(horizontalLayout_25);

        horizontalLayout_26 = new QHBoxLayout();
        horizontalLayout_26->setSpacing(6);
        horizontalLayout_26->setObjectName(QStringLiteral("horizontalLayout_26"));
        label_41 = new QLabel(layoutWidget_2);
        label_41->setObjectName(QStringLiteral("label_41"));

        horizontalLayout_26->addWidget(label_41);

        lineEdit_nom_4 = new QLineEdit(layoutWidget_2);
        lineEdit_nom_4->setObjectName(QStringLiteral("lineEdit_nom_4"));

        horizontalLayout_26->addWidget(lineEdit_nom_4);


        verticalLayout_4->addLayout(horizontalLayout_26);

        horizontalLayout_27 = new QHBoxLayout();
        horizontalLayout_27->setSpacing(6);
        horizontalLayout_27->setObjectName(QStringLiteral("horizontalLayout_27"));
        label_42 = new QLabel(layoutWidget_2);
        label_42->setObjectName(QStringLiteral("label_42"));

        horizontalLayout_27->addWidget(label_42);

        lineEdit_prenom_4 = new QLineEdit(layoutWidget_2);
        lineEdit_prenom_4->setObjectName(QStringLiteral("lineEdit_prenom_4"));

        horizontalLayout_27->addWidget(lineEdit_prenom_4);


        verticalLayout_4->addLayout(horizontalLayout_27);

        horizontalLayout_28 = new QHBoxLayout();
        horizontalLayout_28->setSpacing(6);
        horizontalLayout_28->setObjectName(QStringLiteral("horizontalLayout_28"));
        label_43 = new QLabel(layoutWidget_2);
        label_43->setObjectName(QStringLiteral("label_43"));

        horizontalLayout_28->addWidget(label_43);

        lineEdit_moyen_4 = new QLineEdit(layoutWidget_2);
        lineEdit_moyen_4->setObjectName(QStringLiteral("lineEdit_moyen_4"));

        horizontalLayout_28->addWidget(lineEdit_moyen_4);


        verticalLayout_4->addLayout(horizontalLayout_28);

        horizontalLayout_29 = new QHBoxLayout();
        horizontalLayout_29->setSpacing(6);
        horizontalLayout_29->setObjectName(QStringLiteral("horizontalLayout_29"));
        label_44 = new QLabel(layoutWidget_2);
        label_44->setObjectName(QStringLiteral("label_44"));

        horizontalLayout_29->addWidget(label_44);

        lineEdit_place_4 = new QLineEdit(layoutWidget_2);
        lineEdit_place_4->setObjectName(QStringLiteral("lineEdit_place_4"));

        horizontalLayout_29->addWidget(lineEdit_place_4);


        verticalLayout_4->addLayout(horizontalLayout_29);

        horizontalLayout_30 = new QHBoxLayout();
        horizontalLayout_30->setSpacing(6);
        horizontalLayout_30->setObjectName(QStringLiteral("horizontalLayout_30"));
        label_45 = new QLabel(layoutWidget_2);
        label_45->setObjectName(QStringLiteral("label_45"));

        horizontalLayout_30->addWidget(label_45);

        date_2 = new QTimeEdit(layoutWidget_2);
        date_2->setObjectName(QStringLiteral("date_2"));

        horizontalLayout_30->addWidget(date_2);


        verticalLayout_4->addLayout(horizontalLayout_30);

        horizontalLayout_31 = new QHBoxLayout();
        horizontalLayout_31->setSpacing(6);
        horizontalLayout_31->setObjectName(QStringLiteral("horizontalLayout_31"));
        label_46 = new QLabel(layoutWidget_2);
        label_46->setObjectName(QStringLiteral("label_46"));

        horizontalLayout_31->addWidget(label_46);

        lineEdit_depart_4 = new QLineEdit(layoutWidget_2);
        lineEdit_depart_4->setObjectName(QStringLiteral("lineEdit_depart_4"));

        horizontalLayout_31->addWidget(lineEdit_depart_4);


        verticalLayout_4->addLayout(horizontalLayout_31);

        horizontalLayout_32 = new QHBoxLayout();
        horizontalLayout_32->setSpacing(6);
        horizontalLayout_32->setObjectName(QStringLiteral("horizontalLayout_32"));
        label_47 = new QLabel(layoutWidget_2);
        label_47->setObjectName(QStringLiteral("label_47"));

        horizontalLayout_32->addWidget(label_47);

        lineEdit_arrivee_4 = new QLineEdit(layoutWidget_2);
        lineEdit_arrivee_4->setObjectName(QStringLiteral("lineEdit_arrivee_4"));

        horizontalLayout_32->addWidget(lineEdit_arrivee_4);


        verticalLayout_4->addLayout(horizontalLayout_32);

        OK_ajouter_reservation_4 = new QPushButton(layoutWidget_2);
        OK_ajouter_reservation_4->setObjectName(QStringLiteral("OK_ajouter_reservation_4"));

        verticalLayout_4->addWidget(OK_ajouter_reservation_4);

        tableView_reservation_2 = new QTableView(page_2);
        tableView_reservation_2->setObjectName(QStringLiteral("tableView_reservation_2"));
        tableView_reservation_2->setGeometry(QRect(10, 70, 451, 171));
        pushButton_chercher_reservation_2 = new QPushButton(page_2);
        pushButton_chercher_reservation_2->setObjectName(QStringLiteral("pushButton_chercher_reservation_2"));
        pushButton_chercher_reservation_2->setGeometry(QRect(470, 110, 81, 31));
        frame_8 = new QFrame(page_2);
        frame_8->setObjectName(QStringLiteral("frame_8"));
        frame_8->setGeometry(QRect(10, 0, 791, 61));
        frame_8->setStyleSheet(QLatin1String("QFrame\n"
"{\n"
"background-color:#89CFEF;\n"
"}"));
        frame_8->setFrameShape(QFrame::StyledPanel);
        frame_8->setFrameShadow(QFrame::Raised);
        label_4 = new QLabel(frame_8);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(190, 20, 401, 31));
        label_4->setStyleSheet(QLatin1String("color: black;\n"
"font: 16pt \"MS Shell Dlg 2\";"));
        supprimerres_3 = new QPushButton(page_2);
        supprimerres_3->setObjectName(QStringLiteral("supprimerres_3"));
        supprimerres_3->setGeometry(QRect(100, 450, 81, 31));
        numero_client_modireservation_3 = new QLineEdit(page_2);
        numero_client_modireservation_3->setObjectName(QStringLiteral("numero_client_modireservation_3"));
        numero_client_modireservation_3->setGeometry(QRect(10, 410, 301, 31));
        pushButton_chercher_reservation_3 = new QPushButton(page_2);
        pushButton_chercher_reservation_3->setObjectName(QStringLiteral("pushButton_chercher_reservation_3"));
        pushButton_chercher_reservation_3->setGeometry(QRect(10, 450, 81, 31));
        tableView_reservation_3 = new QTableView(page_2);
        tableView_reservation_3->setObjectName(QStringLiteral("tableView_reservation_3"));
        tableView_reservation_3->setGeometry(QRect(10, 260, 301, 141));
        layoutWidget_3 = new QWidget(page_2);
        layoutWidget_3->setObjectName(QStringLiteral("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(320, 290, 161, 191));
        verticalLayout_6 = new QVBoxLayout(layoutWidget_3);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_41 = new QHBoxLayout();
        horizontalLayout_41->setSpacing(6);
        horizontalLayout_41->setObjectName(QStringLiteral("horizontalLayout_41"));
        label_56 = new QLabel(layoutWidget_3);
        label_56->setObjectName(QStringLiteral("label_56"));
        label_56->setStyleSheet(QStringLiteral(""));

        horizontalLayout_41->addWidget(label_56);

        numerohor = new QLineEdit(layoutWidget_3);
        numerohor->setObjectName(QStringLiteral("numerohor"));

        horizontalLayout_41->addWidget(numerohor);


        verticalLayout_6->addLayout(horizontalLayout_41);

        horizontalLayout_46 = new QHBoxLayout();
        horizontalLayout_46->setSpacing(6);
        horizontalLayout_46->setObjectName(QStringLiteral("horizontalLayout_46"));
        label_61 = new QLabel(layoutWidget_3);
        label_61->setObjectName(QStringLiteral("label_61"));

        horizontalLayout_46->addWidget(label_61);

        date_4 = new QTimeEdit(layoutWidget_3);
        date_4->setObjectName(QStringLiteral("date_4"));

        horizontalLayout_46->addWidget(date_4);


        verticalLayout_6->addLayout(horizontalLayout_46);

        OK_ajouter_reservation_6 = new QPushButton(layoutWidget_3);
        OK_ajouter_reservation_6->setObjectName(QStringLiteral("OK_ajouter_reservation_6"));

        verticalLayout_6->addWidget(OK_ajouter_reservation_6);

        pushButton_15 = new QPushButton(layoutWidget_3);
        pushButton_15->setObjectName(QStringLiteral("pushButton_15"));

        verticalLayout_6->addWidget(pushButton_15);

        pushButton_18 = new QPushButton(page_2);
        pushButton_18->setObjectName(QStringLiteral("pushButton_18"));
        pushButton_18->setGeometry(QRect(690, 440, 111, 31));
        label_5 = new QLabel(page_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(320, 260, 161, 21));
        stackedWidget->addWidget(page_2);
        RRESERVATIONS->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(RRESERVATIONS);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 824, 21));
        RRESERVATIONS->setMenuBar(menuBar);
        mainToolBar = new QToolBar(RRESERVATIONS);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        RRESERVATIONS->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(RRESERVATIONS);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        RRESERVATIONS->setStatusBar(statusBar);

        retranslateUi(RRESERVATIONS);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(RRESERVATIONS);
    } // setupUi

    void retranslateUi(QMainWindow *RRESERVATIONS)
    {
        RRESERVATIONS->setWindowTitle(QApplication::translate("RRESERVATIONS", "RRESERVATIONS", Q_NULLPTR));
        supprimerres->setText(QApplication::translate("RRESERVATIONS", "Supprimer", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("RRESERVATIONS", "EXPORTER", Q_NULLPTR));
        pushButton_chercher_reservation->setText(QApplication::translate("RRESERVATIONS", "Chercher", Q_NULLPTR));
        label_2->setText(QApplication::translate("RRESERVATIONS", "GESTION des R\303\251servations", Q_NULLPTR));
        Digital_Clock->setText(QString());
        label_24->setText(QApplication::translate("RRESERVATIONS", "Numero :", Q_NULLPTR));
        label_25->setText(QApplication::translate("RRESERVATIONS", "Nom :", Q_NULLPTR));
        label_26->setText(QApplication::translate("RRESERVATIONS", "Prenom :", Q_NULLPTR));
        label_27->setText(QApplication::translate("RRESERVATIONS", "Moyen :", Q_NULLPTR));
        label_28->setText(QApplication::translate("RRESERVATIONS", "Nombre_place :", Q_NULLPTR));
        label_29->setText(QApplication::translate("RRESERVATIONS", "Horaire :", Q_NULLPTR));
        label_30->setText(QApplication::translate("RRESERVATIONS", "Depart :", Q_NULLPTR));
        label_31->setText(QApplication::translate("RRESERVATIONS", "Arriv\303\251e :", Q_NULLPTR));
        OK_ajouter_reservation_2->setText(QApplication::translate("RRESERVATIONS", "Ajouter", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("RRESERVATIONS", "Modifier", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("RRESERVATIONS", "Ajouter \303\240 la liste", Q_NULLPTR));
        numero_client_rechireservation->setPlaceholderText(QApplication::translate("RRESERVATIONS", "numero client/r\303\251servation", Q_NULLPTR));
        numero_client_modireservation->setPlaceholderText(QApplication::translate("RRESERVATIONS", "Numero client/r\303\251servation", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("RRESERVATIONS", "Trier", Q_NULLPTR));
        pushButton_17->setText(QApplication::translate("RRESERVATIONS", "Vers la liste", Q_NULLPTR));
        numerorescher->setPlaceholderText(QApplication::translate("RRESERVATIONS", "Numero client/r\303\251servation", Q_NULLPTR));
        supprimerres_2->setText(QApplication::translate("RRESERVATIONS", "Supprimer", Q_NULLPTR));
        label_40->setText(QApplication::translate("RRESERVATIONS", "Numero :", Q_NULLPTR));
        label_41->setText(QApplication::translate("RRESERVATIONS", "Nom :", Q_NULLPTR));
        label_42->setText(QApplication::translate("RRESERVATIONS", "Prenom :", Q_NULLPTR));
        label_43->setText(QApplication::translate("RRESERVATIONS", "Moyen :", Q_NULLPTR));
        label_44->setText(QApplication::translate("RRESERVATIONS", "Nombre_place :", Q_NULLPTR));
        label_45->setText(QApplication::translate("RRESERVATIONS", "Horaire :", Q_NULLPTR));
        label_46->setText(QApplication::translate("RRESERVATIONS", "Depart :", Q_NULLPTR));
        label_47->setText(QApplication::translate("RRESERVATIONS", "Arriv\303\251e :", Q_NULLPTR));
        OK_ajouter_reservation_4->setText(QApplication::translate("RRESERVATIONS", "Confirmer", Q_NULLPTR));
        pushButton_chercher_reservation_2->setText(QApplication::translate("RRESERVATIONS", "Chercher", Q_NULLPTR));
        label_4->setText(QApplication::translate("RRESERVATIONS", "GESTION des  listes d'attentes et horaires", Q_NULLPTR));
        supprimerres_3->setText(QApplication::translate("RRESERVATIONS", "Supprimer", Q_NULLPTR));
        numero_client_modireservation_3->setPlaceholderText(QApplication::translate("RRESERVATIONS", "Numero horaire", Q_NULLPTR));
        pushButton_chercher_reservation_3->setText(QApplication::translate("RRESERVATIONS", "Chercher", Q_NULLPTR));
        label_56->setText(QApplication::translate("RRESERVATIONS", "Numero :", Q_NULLPTR));
        label_61->setText(QApplication::translate("RRESERVATIONS", "Horaire :", Q_NULLPTR));
        OK_ajouter_reservation_6->setText(QApplication::translate("RRESERVATIONS", "Ajouter", Q_NULLPTR));
        pushButton_15->setText(QApplication::translate("RRESERVATIONS", "Modifier", Q_NULLPTR));
        pushButton_18->setText(QApplication::translate("RRESERVATIONS", "Vers la r\303\251servation", Q_NULLPTR));
        label_5->setText(QApplication::translate("RRESERVATIONS", "GESTION  horaires", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class RRESERVATIONS: public Ui_RRESERVATIONS {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RRESERVATIONS_H
