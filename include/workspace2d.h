#ifndef WORKSPACE2D_H
#define WORKSPACE2D_H

#include <QMainWindow>

namespace Ui {
class workspace2D;
}

class workspace2D : public QMainWindow
{
    Q_OBJECT

public:
    explicit workspace2D(QWidget *parent = 0);
    ~workspace2D();

private slots:
    void on_actionConvert_to_3D_triggered();

private:
    Ui::workspace2D *ui;
};

#endif // WORKSPACE2D_H
