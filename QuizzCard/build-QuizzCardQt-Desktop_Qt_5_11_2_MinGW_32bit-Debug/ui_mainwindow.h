/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionQuitter;
    QAction *actionImporter;
    QAction *actionExporter;
    QAction *actionAjouter_un_paquet;
    QAction *actionAjouter_une_carte;
    QAction *actionSupprimession_paquet;
    QAction *actionSuppression_carte;
    QAction *actionS_enregistrer;
    QAction *actionQuitter_2;
    QAction *actionAffichage_statistiques;
    QWidget *centralWidget;
    QLabel *label;
    QListWidget *liste_Paquets;
    QLabel *label_2;
    QPushButton *reviser;
    QPushButton *supprPaquet;
    QPushButton *ajoutPaquet;
    QPushButton *ajoutCarte;
    QPushButton *supprCarte;
    QPushButton *connexion;
    QPushButton *import_2;
    QPushButton *export_2;
    QMenuBar *menuBar;
    QMenu *menuFichier;
    QMenu *menuEdition;
    QMenu *menuAjouts;
    QMenu *menuSuppression;
    QMenu *menuAffichage;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(598, 474);
        actionQuitter = new QAction(MainWindow);
        actionQuitter->setObjectName(QStringLiteral("actionQuitter"));
        actionImporter = new QAction(MainWindow);
        actionImporter->setObjectName(QStringLiteral("actionImporter"));
        actionExporter = new QAction(MainWindow);
        actionExporter->setObjectName(QStringLiteral("actionExporter"));
        actionAjouter_un_paquet = new QAction(MainWindow);
        actionAjouter_un_paquet->setObjectName(QStringLiteral("actionAjouter_un_paquet"));
        actionAjouter_une_carte = new QAction(MainWindow);
        actionAjouter_une_carte->setObjectName(QStringLiteral("actionAjouter_une_carte"));
        actionSupprimession_paquet = new QAction(MainWindow);
        actionSupprimession_paquet->setObjectName(QStringLiteral("actionSupprimession_paquet"));
        actionSuppression_carte = new QAction(MainWindow);
        actionSuppression_carte->setObjectName(QStringLiteral("actionSuppression_carte"));
        actionS_enregistrer = new QAction(MainWindow);
        actionS_enregistrer->setObjectName(QStringLiteral("actionS_enregistrer"));
        actionQuitter_2 = new QAction(MainWindow);
        actionQuitter_2->setObjectName(QStringLiteral("actionQuitter_2"));
        actionAffichage_statistiques = new QAction(MainWindow);
        actionAffichage_statistiques->setObjectName(QStringLiteral("actionAffichage_statistiques"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 10, 531, 51));
        QFont font;
        font.setPointSize(18);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        liste_Paquets = new QListWidget(centralWidget);
        liste_Paquets->setObjectName(QStringLiteral("liste_Paquets"));
        liste_Paquets->setGeometry(QRect(30, 90, 281, 291));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 60, 151, 17));
        reviser = new QPushButton(centralWidget);
        reviser->setObjectName(QStringLiteral("reviser"));
        reviser->setGeometry(QRect(330, 90, 141, 27));
        supprPaquet = new QPushButton(centralWidget);
        supprPaquet->setObjectName(QStringLiteral("supprPaquet"));
        supprPaquet->setGeometry(QRect(330, 240, 161, 27));
        ajoutPaquet = new QPushButton(centralWidget);
        ajoutPaquet->setObjectName(QStringLiteral("ajoutPaquet"));
        ajoutPaquet->setGeometry(QRect(330, 150, 161, 27));
        ajoutCarte = new QPushButton(centralWidget);
        ajoutCarte->setObjectName(QStringLiteral("ajoutCarte"));
        ajoutCarte->setGeometry(QRect(330, 180, 161, 27));
        supprCarte = new QPushButton(centralWidget);
        supprCarte->setObjectName(QStringLiteral("supprCarte"));
        supprCarte->setGeometry(QRect(330, 270, 161, 27));
        connexion = new QPushButton(centralWidget);
        connexion->setObjectName(QStringLiteral("connexion"));
        connexion->setGeometry(QRect(510, 0, 81, 27));
        import_2 = new QPushButton(centralWidget);
        import_2->setObjectName(QStringLiteral("import_2"));
        import_2->setGeometry(QRect(330, 320, 161, 27));
        export_2 = new QPushButton(centralWidget);
        export_2->setObjectName(QStringLiteral("export_2"));
        export_2->setGeometry(QRect(330, 350, 161, 27));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 598, 21));
        menuFichier = new QMenu(menuBar);
        menuFichier->setObjectName(QStringLiteral("menuFichier"));
        menuEdition = new QMenu(menuBar);
        menuEdition->setObjectName(QStringLiteral("menuEdition"));
        menuAjouts = new QMenu(menuBar);
        menuAjouts->setObjectName(QStringLiteral("menuAjouts"));
        menuSuppression = new QMenu(menuBar);
        menuSuppression->setObjectName(QStringLiteral("menuSuppression"));
        menuAffichage = new QMenu(menuBar);
        menuAffichage->setObjectName(QStringLiteral("menuAffichage"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFichier->menuAction());
        menuBar->addAction(menuEdition->menuAction());
        menuBar->addAction(menuAffichage->menuAction());
        menuBar->addAction(menuAjouts->menuAction());
        menuBar->addAction(menuSuppression->menuAction());
        menuFichier->addAction(actionS_enregistrer);
        menuFichier->addAction(actionQuitter_2);
        menuEdition->addAction(actionImporter);
        menuEdition->addAction(actionExporter);
        menuAjouts->addAction(actionAjouter_un_paquet);
        menuAjouts->addAction(actionAjouter_une_carte);
        menuSuppression->addAction(actionSupprimession_paquet);
        menuSuppression->addAction(actionSuppression_carte);
        menuAffichage->addAction(actionAffichage_statistiques);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        actionQuitter->setText(QApplication::translate("MainWindow", "Quitter", nullptr));
        actionImporter->setText(QApplication::translate("MainWindow", "Importer", nullptr));
        actionExporter->setText(QApplication::translate("MainWindow", "Exporter", nullptr));
        actionAjouter_un_paquet->setText(QApplication::translate("MainWindow", "Ajouter un paquet", nullptr));
        actionAjouter_une_carte->setText(QApplication::translate("MainWindow", "Ajouter une carte", nullptr));
        actionSupprimession_paquet->setText(QApplication::translate("MainWindow", "Supprimession paquet", nullptr));
        actionSuppression_carte->setText(QApplication::translate("MainWindow", "Suppression carte", nullptr));
        actionS_enregistrer->setText(QApplication::translate("MainWindow", "Se connecter", nullptr));
        actionQuitter_2->setText(QApplication::translate("MainWindow", "Quitter", nullptr));
        actionAffichage_statistiques->setText(QApplication::translate("MainWindow", "Affichage statistiques", nullptr));
        label->setText(QApplication::translate("MainWindow", "QuizzCard : L'application de r\303\251vision de cartes", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Liste de mes paquets", nullptr));
        reviser->setText(QApplication::translate("MainWindow", "R\303\251viser un paquet", nullptr));
        supprPaquet->setText(QApplication::translate("MainWindow", "Supprimer un paquet", nullptr));
        ajoutPaquet->setText(QApplication::translate("MainWindow", "Ajouter un paquet", nullptr));
        ajoutCarte->setText(QApplication::translate("MainWindow", "Ajouter une carte", nullptr));
        supprCarte->setText(QApplication::translate("MainWindow", "Supprimer une carte", nullptr));
        connexion->setText(QApplication::translate("MainWindow", "Connexion", nullptr));
        import_2->setText(QApplication::translate("MainWindow", "Importer Paquet", nullptr));
        export_2->setText(QApplication::translate("MainWindow", "Exporter Paquet", nullptr));
        menuFichier->setTitle(QApplication::translate("MainWindow", "Fichier", nullptr));
        menuEdition->setTitle(QApplication::translate("MainWindow", "Edition", nullptr));
        menuAjouts->setTitle(QApplication::translate("MainWindow", "Cr\303\251ation", nullptr));
        menuSuppression->setTitle(QApplication::translate("MainWindow", "Suppression", nullptr));
        menuAffichage->setTitle(QApplication::translate("MainWindow", "Affichage", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
