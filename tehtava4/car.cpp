#include "car.h"
//#include "engine.h"
#include <iostream>

Car::Car()
{

}

Car::Car(std::string model, std::string brand)
{
    Car::setModel(model);
    Car::setBrand(brand);
}

std::string Car::getModel(){
    return Car::model;
}

void Car::setEngine(){
    Car::objEngine.setHorsepower(150);
    Car::objEngine.setDisplacement(2.0);
}

void Car::setBrand(std::string brand){
    Car::brand = brand;
}

std::string Car::getBrand(){
    return Car::brand;
}


void Car::setWheels(){
    Car::wheel1.setType("kesarengas");
    Car::wheel1.setSize(17);
    Car::wheel2.setType("kesarengas");
    Car::wheel2.setSize(17);
    Car::wheel3.setType("kesarengas");
    Car::wheel3.setSize(17);
    Car::wheel4.setType("kesarengas");
    Car::wheel4.setSize(17);
}

void Car::printDetails(){
    std::cout << "Auto: " << Car::getModel()<<Car::getBrand() << "\n";
    std::cout << "Moottori:  "<< Car::objEngine.getHorsepower()<< ", " <<Car::objEngine.getDisplacement() << "\n";
    std::cout << "Rengas: " << Car::wheel1.getSize()<<", " << Car::wheel1.getType() << "\n";
    std::cout << "Rengas: " << Car::wheel2.getSize()<<", " << Car::wheel2.getType() << "\n";
     std::cout << "Rengas: " << Car::wheel3.getSize()<<", " << Car::wheel3.getType() << "\n";
     std::cout << "Rengas: " << Car::wheel4.getSize()<<", " << Car::wheel4.getType() << "\n";
}

void Car::setModel(std::string model){
    Car::model = model;
}
