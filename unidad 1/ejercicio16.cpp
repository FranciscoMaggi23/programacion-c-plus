//Ejercicio 16.
//Escribir una función que reciba un punto de coordenadas (X,Y) desde el teclado y devuelva TRUE si el punto
//pertenece a la recta de ecuación Y = 3X + 2 ó FALSE en caso contrario.
//Nota: sólo se debe hacer la función, aunque puede ser útil realizar la invocación y utilizar el valor de retorno para
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
