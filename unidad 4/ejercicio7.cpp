//Ejercicio 7.
//Escribir una función recursiva para calcular la potencia de un número. La función recibirá como parámetros al
//número y un exponente (ambos enteros positivos), y retornará la potencia:
//int potencia(int numero, int exponente)
//Nota 1: Cualquier número elevado a la 0 da como resultado 1. El 0 elevado a cualquier número positivo dará
//siempre como resultado 0.
//Nota 2: Puede definirse que Xn = X * Xn-1



#include<iostream>
using namespace std;


int potencia(int numero, int exponente){
	if(exponente==0){
		return 1;
	}
	if(numero==0){
		return 1;
	}
	return numero*potencia(numero, exponente-1);
}


int main(){
	cout<<potencia(3,3);
	return 0;
}

