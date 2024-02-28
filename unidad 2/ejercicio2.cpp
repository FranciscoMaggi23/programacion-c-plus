//Ejercicio 2.
//¿Qué salida produce el siguiente código?
//int i, arreglo[10];
//for (i = 0; i < 10; i++)
//arreglo[i] = 2*i;
//for (i = 0; i < 10; i++)
//cout << arreglo[i] << " ";
//cout << endl;
//for (i = 0; i <= 10; i = i + 2)
//cout << arreglo[i] << " ";

//va a imprimir en segundo for cada numero del arreglo dejando un 
//espacio, dsp en el tercero, va a imprimir 5 elementos del array
//ya que ma sumando dos indices
#include<iostream>
using namespace std;

int main(){

	int i, arreglo[10];
	
	for (i = 0; i < 10; i++){
	
		arreglo[i] = 2*i;
		cout<<arreglo[i];}
		
	for (i = 0; i < 10; i++){
	
		cout << arreglo[i] << "es: ";
		cout << endl;
	}
		
	for (i = 0; i <= 10; i = i + 2){
	
		cout << arreglo[i] << "si: ";}

	
	return 0;
}

//ok
