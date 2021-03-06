#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QObject>
#include "ccomxbee.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(cComXbee *comXbee, QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_journalisation(const QString &message);

    void on_pb_numero_plus_1_released();

    void on_pb_numero_moins_1_released();

    void on_pb_masse_plus_10_released();

    void on_pb_masse_plus_1_released();

    void on_pb_masse_plus_01_released();

    void on_pb_masse_moins_01_released();

    void on_pb_masse_moins_1_released();

    void on_pb_masse_moins_10_released();

    void on_pb_batterie_plus_10_released();

    void on_pb_batterie_plus_1_released();

    void on_pb_batterie_moins_1_released();

    void on_pb_batterie_moins_10_released();

    void on_pb_int_temp_plus_10_released();

    void on_pb_int_temp_plus_1_released();

    void on_pb_int_temp_plus_01_released();

    void on_pb_int_temp_moins_01_released();

    void on_pb_int_temp_moins_1_released();

    void on_pb_int_temp_moins_10_released();

    void on_pb_ext_temp_plus_10_released();

    void on_pb_ext_temp_plus_1_released();

    void on_pb_ext_temp_plus_01_released();

    void on_pb_ext_temp_moins_01_released();

    void on_pb_ext_temp_moins_1_released();

    void on_pb_ext_temp_moins_10_released();

    void on_pb_humidite_plus_10_released();

    void on_pb_humidite_plus_1_released();

    void on_pb_humidite_moins_1_released();

    void on_pb_humidite_moins_10_released();

    void on_pb_pression_plus_100_released();

    void on_pb_pression_plus_10_released();

    void on_pb_pression_plus_1_released();

    void on_pb_pression_moins_1_released();

    void on_pb_pression_moins_10_released();

    void on_pb_pression_moins_100_released();

    void on_sb_numero_valueChanged(int arg1);

    void on_sb_masse_valueChanged(double arg1);

    void on_sb_batterie_valueChanged(int arg1);

    void on_sb_interieur_temperature_valueChanged(double arg1);

    void on_sb_exterieur_temperature_valueChanged(double arg1);

    void on_sb_humidite_valueChanged(int arg1);

    void on_sb_pression_valueChanged(int arg1);

    void on_cb_defectueux_masse_clicked(bool checked);

    void on_cb_defectueux_batterie_clicked(bool checked);

    void on_cb_defectueux_temperature_interieur_clicked(bool checked);

    void on_cb_defectueux_humidite_clicked(bool checked);

    void on_cb_defectueux_pression_clicked(bool checked);

    void on_cb_defectueux_temperature_exterieur_clicked(bool checked);

    void on_rb_v_released();

    void on_rb_vv_released();

    void on_rb_vvv_released();

private:
    Ui::MainWindow *ui;
    cComXbee *comXbee;
};

#endif // MAINWINDOW_H
