/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *login_page;
    QLabel *bg_login;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLabel *label;
    QLabel *label_2;
    QPushButton *login_button;
    QLabel *label_4;
    QPushButton *mdpoubli;
    QLabel *label_5;
    QLabel *label_12;
    QGroupBox *signup_page;
    QLabel *bg_signup;
    QLineEdit *mail_employe;
    QLineEdit *nom_employe;
    QLineEdit *prenom_employe;
    QLineEdit *mdp_employe;
    QLineEdit *mdp_2_employe;
    QDateEdit *date_employe;
    QComboBox *sexe_employe;
    QLineEdit *salaire_employe;
    QComboBox *poste_employe;
    QPushButton *inserer_image;
    QLabel *label_image;
    QPushButton *ajouter_employe;
    QPushButton *modifier_employe;
    QTableView *tableView_employe;
    QComboBox *comboBox_3;
    QLineEdit *lineEdit_3;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QComboBox *comboBox_4;
    QPushButton *retour_menu;
    QLineEdit *image_path_employe;
    QLabel *label_6;
    QGroupBox *mdpoublie_page;
    QLabel *label_3;
    QLineEdit *mailoublie;
    QLabel *label_7;
    QPushButton *pushButton_5;
    QPushButton *retour_login;
    QLabel *label_11;
    QGroupBox *menu_page;
    QLabel *label_8;
    QLabel *label_9;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *aller_gestion_employe;
    QPushButton *pushButton_10;
    QPushButton *pushButton_11;
    QLabel *label_10;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1853, 1279);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        login_page = new QGroupBox(centralwidget);
        login_page->setObjectName("login_page");
        login_page->setGeometry(QRect(0, 0, 1920, 1080));
        bg_login = new QLabel(login_page);
        bg_login->setObjectName("bg_login");
        bg_login->setGeometry(QRect(0, 0, 1920, 1080));
        bg_login->setPixmap(QPixmap(QString::fromUtf8(":/Desktop/src++/bg.jpg")));
        lineEdit = new QLineEdit(login_page);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(70, 380, 211, 31));
        lineEdit_2 = new QLineEdit(login_page);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(70, 450, 211, 31));
        label = new QLabel(login_page);
        label->setObjectName("label");
        label->setGeometry(QRect(70, 360, 171, 16));
        label->setStyleSheet(QString::fromUtf8("color:white;\n"
""));
        label_2 = new QLabel(login_page);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(70, 430, 171, 16));
        label_2->setStyleSheet(QString::fromUtf8("color:white;\n"
""));
        login_button = new QPushButton(login_page);
        login_button->setObjectName("login_button");
        login_button->setGeometry(QRect(80, 670, 80, 24));
        label_4 = new QLabel(login_page);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(80, 700, 171, 16));
        label_4->setStyleSheet(QString::fromUtf8("color:white;\n"
""));
        mdpoubli = new QPushButton(login_page);
        mdpoubli->setObjectName("mdpoubli");
        mdpoubli->setGeometry(QRect(200, 700, 16, 16));
        label_5 = new QLabel(login_page);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(70, 100, 1231, 151));
        label_5->setStyleSheet(QString::fromUtf8("color:white;\n"
"font: 32pt \"Segoe UI\";\n"
""));
        label_12 = new QLabel(login_page);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(1600, 10, 191, 181));
        label_12->setPixmap(QPixmap(QString::fromUtf8(":/Downloads/logo.png")));
        signup_page = new QGroupBox(centralwidget);
        signup_page->setObjectName("signup_page");
        signup_page->setGeometry(QRect(0, 0, 1920, 1080));
        bg_signup = new QLabel(signup_page);
        bg_signup->setObjectName("bg_signup");
        bg_signup->setGeometry(QRect(0, 0, 1920, 1080));
        bg_signup->setPixmap(QPixmap(QString::fromUtf8(":/Desktop/src++/bg.jpg")));
        mail_employe = new QLineEdit(signup_page);
        mail_employe->setObjectName("mail_employe");
        mail_employe->setGeometry(QRect(30, 373, 221, 24));
        nom_employe = new QLineEdit(signup_page);
        nom_employe->setObjectName("nom_employe");
        nom_employe->setGeometry(QRect(30, 303, 221, 24));
        prenom_employe = new QLineEdit(signup_page);
        prenom_employe->setObjectName("prenom_employe");
        prenom_employe->setGeometry(QRect(30, 243, 221, 24));
        mdp_employe = new QLineEdit(signup_page);
        mdp_employe->setObjectName("mdp_employe");
        mdp_employe->setGeometry(QRect(30, 443, 221, 24));
        mdp_2_employe = new QLineEdit(signup_page);
        mdp_2_employe->setObjectName("mdp_2_employe");
        mdp_2_employe->setGeometry(QRect(30, 513, 221, 24));
        date_employe = new QDateEdit(signup_page);
        date_employe->setObjectName("date_employe");
        date_employe->setEnabled(false);
        date_employe->setGeometry(QRect(300, 243, 221, 25));
        sexe_employe = new QComboBox(signup_page);
        sexe_employe->addItem(QString());
        sexe_employe->addItem(QString());
        sexe_employe->addItem(QString());
        sexe_employe->addItem(QString());
        sexe_employe->setObjectName("sexe_employe");
        sexe_employe->setGeometry(QRect(300, 303, 221, 24));
        salaire_employe = new QLineEdit(signup_page);
        salaire_employe->setObjectName("salaire_employe");
        salaire_employe->setGeometry(QRect(300, 373, 221, 24));
        poste_employe = new QComboBox(signup_page);
        poste_employe->addItem(QString());
        poste_employe->addItem(QString());
        poste_employe->addItem(QString());
        poste_employe->addItem(QString());
        poste_employe->addItem(QString());
        poste_employe->setObjectName("poste_employe");
        poste_employe->setGeometry(QRect(300, 443, 221, 24));
        inserer_image = new QPushButton(signup_page);
        inserer_image->setObjectName("inserer_image");
        inserer_image->setGeometry(QRect(300, 513, 221, 24));
        label_image = new QLabel(signup_page);
        label_image->setObjectName("label_image");
        label_image->setGeometry(QRect(230, 60, 111, 121));
        label_image->setStyleSheet(QString::fromUtf8(""));
        ajouter_employe = new QPushButton(signup_page);
        ajouter_employe->setObjectName("ajouter_employe");
        ajouter_employe->setGeometry(QRect(170, 680, 211, 31));
        modifier_employe = new QPushButton(signup_page);
        modifier_employe->setObjectName("modifier_employe");
        modifier_employe->setGeometry(QRect(170, 730, 211, 31));
        tableView_employe = new QTableView(signup_page);
        tableView_employe->setObjectName("tableView_employe");
        tableView_employe->setGeometry(QRect(710, 210, 1061, 361));
        comboBox_3 = new QComboBox(signup_page);
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->setObjectName("comboBox_3");
        comboBox_3->setGeometry(QRect(1470, 170, 72, 24));
        lineEdit_3 = new QLineEdit(signup_page);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setGeometry(QRect(1560, 170, 211, 24));
        pushButton_2 = new QPushButton(signup_page);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(1419, 170, 41, 24));
        pushButton_3 = new QPushButton(signup_page);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(1579, 580, 191, 24));
        comboBox_4 = new QComboBox(signup_page);
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->setObjectName("comboBox_4");
        comboBox_4->setGeometry(QRect(1331, 170, 81, 24));
        retour_menu = new QPushButton(signup_page);
        retour_menu->setObjectName("retour_menu");
        retour_menu->setGeometry(QRect(40, 940, 80, 24));
        image_path_employe = new QLineEdit(signup_page);
        image_path_employe->setObjectName("image_path_employe");
        image_path_employe->setGeometry(QRect(300, 550, 221, 24));
        label_6 = new QLabel(signup_page);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(1600, 10, 191, 181));
        label_6->setPixmap(QPixmap(QString::fromUtf8(":/Downloads/logo.png")));
        mdpoublie_page = new QGroupBox(centralwidget);
        mdpoublie_page->setObjectName("mdpoublie_page");
        mdpoublie_page->setGeometry(QRect(0, 0, 1920, 1080));
        label_3 = new QLabel(mdpoublie_page);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(0, 0, 1920, 1080));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/Desktop/src++/bg.jpg")));
        mailoublie = new QLineEdit(mdpoublie_page);
        mailoublie->setObjectName("mailoublie");
        mailoublie->setGeometry(QRect(50, 220, 351, 24));
        label_7 = new QLabel(mdpoublie_page);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(50, 110, 871, 151));
        label_7->setStyleSheet(QString::fromUtf8("font: 9pt \"Segoe UI\";\n"
"color: white;\n"
"font: 600 12pt \"Segoe UI\";"));
        pushButton_5 = new QPushButton(mdpoublie_page);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(50, 270, 80, 24));
        retour_login = new QPushButton(mdpoublie_page);
        retour_login->setObjectName("retour_login");
        retour_login->setGeometry(QRect(40, 670, 231, 24));
        label_11 = new QLabel(mdpoublie_page);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(1600, 10, 191, 181));
        label_11->setPixmap(QPixmap(QString::fromUtf8(":/Downloads/logo.png")));
        menu_page = new QGroupBox(centralwidget);
        menu_page->setObjectName("menu_page");
        menu_page->setGeometry(QRect(0, 0, 1920, 1080));
        label_8 = new QLabel(menu_page);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(0, 0, 1920, 1080));
        label_8->setPixmap(QPixmap(QString::fromUtf8(":/Desktop/src++/bg.jpg")));
        label_9 = new QLabel(menu_page);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(50, 150, 411, 131));
        label_9->setStyleSheet(QString::fromUtf8("color:white;\n"
"font: 600 16pt \"Segoe UI\";\n"
"font: 12pt \"Segoe UI\";\n"
"font: 22pt \"Segoe UI\";\n"
"font: 700 22pt \"Segoe UI\";\n"
""));
        pushButton_7 = new QPushButton(menu_page);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(50, 460, 201, 41));
        pushButton_8 = new QPushButton(menu_page);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setGeometry(QRect(50, 390, 201, 41));
        aller_gestion_employe = new QPushButton(menu_page);
        aller_gestion_employe->setObjectName("aller_gestion_employe");
        aller_gestion_employe->setGeometry(QRect(50, 330, 201, 41));
        pushButton_10 = new QPushButton(menu_page);
        pushButton_10->setObjectName("pushButton_10");
        pushButton_10->setGeometry(QRect(50, 530, 201, 41));
        pushButton_11 = new QPushButton(menu_page);
        pushButton_11->setObjectName("pushButton_11");
        pushButton_11->setGeometry(QRect(50, 590, 201, 41));
        label_10 = new QLabel(menu_page);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(1600, 10, 191, 181));
        label_10->setPixmap(QPixmap(QString::fromUtf8(":/Downloads/logo.png")));
        MainWindow->setCentralWidget(centralwidget);
        menu_page->raise();
        login_page->raise();
        mdpoublie_page->raise();
        signup_page->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1853, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        login_page->setTitle(QString());
        bg_login->setText(QString());
        lineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "Veuillez entrer votre identifiant", nullptr));
        lineEdit_2->setPlaceholderText(QCoreApplication::translate("MainWindow", "Veuillez entrer votre mot de passe", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Adresse Mail :", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Mot de Passe :", nullptr));
        login_button->setText(QCoreApplication::translate("MainWindow", "Se connecter", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Mot de passe oubli\303\251?", nullptr));
        mdpoubli->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "WELCOME TO PROBALL MANGER ", nullptr));
        label_12->setText(QString());
        signup_page->setTitle(QString());
        bg_signup->setText(QString());
        mail_employe->setPlaceholderText(QCoreApplication::translate("MainWindow", "Veuillez saisir l'adresse mail", nullptr));
        nom_employe->setPlaceholderText(QCoreApplication::translate("MainWindow", "Veuillez saisir le nom", nullptr));
        prenom_employe->setPlaceholderText(QCoreApplication::translate("MainWindow", "Veuillez saisir le pr\303\251nom", nullptr));
        mdp_employe->setPlaceholderText(QCoreApplication::translate("MainWindow", "Cr\303\251er le mot de passe", nullptr));
        mdp_2_employe->setPlaceholderText(QCoreApplication::translate("MainWindow", "Confirmer le mot de passe", nullptr));
        sexe_employe->setItemText(0, QCoreApplication::translate("MainWindow", "Entrez le sexe", nullptr));
        sexe_employe->setItemText(1, QCoreApplication::translate("MainWindow", "Homme", nullptr));
        sexe_employe->setItemText(2, QCoreApplication::translate("MainWindow", "Femme", nullptr));
        sexe_employe->setItemText(3, QCoreApplication::translate("MainWindow", "Autre", nullptr));

        salaire_employe->setPlaceholderText(QCoreApplication::translate("MainWindow", "Veuillez saisir le salaire", nullptr));
        poste_employe->setItemText(0, QCoreApplication::translate("MainWindow", "Entrez le poste", nullptr));
        poste_employe->setItemText(1, QCoreApplication::translate("MainWindow", "Ressources Humaines", nullptr));
        poste_employe->setItemText(2, QCoreApplication::translate("MainWindow", "Chef des matches", nullptr));
        poste_employe->setItemText(3, QCoreApplication::translate("MainWindow", "Chef des stades", nullptr));
        poste_employe->setItemText(4, QCoreApplication::translate("MainWindow", "Coach ", nullptr));

        inserer_image->setText(QCoreApplication::translate("MainWindow", "Ins\303\251rez une photo", nullptr));
        label_image->setText(QString());
        ajouter_employe->setText(QCoreApplication::translate("MainWindow", "AJOUTER", nullptr));
        modifier_employe->setText(QCoreApplication::translate("MainWindow", "MODIFIER", nullptr));
        comboBox_3->setItemText(0, QCoreApplication::translate("MainWindow", "----", nullptr));
        comboBox_3->setItemText(1, QCoreApplication::translate("MainWindow", "Nom", nullptr));
        comboBox_3->setItemText(2, QCoreApplication::translate("MainWindow", "Pr\303\251nom", nullptr));
        comboBox_3->setItemText(3, QCoreApplication::translate("MainWindow", "Poste", nullptr));

        lineEdit_3->setPlaceholderText(QCoreApplication::translate("MainWindow", "Recherche...", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Trier", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Exportation PDF", nullptr));
        comboBox_4->setItemText(0, QCoreApplication::translate("MainWindow", "ascendant", nullptr));
        comboBox_4->setItemText(1, QCoreApplication::translate("MainWindow", "descendant", nullptr));

        retour_menu->setText(QCoreApplication::translate("MainWindow", "Retour", nullptr));
        image_path_employe->setPlaceholderText(QCoreApplication::translate("MainWindow", "Veuillez saisir le salaire", nullptr));
        label_6->setText(QString());
        mdpoublie_page->setTitle(QString());
        label_3->setText(QString());
        mailoublie->setPlaceholderText(QCoreApplication::translate("MainWindow", "Entrez votre adresse mail...", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Veuillez entrer votre adresse mail et attendez quelques secondes pour re\303\247evoir un code de v\303\251rification", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "Confirmer", nullptr));
        retour_login->setText(QCoreApplication::translate("MainWindow", "Retour \303\240 la page d'acceuil", nullptr));
        label_11->setText(QString());
        menu_page->setTitle(QString());
        label_8->setText(QString());
        label_9->setText(QCoreApplication::translate("MainWindow", "CHOISISSEZ VOTRE ACTION", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "Gestion des joueurs", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "Gestion des matches", nullptr));
        aller_gestion_employe->setText(QCoreApplication::translate("MainWindow", "Gestion des employ\303\251s", nullptr));
        pushButton_10->setText(QCoreApplication::translate("MainWindow", "Gestion des stades", nullptr));
        pushButton_11->setText(QCoreApplication::translate("MainWindow", "Gestion des performances", nullptr));
        label_10->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
