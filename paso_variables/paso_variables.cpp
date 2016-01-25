
#include <iostream>

//El compilador toma el valor de la variable a
// y lo copia internamente en la funcion.
// Para devolver el valor es necesario retornar el valor
int func_valor(int b){
	b = b + 2;
	return b;
}

//Se usa el operador de deferencia para
//indicar al compilador que de la variable a
//debe de tomar su dirección de memoria
// para encontrar el valor en lugar de hacer copias.
//No es necesario usar return para ver el resultado de la operacion
void func_referencia(int &b){
	b = b + 2;
}

void ejemplo_valor(){
	std::cout<<"=========PASO POR VALOR=============="<<std::endl;
	int a = 2;
	int r = func_valor(a);
	std::cout<<"r="<<r<<" a="<<a<<std::endl;
}

void ejemplo_referencia(){
	std::cout<<"=========PASO POR REFERENCIA=============="<<std::endl;
	int a = 2;
	func_referencia(a);
	std::cout<<"a="<<a<<std::endl;
}
/*
int main(){
	ejemplo_valor();
	ejemplo_referencia();
   return 0;
}*/

