#ifndef MAZE_VIEW_H
#define MAZE_VIEW_H

#include <QMainWindow>
#include <math.h>

#include <QFileDialog>
#include <QGraphicsScene>
#include <QMessageBox>
#include <QMouseEvent>
#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class maze_view; }
QT_END_NAMESPACE

class maze_view : public QMainWindow
{
    Q_OBJECT

public:
    maze_view(QWidget *parent = nullptr);
    ~maze_view();

private slots:
    void on_pushButton_open_clicked();

    void on_pushButton_save_clicked();

private:
    Ui::maze_view *ui;
    QGraphicsScene *scene;
};
#endif // MAZE_VIEW_H
