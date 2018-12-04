#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QInputDialog"
#include "QMessageBox"
#include "QListWidgetItem"
#include "QStringList"
#include "QAction"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent), gestionnaire(),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->actionQuitter, SIGNAL(triggered(bool)), qApp, SLOT(quit()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

//creer paquet
void MainWindow::on_ajoutPaquet_clicked()
{
    if(gestionnaire.getCurrentClient()!=nullptr){
        QString nom_paquet = QInputDialog::getText(this, "Nouveau paquet", "Nom ?");
        gestionnaire.addPaquet(nom_paquet.toStdString());
        update();
    }else{
        QMessageBox::warning(this, "Attention", "Vous devez vous connecter avant d'utiliser cette fonctionnalité");
    }

}

void MainWindow::update(){
    if(gestionnaire.getCurrentClient()!=nullptr){
        QStringList *list_paquet = new QStringList();
        for(unsigned int i=0; i<gestionnaire.getCurrentClient()->getPaquets().size(); i++){
            list_paquet->push_back(QString::fromStdString(gestionnaire.getCurrentClient()->getPaquets()[i]->getNom()));
        }
        ui->liste_Paquets->clear();
        ui->liste_Paquets->addItems(*list_paquet);
    }
}

//reviser un paquet
void MainWindow::on_reviser_clicked()
{

}

//connexion
void MainWindow::on_connexion_clicked()
{
    QString pseudo = QInputDialog::getText(this, "Connexion", "Pseudo :");
    gestionnaire.authentifier(pseudo.toStdString());
    update();
    ui->label_4->setText(pseudo);
}

//ajouter une carte
void MainWindow::on_ajoutCarte_clicked()
{

}

//supprimer un paquet
void MainWindow::on_supprPaquet_clicked()
{

}
