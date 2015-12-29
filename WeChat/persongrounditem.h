#ifndef MYQLISTWIDGETITEM_H
#define MYQLISTWIDGETITEM_H
#include <QListWidgetItem>
#include <QListWidget>
class MyQlistWidgetItem: public QListWidgetItem
{
public:
    MyQlistWidgetItem(std::string keys, QListWidget* itemlist);
};

#endif // MYQLISTWIDGETITEM_H
