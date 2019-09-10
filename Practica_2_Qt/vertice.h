#ifndef VERTICE_H
#define VERTICE_H

class Vertice
{
public:
  Vertice(double x,double y);
  Vertice(const Vertice&);
  double getCoorde() const;

private:

  double x;
  double y;
};

#endif // VERTICE_H
