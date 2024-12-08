#ifndef WHEEL_H
#define WHEEL_H
//#include <QString>
#include <iostream>

class wheel
{
public:
    std::string getType();
    void setType(std::string);
    int getSize();
    void setSize(int);
    wheel();
    wheel(int, double);

private:
    std::string type;
    int size;
};

#endif // WHEEL_H
