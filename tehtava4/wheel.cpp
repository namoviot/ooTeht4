#include "wheel.h"
#include <iostream>

wheel::wheel()
{

}

void wheel::setSize(int size){
    wheel::size = size;
}

void wheel::setType(std::string type){
    wheel::type = type;
}

int wheel::getSize(){
    return wheel::size;
}


std::string wheel::getType(){
    return wheel::type;
}
