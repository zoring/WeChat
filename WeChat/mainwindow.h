#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QVBoxLayout>
#include <QListWidget>
#include <iostream>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    bool StaticMainWindow();

private:
    Ui::MainWindow *ui;
    QListWidget* listwidget;
    bool StaticList( QVBoxLayout* layout);
    bool StaticGround(std::string keys);
    int  OnChageGround();
};

#endif // MAINWINDOW_H
