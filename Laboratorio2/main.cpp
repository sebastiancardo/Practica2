#include <iostream>
#include "cmath"
#include "complejo.h"
using namespace std;
double Modulo(Complejo c1);

int main()
{
    double a=0;//real complejo1
    double b=0;//imaginario complejo 1
    double c=0;//real complejo 2
    double d=0;//imaginario complejo 2
    cout<<" Porfavor ingrese la parte real del primer numero complejo"<<endl;
    cin>>a;
    cout<<" Porfavor ingrese la parte imaginaria del primer numero complejo"<<endl;
    cin>>b;
    cout<<" Porfavor ingrese la parte real del segundo numero complejo"<<endl;
    cin>>c;
    cout<<" Porfavor ingrese la parte imaginaria del segundo  numero complejo"<<endl;
    cin>>d;
    cout<<"Por favor ingrese la operacion que desea hacer:"<<endl;
    cout<<"ingrese 1 para sumar los complejos "<<endl;
    cout<<"ingrese 2 para restar los complejos "<<endl;
    cout<<"ingrese 3 para multiplicar los complejos "<<endl;
    cout<<"ingrese 4 para dividir los complejos "<<endl;
    cout<<"ingrese 5 para realizar el conjugado del primer numero complejo"<<endl;
    cout<<"ingrese 6 para realizar el conjugado del segundo numero complejo"<<endl;
    cout<<"ingrese 7 para realizar el modulo a el primer numero complejo"<<endl;
    cout<<"ingrese 8 para realizar el modulo a el segundo numero complejo"<<endl;
    Complejo c1(a,b);
    Complejo c2(c,d);
   int opcion=0;
   cin>>opcion;
    switch (opcion)
    {case 1:{cout<<"el resultado de la suma es:";c1+c2;}
        break;
    case 2:{cout<<"el resultado de la resta es:";c1-c2;}
        break;
    case 3:{cout<<"el resultado de la multiplicacion es:";c1*c2;}
            break;
    case 4:{cout<<"el resultado de la division es:";c1/c2;}
            break;
    case 5:{cout<<"el resultado del  conjugado #1 es:";~c1;}
            break;
    case 6:{cout<<"el resultado del  conjugado #2 es:";~c2;}
            break;
    case 7:{cout<<"el resultado del  modulo #1 es:";double e=Modulo(c1);cout<<e<<endl;}
            break;
    case 8:{cout<<"el resultado del  modulo #2 es:";double f=Modulo(c2);cout<<f<<endl;}
            break;




    }


   return 0;

}
double Modulo(Complejo c1)
{
    double a=pow(c1.getreal_part(),2)+pow(c1.getimg_part(),2);
    double b=sqrt(a);
    return b;

}





