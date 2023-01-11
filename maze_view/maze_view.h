#ifndef MAZE_VIEW_H
#define MAZE_VIEW_H

#include <QMainWindow>

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
};
#endif // MAZE_VIEW_H
