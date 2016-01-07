#ifndef PERSONLIST_H
#define PERSONLIST_H

#include <QObject>

class personList : public QObject
{
    Q_OBJECT
public:
    explicit personList(QObject *parent = 0);

signals:

public slots:
};

#endif // PERSONLIST_H
