#ifndef CONSTRUCTORFIGURA_H
#define CONSTRUCTORFIGURA_H
#include "circulo.h"
#include"vertice.h"
class constructorFigura
{
public:
  constructorFigura();
  static circulo builder(vertice);
  static triangulo builder(vertice,vertice,vertice);
  static rectangulo builder(vertice,vertice,vertice,vertice);
  static pentagono builder(vertice,vertice,vertice,vertice;vertice);
  static hexagono builder(vertice, vertice, vertice, vertice,vertice,vertice);


 private:

  static cuenta;
};

#endif // CONSTRUCTORFIGURA_H
