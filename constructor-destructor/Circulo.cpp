#include "Circulo.h"


Circulo::Circulo(double rad){
    radio = &rad;
}

Circulo::~Circulo(){
	radio = NULL;
    delete radio;
}

double Circulo::calcularArea(){
    return (*radio) * (*radio) * PI;
}




