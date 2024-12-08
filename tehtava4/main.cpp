#include <QCoreApplication>
#include "car.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Car car("Toyota", "Corolla");

    car.setEngine();
    car.setWheels();
    car.printDetails();

    return a.exec();
}
