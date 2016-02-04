#ifndef Camion_H
#define Camion_H

#include <iostream>
#include "Auto.h"

using namespace std;

class Camion: public Auto{

    public:
        void frenar(int x);
        void descargar();


};

#endif
