#ifndef ENGINE_H
#define ENGINE_H


class Engine
{
public:
    double getDisplacement();
    void setDisplacement(double);
    int getHorsepower();
    void setHorsepower(int);
    Engine();
    Engine(int, double);

private:
    double displacement;
    int horsepower;

};

#endif // ENGINE_H
