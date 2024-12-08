#include "engine.h"
#include <iostream>

Engine::Engine()
{

}

void Engine::setDisplacement(double doub){
    Engine::displacement = doub;
}

void Engine::setHorsepower(int hp ){
    Engine::horsepower = hp;
}

int Engine::getHorsepower(){
    return Engine::horsepower;
}

double Engine::getDisplacement(){
    return Engine::displacement;
}
