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
    QStringList *list_paquet = new QStringList();
        for(unsigned int i=0; i<gestionnaire.getCurrentClient()->getPaquets().size(); i++){
            list_paquet->push_back(QString::fromStdString(gestionnaire.getCurrentClient()->getPaquets()[i]->getNom()));
        }
    if(gestionnaire.getCurrentClient()!=nullptr){
        QString nom_paquet = QInputDialog::getText(this, "Nouveau paquet", "Nom ?");
if(list_paquet->contains(nom_paquet)){
                    QMessageBox::warning(this, "Attention", "Ce paquet existe déjà");
        }
        else{
    gestionnaire.addPaquet(nom_paquet.toStdString());
    update();

        }
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
    if(gestionnaire.getCurrentClient()!=nullptr){
        //QString nom_paquet = ui->liste_Paquets->selectedItems().at(0)->text();
        QStringList *list_paquet = new QStringList();
            for(unsigned int i=0; i<gestionnaire.getCurrentClient()->getPaquets().size(); i++){
                list_paquet->push_back(QString::fromStdString(gestionnaire.getCurrentClient()->getPaquets()[i]->getNom()));
            }
        QStringList  paquets = *list_paquet;
        bool ok;
        QString item = QInputDialog::getItem(this, tr("Selection du paquet"),tr("Paquet"), paquets, 0, false, &ok);
        QString front = QInputDialog::getText(this, "Face avant de la carte", "Face avant de la carte ?");
        QString back = QInputDialog::getText(this, "Face arrière de la carte", "Face arrière de la carte?");
        gestionnaire.addCarte(item.toStdString(),front.toStdString(),back.toStdString());
    }else{
        QMessageBox::warning(this, "Attention", "Vous devez vous connecter avant d'utiliser cette fonctionnalité");
    }
}

void MainWindow::on_liste_Paquets_itemDoubleClicked(QListWidgetItem *item)
{
    int reponse = QMessageBox::question(this, "Supprimer Paquet", "Voulez-vous vraiment supprimer le paquet "+item->text()+" ?", QMessageBox ::Yes | QMessageBox::No);
    if (reponse == QMessageBox::Yes){
        if( item->text()!="default"){
            delete item;
        }
        else{
            QMessageBox::warning(this, "Attention", "On ne peut pas supprimer le paquet default");
        }
    }
}
