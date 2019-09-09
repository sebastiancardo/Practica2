#include "complejo.h"
#include "cmath"
#include <iostream>
using namespace std;
Complejo::Complejo()
{
    real_part =0.0;
    img_part=0.0;

}
Complejo::Complejo(double _real_part,double _img_part )
{
    real_part=_real_part;
    img_part=_img_part;
}

Complejo::Complejo(const Complejo &obj)
{
    real_part=obj.real_part;
    img_part=obj.img_part;
}

double Complejo::getreal_part()
{
    return real_part;
}
double Complejo::getimg_part()
{
    return img_part;
}

Complejo Complejo::operator+(Complejo c1)
{
    Complejo c3(c1.getreal_part()+getreal_part(),c1.getimg_part()+getimg_part());
    cout<<c3.getreal_part()<<","<<c3.getimg_part()<<"i"<<endl;
    return c3;
}

Complejo Complejo::operator -(Complejo c1)
{
    Complejo c3(getreal_part()-c1.getreal_part(),getimg_part()-c1.getimg_part());
    cout<<c3.getreal_part()<<","<<c3.getimg_part()<<"i"<<endl;
    return c3;
}

Complejo Complejo::operator *(Complejo c1)
{
    Complejo c3(c1.getreal_part()*getreal_part(),c1.getreal_part()*getimg_part());
    Complejo c4(c1.getimg_part()*getreal_part(),c1.getimg_part()*getimg_part());
    Complejo c5(c3.getreal_part()-c4.getimg_part(),c3.getimg_part()+c4.getreal_part());
    cout<<c5.getreal_part()<<","<<c5.getimg_part()<<"i"<<endl;
    return c5;

}

Complejo Complejo::operator /(Complejo c1)
{
    Complejo c3(c1.getreal_part()*getreal_part(),c1.getreal_part()*getimg_part());
    Complejo c4(c1.getimg_part()*getreal_part(),c1.getimg_part()*getimg_part());
    Complejo c5(c3.getreal_part()-c4.getimg_part(),c3.getimg_part()+c4.getreal_part());
   double a=pow(c1.getreal_part(),2)+pow(c1.getimg_part(),2);
   Complejo c6(c5.getreal_part()/a,c5.getimg_part()/a);
   cout<<c6.getreal_part()<<","<<c6.getimg_part()<<"i"<<endl;
   return c6;

}

Complejo Complejo::operator ~()
{
    Complejo c3(getreal_part(),-1*getimg_part());
    cout<<c3.getreal_part()<<","<<c3.getimg_part()<<"i"<<endl;
    return c3;
}


Complejo::~Complejo()
{
    cout<<"¡Complejo Destruido!"<<endl;
}


