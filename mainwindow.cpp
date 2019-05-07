#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "globalobjects.h"
#include <QDateTime>

MainWindow::MainWindow(cComXbee *comXbee, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Affectation des valeurs par celles du tunnel
    ui->sb_numero->setValue(tunnel->getNumero());
    ui->sb_masse->setValue(tunnel->getMasse());
    ui->sb_batterie->setValue(tunnel->getBatterie());
    ui->sb_interieur_temperature->setValue(tunnel->getInterieurTemperature());
    ui->sb_exterieur_temperature->setValue(tunnel->getExterieurTemperature());
    ui->sb_humidite->setValue(tunnel->getHumidite());
    ui->sb_pression->setValue(tunnel->getPression());

    // CSS pour l'interface graphique
    ui->gb_general           ->setStyleSheet("QGroupBox {background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,stop: 0 #FFFFFF stop: 1 #FFFFFF);border: 2px solid gray;border-radius: 5px;margin-top: 1ex; /* leave space at the top for the title */}");
    ui->gb_autre             ->setStyleSheet("QGroupBox {background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,stop: 0 #FFFFFF stop: 1 #FFFFFF);border: 2px solid gray;border-radius: 5px;margin-top: 1ex; /* leave space at the top for the title */}");
    ui->gb_temperature       ->setStyleSheet("QGroupBox {background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,stop: 0 #FFFFFF stop: 1 #FFFFFF);border: 2px solid gray;border-radius: 5px;margin-top: 1ex; /* leave space at the top for the title */}");
    ui->gb_capeurs_defectueux->setStyleSheet("QGroupBox {background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,stop: 0 #FFFFFF stop: 1 #FFFFFF);border: 2px solid gray;border-radius: 5px;margin-top: 1ex; /* leave space at the top for the title */}");

    // Slot pour la journalisation
    connect(comXbee,SIGNAL(sig_journalisation(const QString &)),this, SLOT(on_journalisation(const QString &)));

    // Mise en place du niveau de verbosité
    // Explication rapide des niveaux de verbosité : 1=faible, 2=modéré, 3=élevé
    tunnel->setVerbosite("1");
    ui->rb_v->setChecked(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_journalisation(const QString &message)
{
    QDateTime horrodatage = QDateTime::currentDateTime();
    QString messageHorrodate = horrodatage.toString("[hh:mm:ss.zzz] ") + message;
    ui->list_journaux->insertItem(0, messageHorrodate);
}

/*---------------------------------------------------------------------------*/
// Méthodes pour changer les valeurs à l'appui des boutons
void MainWindow::on_pb_numero_plus_1_released()
{
    ui->sb_numero->setValue(ui->sb_numero->value() + 1);
}

void MainWindow::on_pb_numero_moins_1_released()
{
   ui->sb_numero->setValue(ui->sb_numero->value() - 1);
}

void MainWindow::on_pb_masse_plus_10_released()
{
   ui->sb_masse->setValue(ui->sb_masse->value() + 10);
}

void MainWindow::on_pb_masse_plus_1_released()
{
   ui->sb_masse->setValue(ui->sb_masse->value() + 1);
}

void MainWindow::on_pb_masse_plus_01_released()
{
   ui->sb_masse->setValue(ui->sb_masse->value() + 0.1);
}

void MainWindow::on_pb_masse_moins_01_released()
{
   ui->sb_masse->setValue(ui->sb_masse->value() - 0.1);
}

void MainWindow::on_pb_masse_moins_1_released()
{
   ui->sb_masse->setValue(ui->sb_masse->value() - 1);
}

void MainWindow::on_pb_masse_moins_10_released()
{
   ui->sb_masse->setValue(ui->sb_masse->value() - 10);
}

void MainWindow::on_pb_batterie_plus_10_released()
{
   ui->sb_batterie->setValue(ui->sb_batterie->value() + 10);
}

void MainWindow::on_pb_batterie_plus_1_released()
{
   ui->sb_batterie->setValue(ui->sb_batterie->value() + 1);
}

void MainWindow::on_pb_batterie_moins_1_released()
{
   ui->sb_batterie->setValue(ui->sb_batterie->value() - 1);
}

void MainWindow::on_pb_batterie_moins_10_released()
{
   ui->sb_batterie->setValue(ui->sb_batterie->value() - 10);
}

void MainWindow::on_pb_int_temp_plus_10_released()
{
   ui->sb_interieur_temperature->setValue(ui->sb_interieur_temperature->value() + 10);
}

void MainWindow::on_pb_int_temp_plus_1_released()
{
   ui->sb_interieur_temperature->setValue(ui->sb_interieur_temperature->value() + 1);
}

void MainWindow::on_pb_int_temp_plus_01_released()
{
   ui->sb_interieur_temperature->setValue(ui->sb_interieur_temperature->value() + 0.1);
}

void MainWindow::on_pb_int_temp_moins_01_released()
{
   ui->sb_interieur_temperature->setValue(ui->sb_interieur_temperature->value() - 0.1);
}

void MainWindow::on_pb_int_temp_moins_1_released()
{
   ui->sb_interieur_temperature->setValue(ui->sb_interieur_temperature->value() - 1);
}

void MainWindow::on_pb_int_temp_moins_10_released()
{
   ui->sb_interieur_temperature->setValue(ui->sb_interieur_temperature->value() - 10);
}

void MainWindow::on_pb_ext_temp_plus_10_released()
{
   ui->sb_exterieur_temperature->setValue(ui->sb_exterieur_temperature->value() + 10);
}

void MainWindow::on_pb_ext_temp_plus_1_released()
{
   ui->sb_exterieur_temperature->setValue(ui->sb_exterieur_temperature->value() + 1);
}

void MainWindow::on_pb_ext_temp_plus_01_released()
{
   ui->sb_exterieur_temperature->setValue(ui->sb_exterieur_temperature->value() + 0.1);
}

void MainWindow::on_pb_ext_temp_moins_01_released()
{
   ui->sb_exterieur_temperature->setValue(ui->sb_exterieur_temperature->value() - 0.1);
}

void MainWindow::on_pb_ext_temp_moins_1_released()
{
   ui->sb_exterieur_temperature->setValue(ui->sb_exterieur_temperature->value() - 1);
}

void MainWindow::on_pb_ext_temp_moins_10_released()
{
   ui->sb_exterieur_temperature->setValue(ui->sb_exterieur_temperature->value() - 10);
}

void MainWindow::on_pb_humidite_plus_10_released()
{
   ui->sb_humidite->setValue(ui->sb_humidite->value() + 10);
}

void MainWindow::on_pb_humidite_plus_1_released()
{
   ui->sb_humidite->setValue(ui->sb_humidite->value() + 1);
}

void MainWindow::on_pb_humidite_moins_1_released()
{
   ui->sb_humidite->setValue(ui->sb_humidite->value() - 1);
}

void MainWindow::on_pb_humidite_moins_10_released()
{
   ui->sb_humidite->setValue(ui->sb_humidite->value() - 10);
}

void MainWindow::on_pb_pression_plus_100_released()
{
    ui->sb_pression->setValue(ui->sb_pression->value() + 100);
}

void MainWindow::on_pb_pression_plus_10_released()
{
    ui->sb_pression->setValue(ui->sb_pression->value() + 10);
}

void MainWindow::on_pb_pression_plus_1_released()
{
    ui->sb_pression->setValue(ui->sb_pression->value() + 1);
}

void MainWindow::on_pb_pression_moins_1_released()
{
    ui->sb_pression->setValue(ui->sb_pression->value() - 1);
}

void MainWindow::on_pb_pression_moins_10_released()
{
    ui->sb_pression->setValue(ui->sb_pression->value() - 10);
}

void MainWindow::on_pb_pression_moins_100_released()
{
    ui->sb_pression->setValue(ui->sb_pression->value() - 100);
}

/*---------------------------------------------------------------------------*/
// Mettre à jour le tunnel lorsque les valeurs changent
void MainWindow::on_sb_numero_valueChanged(int arg1)
{
   tunnel->setNumero(arg1);
}

void MainWindow::on_sb_masse_valueChanged(double arg1)
{
    tunnel->setMasse(arg1);
}

void MainWindow::on_sb_batterie_valueChanged(int arg1)
{
    tunnel->setBatterie(arg1);
}

void MainWindow::on_sb_interieur_temperature_valueChanged(double arg1)
{
   tunnel->setInterieurTemperature(arg1);
}

void MainWindow::on_sb_exterieur_temperature_valueChanged(double arg1)
{
    tunnel->setExterieurTemperature(arg1);
}

void MainWindow::on_sb_humidite_valueChanged(int arg1)
{
    tunnel->setHumidite(arg1);
}

void MainWindow::on_sb_pression_valueChanged(int arg1)
{
    tunnel->setPression(arg1);
}


/*---------------------------------------------------------------------------*/
// Rendre un capteur défectueux
void MainWindow::on_cb_defectueux_masse_clicked(bool checked)
{
    ui->sb_masse         ->setDisabled(checked);
    ui->pb_masse_plus_10 ->setDisabled(checked);
    ui->pb_masse_plus_1  ->setDisabled(checked);
    ui->pb_masse_plus_01 ->setDisabled(checked);
    ui->pb_masse_moins_10->setDisabled(checked);
    ui->pb_masse_moins_1 ->setDisabled(checked);
    ui->pb_masse_moins_01->setDisabled(checked);

    if (checked == true)
    {
        tunnel->setMasse(201);
    } else {
        tunnel->setMasse(ui->sb_masse->value());
    }
}

void MainWindow::on_cb_defectueux_batterie_clicked(bool checked)
{
    ui->sb_batterie         ->setDisabled(checked);
    ui->pb_batterie_plus_10 ->setDisabled(checked);
    ui->pb_batterie_plus_1  ->setDisabled(checked);
    ui->pb_batterie_moins_10->setDisabled(checked);
    ui->pb_batterie_moins_1 ->setDisabled(checked);

    if (checked == true)
    {
        tunnel->setBatterie(101);
    } else {
        tunnel->setBatterie(ui->sb_batterie->value());
    }
}

void MainWindow::on_cb_defectueux_temperature_interieur_clicked(bool checked)
{
    ui->sb_interieur_temperature->setDisabled(checked);
    ui->pb_int_temp_plus_10     ->setDisabled(checked);
    ui->pb_int_temp_plus_1      ->setDisabled(checked);
    ui->pb_int_temp_plus_01     ->setDisabled(checked);
    ui->pb_int_temp_moins_10    ->setDisabled(checked);
    ui->pb_int_temp_moins_1     ->setDisabled(checked);
    ui->pb_int_temp_moins_01    ->setDisabled(checked);

    if (checked == true)
    {
        tunnel->setInterieurTemperature(51);
    } else {
        tunnel->setInterieurTemperature(ui->sb_interieur_temperature->value());
    }
}

void MainWindow::on_cb_defectueux_humidite_clicked(bool checked)
{
    ui->sb_humidite         ->setDisabled(checked);
    ui->pb_humidite_plus_10 ->setDisabled(checked);
    ui->pb_humidite_plus_1  ->setDisabled(checked);
    ui->pb_humidite_moins_10->setDisabled(checked);
    ui->pb_humidite_moins_1 ->setDisabled(checked);

    if (checked == true)
    {
        tunnel->setHumidite(101);
    } else {
        tunnel->setHumidite(ui->sb_humidite->value());
    }
}

void MainWindow::on_cb_defectueux_pression_clicked(bool checked)
{
    ui->sb_pression          ->setDisabled(checked);
    ui->pb_pression_plus_100 ->setDisabled(checked);
    ui->pb_pression_plus_10  ->setDisabled(checked);
    ui->pb_pression_plus_1   ->setDisabled(checked);
    ui->pb_pression_moins_100->setDisabled(checked);
    ui->pb_pression_moins_10 ->setDisabled(checked);
    ui->pb_pression_moins_1  ->setDisabled(checked);

    if (checked == true)
    {
        tunnel->setPression(1111);
    } else {
        tunnel->setPression(ui->sb_pression->value());
    }
}

void MainWindow::on_cb_defectueux_temperature_exterieur_clicked(bool checked)
{
    ui->sb_exterieur_temperature->setDisabled(checked);
    ui->pb_ext_temp_plus_10     ->setDisabled(checked);
    ui->pb_ext_temp_plus_1      ->setDisabled(checked);
    ui->pb_ext_temp_plus_01     ->setDisabled(checked);
    ui->pb_ext_temp_moins_10    ->setDisabled(checked);
    ui->pb_ext_temp_moins_1     ->setDisabled(checked);
    ui->pb_ext_temp_moins_01    ->setDisabled(checked);

    if (checked == true)
    {
        tunnel->setExterieurTemperature(51);
    } else {
        tunnel->setExterieurTemperature(ui->sb_exterieur_temperature->value());
    }
}

/*---------------------------------------------------------------------------*/
// Choix de la verbosité
void MainWindow::on_rb_v_released()
{
    tunnel->setVerbosite("1");
}

void MainWindow::on_rb_vv_released()
{
    tunnel->setVerbosite("2");
}

void MainWindow::on_rb_vvv_released()
{
    tunnel->setVerbosite("3");
}
