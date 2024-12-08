#ifndef CAR_H
#define CAR_H
#include "engine.h"
#include "wheel.h"
#include <iostream>


class Car
{
public:

    Car();
    Car(std::string, std::string);
    void setEngine();
    void setWheels();
    std::string getModel();
    void setModel(std::string);
    std::string getBrand();
    void setBrand(std::string);
    void printDetails();

private:
    Engine objEngine;
    wheel wheel1;
    wheel wheel2;
    wheel wheel3;
    wheel wheel4;
    std::string model;
    std::string brand;

};

#endif // CAR_H
