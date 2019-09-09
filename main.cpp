#include <iostream>
#include "vertice.h"
using namespace std;

//Desarrolle una pequeña aplicación en la que se puedan crear distintas figuras geométricas
//y averiguar su perímetro y su área.

//"Circulo", "Triangulo", "Rectangulo", "Pentagono" y "Hexagono"

int main()
{
    cout << endl<<"             *****Programa para crear figuras geometricas*****"<<endl<<endl;

    cout<<"¿Cual de las siguientes figuras desea crear?"<<endl<<endl;

    cout<<"Ingrese:"<<endl<<endl;
    cout<<"1. Para Círculo"<<endl;
    cout<<"2. Para Triángulo"<<endl;
    cout<<"3. Para Rectángulo"<<endl;
    cout<<"4. Para Pentágono"<<endl;
    cout<<"5. Para Hexágono"<<endl<<endl;

    int opcion_menu=0;

    cin>>opcion_menu;

    switch(opcion_menu) {

    case 1: {cout<<"1"<<endl;}
        break;
    case 2: {cout<<"2"<<endl;}
        break;

    case 3: {cout<<"3"<<endl;}
        break;
    case 4: {cout<<"4"<<endl;}
        break;
    case 5: {cout<<"5"<<endl;}
        break;
}


    return 0;
}
