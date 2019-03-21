#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "globalobjects.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Affichage du non support des journaux dans le GUI
    ui->pte_jounaux->appendPlainText("Pour obtenir les journaux, se référer au terminal.");
    ui->pte_jounaux->appendPlainText("Cette application ne supporte pas encore les journaux.");
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::on_pb_numero_plus_1_released()
{
    ui->sb_numero->setValue(ui->sb_numero->value() + 1);
}

void MainWindow::on_pb_numero_moins_1_released()
{
   ui->sb_numero->setValue(ui->sb_numero->value() - 1);
}

void MainWindow::on_pb_poids_plus_10_released()
{
   ui->sb_poids->setValue(ui->sb_poids->value() + 10);
}

void MainWindow::on_pb_poids_plus_1_released()
{
   ui->sb_poids->setValue(ui->sb_poids->value() + 1);
}

void MainWindow::on_pb_poids_plus_01_released()
{
   ui->sb_poids->setValue(ui->sb_poids->value() + 0.1);
}

void MainWindow::on_pb_poids_moins_01_released()
{
   ui->sb_poids->setValue(ui->sb_poids->value() - 0.1);
}

void MainWindow::on_pb_poids_moins_1_released()
{
   ui->sb_poids->setValue(ui->sb_poids->value() - 1);
}

void MainWindow::on_pb_poids_moins_10_released()
{
   ui->sb_poids->setValue(ui->sb_poids->value() - 10);
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

void MainWindow::on_pb_int_hygro_plus_10_released()
{
   ui->sb_interieur_hygrometrie->setValue(ui->sb_interieur_hygrometrie->value() + 10);
}

void MainWindow::on_pb_int_hygro_plus_1_released()
{
   ui->sb_interieur_hygrometrie->setValue(ui->sb_interieur_hygrometrie->value() +1);
}

void MainWindow::on_pb_int_hygro_01_released()
{
   ui->sb_interieur_hygrometrie->setValue(ui->sb_interieur_hygrometrie->value() + 0.1);
}

void MainWindow::on_pb_int_hygro_moins_01_released()
{
   ui->sb_interieur_hygrometrie->setValue(ui->sb_interieur_hygrometrie->value() - 0.1);
}

void MainWindow::on_pb_int_hygro_moins_1_released()
{
   ui->sb_interieur_hygrometrie->setValue(ui->sb_interieur_hygrometrie->value() - 1);
}

void MainWindow::on_pb_int_hygro_moins_10_released()
{
   ui->sb_interieur_hygrometrie->setValue(ui->sb_interieur_hygrometrie->value() - 10);
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

void MainWindow::on_lb_ext_hygro_plus_10_released()
{
   ui->sb_exterieur_hygrometrie->setValue(ui->sb_exterieur_hygrometrie->value() + 10);
}

void MainWindow::on_lb_ext_hygro_plus_1_released()
{
   ui->sb_exterieur_hygrometrie->setValue(ui->sb_exterieur_hygrometrie->value() + 1);
}

void MainWindow::on_lb_ext_hygro_plus_01_released()
{
   ui->sb_exterieur_hygrometrie->setValue(ui->sb_exterieur_hygrometrie->value() + 0.1);
}

void MainWindow::on_lb_ext_hygro_moins_01_released()
{
   ui->sb_exterieur_hygrometrie->setValue(ui->sb_exterieur_hygrometrie->value() - 0.1);
}

void MainWindow::on_lb_ext_hygro_moins_1_released()
{
   ui->sb_exterieur_hygrometrie->setValue(ui->sb_exterieur_hygrometrie->value() - 1);
}

void MainWindow::on_lb_ext_hygro_moins_10_released()
{
   ui->sb_exterieur_hygrometrie->setValue(ui->sb_exterieur_hygrometrie->value() - 10);
}

void MainWindow::on_sb_numero_valueChanged(int arg1)
{
   tunnel->setNumero(arg1);
}

void MainWindow::on_sb_poids_valueChanged(double arg1)
{
    tunnel->setPoids(arg1);
}

void MainWindow::on_sb_batterie_valueChanged(int arg1)
{
    tunnel->setBatterie(arg1);
}

void MainWindow::on_sb_interieur_temperature_valueChanged(double arg1)
{
   tunnel->setInterieurTemperature(arg1);
}

void MainWindow::on_sb_interieur_hygrometrie_valueChanged(double arg1)
{
    tunnel->setInterieurHygrometrie(arg1);
}

void MainWindow::on_sb_exterieur_temperature_valueChanged(double arg1)
{
    tunnel->setExterieurTemperature(arg1);
}

void MainWindow::on_sb_exterieur_hygrometrie_valueChanged(double arg1)
{
    tunnel->setExterieurHygrometrie(arg1);
}

void MainWindow::on_ckb_200_stateChanged(int arg1)
{
    if (arg1 == 2)
    {
        tunnel->setEssaimage200(true);
    }
    else {
        tunnel->setEssaimage200(false);
    }
}

void MainWindow::on_ckb_400_stateChanged(int arg1)
{
    if (arg1 == 2)
    {
        tunnel->setEssaimage200(true);
    }
    else {
        tunnel->setEssaimage200(false);
    }
}
