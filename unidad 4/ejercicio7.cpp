//Ejercicio 7.
//Escribir una funci�n recursiva para calcular la potencia de un n�mero. La funci�n recibir� como par�metros al
//n�mero y un exponente (ambos enteros positivos), y retornar� la potencia:
//int potencia(int numero, int exponente)
//Nota 1: Cualquier n�mero elevado a la 0 da como resultado 1. El 0 elevado a cualquier n�mero positivo dar�
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

