#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "employe.h"

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_login_button_clicked();



    void on_mdpoubli_clicked();


    void on_retour_menu_clicked();

    void on_retour_login_clicked();

    void on_aller_gestion_employe_clicked();


    void on_ajouter_employe_clicked();

    void on_inserer_image_clicked();

    void on_modifier_employe_clicked();

    void on_tableView_employe_clicked(const QModelIndex &index);

private:
    Ui::MainWindow *ui;
    employe e;
    int ID_EMPLOYE;
};
#endif // MAINWINDOW_H
