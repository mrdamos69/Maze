#include "maze_view.h"
#include "ui_maze_view.h"

maze_view::maze_view(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::maze_view)
{
    ui->setupUi(this);
    scene = new QGraphicsScene();
    ui->graphicsView->setScene(scene);

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            scene->addLine(i, j, -i, -j);
        }
    }

    ui->graphicsView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui->graphicsView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
}

maze_view::~maze_view()
{
    delete ui;
}

void maze_view::print_maze() {
    scene->clear();
    //
}

void maze_view::on_pushButton_open_clicked()
{

}


void maze_view::on_pushButton_save_clicked()
{

}

