#include "maze_view.h"
#include "ui_maze_view.h"

maze_view::maze_view(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::maze_view)
{
    ui->setupUi(this);
    scene = new QGraphicsScene();
    ui->graphicsView->setScene(scene);
    scene->addLine(0,255,0,-255);
    scene->addLine(255,0,-255, 0);
    ui->graphicsView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui->graphicsView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
}

maze_view::~maze_view()
{
    delete ui;
}


void maze_view::on_pushButton_open_clicked()
{

}


void maze_view::on_pushButton_save_clicked()
{

}

