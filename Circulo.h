#ifndef Circulo_H
#define Circulo_H

#include <iostream>

using namespace std;

class Circulo{

    public:
        const static double PI = 3.1416;
        double radio;

        double calcularArea(double rad);

};

#endif
