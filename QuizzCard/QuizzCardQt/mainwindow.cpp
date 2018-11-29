#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QInputDialog"
#include "QMessageBox"
#include "QListWidgetItem"
#include "QStringList"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent), gestionnaire(),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

//creer paquet
void MainWindow::on_pushButton_3_clicked()
{
    if(gestionnaire.getCurrentClient()!=NULL){
        QString nom_paquet = QInputDialog::getText(this, "Nouveau paquet", "Nom ?");
        gestionnaire.addPaquet(nom_paquet.toStdString());
        update();
    }else{
        QMessageBox::warning(this, "Attention", "Vous devez vous connecter avant d'utiliser cette fonctionnalité");
    }

}

void MainWindow::update(){
    if(gestionnaire.getCurrentClient()!=NULL){
        QStringList *list_paquet = new QStringList();
        for(unsigned int i=0; i<gestionnaire.getCurrentClient()->getPaquets().size()-1; i++){
            list_paquet->push_front(QString::fromStdString(gestionnaire.getCurrentClient()->getPaquets()[i]->getNom()));
        }
        ui->liste_Paquets->addItems(*list_paquet);
    }
}

//reviser un paquet
void MainWindow::on_pushButton_clicked()
{

}

//connexion
void MainWindow::on_pushButton_6_clicked()
{
    QString pseudo = QInputDialog::getText(this, "Connexion", "Pseudo :");
    gestionnaire.authentifier(pseudo.toStdString());
}

//ajouter une carte
void MainWindow::on_pushButton_4_clicked()
{

}

//supprimer un paquet
void MainWindow::on_pushButton_2_clicked()
{

}
