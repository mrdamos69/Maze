#include "maze_view.h"
#include "ui_maze_view.h"

maze_view::maze_view(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::maze_view)
{
    ui->setupUi(this);
}

maze_view::~maze_view()
{
    delete ui;
}

