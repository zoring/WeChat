#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QPushButton"
#include <iostream>
#include "QLabel"
#include "QWidget"
#include "QLayout"
#include "QGridLayout"
#include "QGroupBox"
#include "QListWidget"
#include "QVBoxLayout"
#include "QHBoxLayout"
#include "myqlistwidgetitem.h"

using namespace std;
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
   StaticMainWindow();

}

MainWindow::~MainWindow()
{
    delete ui;
}

//初始化聊天界面
bool MainWindow::StaticMainWindow(){

 QHBoxLayout* Hlayout = new QHBoxLayout();
 QVBoxLayout* layout = new QVBoxLayout();
  QVBoxLayout* StaticLists = new QVBoxLayout();
QPushButton* FriendButton = new QPushButton("Friend");
QPushButton* GroundButton = new QPushButton("Ground");
Hlayout->addWidget(FriendButton);

Hlayout->addWidget(GroundButton);
StaticList(StaticLists);
 layout->addItem(Hlayout);
 layout->addItem(StaticLists);
ui->centralWidget->setLayout(layout);
 return true ;
}


//获取组信息
bool MainWindow::StaticList( QVBoxLayout* layout){



    listwidget = new QListWidget();

     for (int i =0; i<=10;i++)
     {
    MyQlistWidgetItem*  test = new MyQlistWidgetItem("friends",listwidget);
   // QObject::connect(test,&QPushButton::clicked,this,StaticGround);
     }
     new MyQlistWidgetItem("tefdst",listwidget);
     layout->addWidget(listwidget);

     return true;

}

//获取好友列表信息
bool MainWindow::StaticGround(string keys){
    for (int i =0; i<=10;i++)
    {
      new QListWidgetItem("tdst",listwidget);
    }
    new QListWidgetItem("tefdst",listwidget);
    return true;

}
