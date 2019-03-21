#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pb_numero_plus_1_released();

    void on_pb_numero_moins_1_released();

    void on_pb_poids_plus_10_released();

    void on_pb_poids_plus_1_released();

    void on_pb_poids_plus_01_released();

    void on_pb_poids_moins_01_released();

    void on_pb_poids_moins_1_released();

    void on_pb_poids_moins_10_released();

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

    void on_pb_pressio_plus_10_released();

    void on_pb_pression_plus_1_released();

    void on_pb_pression_moins_1_released();

    void on_pb_pression_moins_10_released();

    void on_pb_pression_moins_100_released();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
