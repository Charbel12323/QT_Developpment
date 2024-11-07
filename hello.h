#ifndef HELLO_H
#define HELLO_H

#include <QObject>
#include <iostream>

class hello : public QObject
{
    Q_OBJECT
public:
    explicit hello(QObject *parent = nullptr);

    // Make get_message invokable from QML
    Q_INVOKABLE void get_message();
};

#endif // HELLO_H
