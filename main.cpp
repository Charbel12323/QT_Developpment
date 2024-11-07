#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include "hello.h"
int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);
    qmlRegisterType<hello>("MyApp", 1, 0, "Hello");

    QQmlApplicationEngine engine;
    QObject::connect(
        &engine,
        &QQmlApplicationEngine::objectCreationFailed,
        &app,
        []() { QCoreApplication::exit(-1); },
        Qt::QueuedConnection);
    engine.loadFromModule("C", "Main");

    return app.exec();
}
