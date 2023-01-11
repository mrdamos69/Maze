#include "maze_view.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    maze_view w;
    w.show();
    return a.exec();
}
