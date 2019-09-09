#ifndef COMPLEJO_H
#define COMPLEJO_H
#include "cmath"
#include <iostream>
using namespace std;

class Complejo
{
    double real_part;
    double img_part;
public:
    Complejo();
    Complejo(double _real_part,double _img_part );
    Complejo(const Complejo&);
    double  getreal_part();
    double getimg_part();
    Complejo operator +(Complejo c1);
    Complejo operator -(Complejo c1);
    Complejo operator *(Complejo c1);
    Complejo operator /(Complejo c1);
    Complejo operator ~();
    ~Complejo();


};



#endif // COMPLEJO_H
