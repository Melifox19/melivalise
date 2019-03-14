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

    void on_pb_int_hygro_plus_10_released();

    void on_pb_int_hygro_plus_1_released();

    void on_pb_int_hygro_01_released();

    void on_pb_int_hygro_moins_01_released();

    void on_pb_int_hygro_moins_1_released();

    void on_pb_int_hygro_moins_10_released();

    void on_pb_ext_temp_plus_10_released();

    void on_pb_ext_temp_plus_1_released();

    void on_pb_ext_temp_plus_01_released();

    void on_pb_ext_temp_moins_01_released();

    void on_pb_ext_temp_moins_1_released();

    void on_pb_ext_temp_moins_10_released();

    void on_lb_ext_hygro_plus_10_released();

    void on_lb_ext_hygro_plus_1_released();

    void on_lb_ext_hygro_plus_01_released();

    void on_lb_ext_hygro_moins_01_released();

    void on_lb_ext_hygro_moins_1_released();

    void on_lb_ext_hygro_moins_10_released();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
