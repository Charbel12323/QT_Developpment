#include "hello.h"

hello::hello(QObject *parent)
    : QObject{parent}
{}

void hello::get_message() {
    std::cout << "Hello world" << std::endl;
}
