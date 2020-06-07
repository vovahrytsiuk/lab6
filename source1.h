#ifndef SOURCE_H
#define SOURCE_H

#include <iostream>
#include <string>
#include <ctime>
#include <cmath>


using namespace std;
class stereoFigure{
protected:
    double a;
    double b;
    double c;
public:
    void set(double a, double b=0, double c=0);
    virtual double find_area() = 0;
    virtual double find_volume() = 0;
    virtual void print() = 0;
};

class cube : public stereoFigure{
public:
    double find_area();
    void print();
    double find_volume();
};

class tetrahedron : public stereoFigure{
public:
    double find_area();
    void print();
    double find_volume();
};

class parellelepiped:public stereoFigure{
    public:
    double find_area();
    void print();
    double find_volume();
};



#endif