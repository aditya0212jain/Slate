#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "workspace2d.h"
#include <QWidget>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_translate3_x_returnPressed();

    void on_translate3_x_editingFinished();

    void on_translate3_y_editingFinished();

    void on_translate3_z_editingFinished();

    void on_apply_translate3_clicked();

    void on_scale3_x_editingFinished();

    void on_scale3_y_editingFinished();

    void on_scale3_z_editingFinished();

    void on_apply_scale3_clicked();

    void on_reflect3_y_toggled(bool checked);

    void on_reflect3_x_toggled(bool checked);

    void on_reflect3_z_toggled(bool checked);

    void on_apply_reflect3_clicked();

    void on_rotate3_x_valueChanged(int value);

    void on_rotate3_y_valueChanged(int value);

    void on_rotate3_z_valueChanged(int value);

    void on_rotate3_x_sliderPressed();

    void on_rotate3_x_sliderMoved(int position);

    void on_openAct_triggered();

    void on_actionConvert_2D_triggered();

    void on_actionShow3D_triggered();

    void on_actionWorkspace2D_triggered();

    void on_action_Open_D_triggered();

    void on_actionConvert_3D_triggered();

private:
    Ui::MainWindow *ui;
    workspace2D *work;
};

#endif // MAINWINDOW_H
