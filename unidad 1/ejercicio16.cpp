//Ejercicio 16.
//Escribir una funci�n que reciba un punto de coordenadas (X,Y) desde el teclado y devuelva TRUE si el punto
//pertenece a la recta de ecuaci�n Y = 3X + 2 � FALSE en caso contrario.
//Nota: s�lo se debe hacer la funci�n, aunque puede ser �til realizar la invocaci�n y utilizar el valor de retorno para
//imprimir algo en pantalla, a fines de probar el algoritmo.

#include<iostream>
using namespace std;

bool coordenadas(float x, float y){
	y = 3*x+2;
	x = (y-2)/2;
	
	
	if(y==x){
		return true;
	}
	else{
		return false;
	}
	
}


int main(){
	float numerox, numeroy;
	
	cout<<"ingrese coordenada x: ";
	cin>>numerox;
	cout<<"ingrese coordenada y: ";
	cin>>numeroy;	
	
	cout<<coordenadas(numerox,numeroy);
	
	return 0;
}

//terminar...
