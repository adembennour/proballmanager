#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QDate>
#include <QIntValidator>
#include <QRegularExpressionValidator>
#include <QRegularExpression>

#include <QFileDialog>
#include <QPixmap>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->signup_page->hide();
    ui->login_page->show();
    ui->mdpoublie_page->hide();
    ui->menu_page->hide();

    ui->tableView_employe->setModel(e.afficher());

    //resize tableview
    ui->tableView_employe->resizeColumnsToContents();

    int tableWidth = ui->tableView_employe->viewport()->width();

    int columnCount = ui->tableView_employe->model()->columnCount();

    int columnWidth = tableWidth / columnCount;

    for (int i = 0; i < columnCount; ++i) {
        ui->tableView_employe->setColumnWidth(i, columnWidth);
    }
    ui->image_path_employe->hide();

    ui->date_employe->setDate(QDate::currentDate());

    ui->mdp_employe->setEchoMode(QLineEdit::Password);
    ui->mdp_2_employe->setEchoMode(QLineEdit::Password);


    QIntValidator *validatorSalaire = new QIntValidator(0, 99999, this);
    ui->salaire_employe->setValidator(validatorSalaire);

    QRegularExpression nameRegex("^[A-Za-z]+$");
    QRegularExpressionValidator *validatorName = new QRegularExpressionValidator(nameRegex, this);

    ui->nom_employe->setValidator(validatorName);
    ui->prenom_employe->setValidator(validatorName);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_login_button_clicked()
{
    ui->mdpoublie_page->hide();
    ui->signup_page->hide();
    ui->login_page->hide();
    ui->menu_page->show();

}








void MainWindow::on_mdpoubli_clicked()
{
    ui->mdpoublie_page->show();
    ui->signup_page->hide();
    ui->login_page->hide();
    ui->menu_page->hide();

}




void MainWindow::on_retour_menu_clicked()
{
    ui->mdpoublie_page->hide();
    ui->signup_page->hide();
    ui->login_page->hide();
    ui->menu_page->show();
}


void MainWindow::on_retour_login_clicked()
{
    ui->mdpoublie_page->hide();
    ui->signup_page->hide();
    ui->login_page->show();
    ui->menu_page->hide();
}


void MainWindow::on_aller_gestion_employe_clicked()
{
    ui->mdpoublie_page->hide();
    ui->signup_page->show();
    ui->login_page->hide();
    ui->menu_page->hide();
}




void MainWindow::on_ajouter_employe_clicked()
{
    QString prenom=ui->prenom_employe->text();
    QString nom=ui->nom_employe->text();
    QString mail=ui->mail_employe->text();
    int salaire =ui->salaire_employe->text().toInt();
    QString mdp1=ui->mdp_employe->text();
    QString mdp2=ui->mdp_2_employe->text();
    QString path=ui->image_path_employe->text();
    QDate date_embauche=ui->date_employe->date();
    QString sexe=ui->sexe_employe->currentText();
    QString poste=ui->poste_employe->currentText();


    if(mdp1 != mdp2)
    {
        QMessageBox::warning(nullptr, QObject::tr("Erreur"),
                                 QObject::tr("Les mots de passes ne sont pas identiques"), QMessageBox::Cancel);
        return;
    }
    if(prenom=="" || nom =="" || mail==""  || mdp1==""||mdp2=="" ||path=="")
    {
        QMessageBox::warning(nullptr, QObject::tr("Erreur"),
                                 QObject::tr("Tu dois remplir tous les champs"), QMessageBox::Cancel);
        return;
    }

    if(sexe=="Entrez le sexe")
    {
        QMessageBox::warning(nullptr, QObject::tr("Erreur"),
                             QObject::tr("Tu dois choisir le sexe"), QMessageBox::Cancel);
        return;
    }
    if(poste=="Entrez le poste")
    {
        QMessageBox::warning(nullptr, QObject::tr("Erreur"),
                             QObject::tr("Tu dois choisir le poste"), QMessageBox::Cancel);
        return;
    }


    QRegularExpression emailRegex("^[\\w-]+@[\\w-]+\\.[a-zA-Z]{2,}$");
    QRegularExpressionMatch match = emailRegex.match(mail);

    if (!match.hasMatch()) {
        QMessageBox::warning(nullptr, QObject::tr("Erreur"),
                                 QObject::tr("Email est invalid!"), QMessageBox::Cancel);
        return;
    }

    employe e(prenom,nom,date_embauche,sexe,salaire,poste,mail,mdp1,path);

    bool test=e.ajouter();
    if(test)
    {
        QMessageBox::information(nullptr, QObject::tr("Succes"),
                                 QObject::tr("Ajout avec succés"), QMessageBox::Cancel);
        ui->tableView_employe->setModel(e.afficher());
        ui->prenom_employe->setText("");
        ui->nom_employe->setText("");
        ui->mail_employe->setText("");
        ui->salaire_employe->setText("");
        ui->mdp_2_employe->setText("");
        ui->mdp_employe->setText("");
        ui->image_path_employe->setText("");
        ui->poste_employe->setCurrentIndex(0);
        ui->sexe_employe->setCurrentIndex(0);
    }
    else
    {
        QMessageBox::warning(nullptr, QObject::tr("Erreur"),
                                 QObject::tr("Echec d'ajout "), QMessageBox::Cancel);
    }

}




void MainWindow::on_inserer_image_clicked()
{
    QString imagePath = QFileDialog::getOpenFileName(this, "Select Image", "", "Images (*.png *.jpg *.bmp *.gif)");

    if (!imagePath.isEmpty()) {
        QPixmap image(imagePath);

        if (!image.isNull()) {
            ui->label_image->setPixmap(image.scaled(ui->label_image->size(), Qt::KeepAspectRatio));

            ui->image_path_employe->setText(imagePath);


        } else {
            QMessageBox::warning(this, "Error", "Failed to load the image.");
        }
    }
}



void MainWindow::on_modifier_employe_clicked()
{
    QString prenom=ui->prenom_employe->text();
    QString nom=ui->nom_employe->text();
    QString mail=ui->mail_employe->text();
    int salaire =ui->salaire_employe->text().toInt();
    QString mdp1=ui->mdp_employe->text();
    QString mdp2=ui->mdp_2_employe->text();
    QString path=ui->image_path_employe->text();
    QDate date_embauche=ui->date_employe->date();
    QString sexe=ui->sexe_employe->currentText();
    QString poste=ui->poste_employe->currentText();


    if(mdp1 != mdp2)
    {
        QMessageBox::warning(nullptr, QObject::tr("Erreur"),
                             QObject::tr("Les mots de passes ne sont pas identiques"), QMessageBox::Cancel);
        return;
    }
    if(prenom=="" || nom =="" || mail==""  || mdp1==""||mdp2=="" ||path=="")
    {
        QMessageBox::warning(nullptr, QObject::tr("Erreur"),
                             QObject::tr("Tu dois remplir tous les champs"), QMessageBox::Cancel);
        return;
    }

    if(sexe=="Entrez le sexe")
    {
        QMessageBox::warning(nullptr, QObject::tr("Erreur"),
                             QObject::tr("Tu dois choisir le sexe"), QMessageBox::Cancel);
        return;
    }
    if(poste=="Entrez le poste")
    {
        QMessageBox::warning(nullptr, QObject::tr("Erreur"),
                             QObject::tr("Tu dois choisir le poste"), QMessageBox::Cancel);
        return;
    }


    QRegularExpression emailRegex("^[\\w-]+@[\\w-]+\\.[a-zA-Z]{2,}$");
    QRegularExpressionMatch match = emailRegex.match(mail);

    if (!match.hasMatch()) {
        QMessageBox::warning(nullptr, QObject::tr("Erreur"),
                             QObject::tr("Email est invalid!"), QMessageBox::Cancel);
        return;
    }

    employe e(ID_EMPLOYE,prenom,nom,date_embauche,sexe,salaire,poste,mail,mdp1,path);

    bool test=e.modifier();
    if(test)
    {
        QMessageBox::information(nullptr, QObject::tr("Succes"),
                                 QObject::tr("Modification avec succés"), QMessageBox::Cancel);
        ui->tableView_employe->setModel(e.afficher());
        ui->prenom_employe->setText("");
        ui->nom_employe->setText("");
        ui->mail_employe->setText("");
        ui->salaire_employe->setText("");
        ui->mdp_2_employe->setText("");
        ui->mdp_employe->setText("");
        ui->image_path_employe->setText("");
        ui->poste_employe->setCurrentIndex(0);
        ui->sexe_employe->setCurrentIndex(0);
    }
    else
    {
        QMessageBox::warning(nullptr, QObject::tr("Erreur"),
                             QObject::tr("Echec de modification "), QMessageBox::Cancel);
    }


}


void MainWindow::on_tableView_employe_clicked(const QModelIndex &index)
{
    QAbstractItemModel* model = ui->tableView_employe->model();
    int row = index.row();
    QString nom_employe = model->data(model->index(row, 0)).toString();
    QString prenom_employe = model->data(model->index(row, 1)).toString();
    QString mail_employe = model->data(model->index(row, 6)).toString();
    QString poste_employe = model->data(model->index(row, 5)).toString();
    QDate date_employe = model->data(model->index(row, 2)).toDate();
    QString sexe_employe = model->data(model->index(row, 3)).toString();
    QString salaire_employe = model->data(model->index(row, 4)).toString();

    ui->prenom_employe->setText(prenom_employe);
    ui->nom_employe->setText(nom_employe);
    ui->mail_employe->setText(mail_employe);
    ui->salaire_employe->setText(salaire_employe);
    ui->mdp_2_employe->setText("");
    ui->mdp_employe->setText("");
    ui->image_path_employe->setText("");
    ui->poste_employe->setCurrentText(poste_employe);
    ui->sexe_employe->setCurrentText(sexe_employe);
    ui->date_employe->setDate(date_employe);

    ID_EMPLOYE=e.chercher_IDbyEmail(mail_employe);

}

