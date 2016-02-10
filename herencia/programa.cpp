#include "Auto.h"
#include "Camion.h"

int main(){

    Auto carro;
    Camion camion;
    cout <<"===CARRO==="<<endl;
    carro.arrancar();
    carro.frenar();
    cout <<"===CAMION==="<<endl;
    camion.arrancar();
    camion.frenar(6);
    camion.descargar();



    return 0;
}
