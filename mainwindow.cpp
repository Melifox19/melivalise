#include "mainwindow.h"
#include "ui_mainwindow.h"

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

void MainWindow::on_pb_pressio_plus_10_released()
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
