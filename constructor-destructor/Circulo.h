#ifndef Circulo_H
#define Circulo_H

#include <iostream>

using namespace std;

class Circulo{

    public:
        Circulo(double rad);
        ~Circulo();
        const static double PI = 3.1416;
        double *radio;

        double calcularArea();

};

#endif
