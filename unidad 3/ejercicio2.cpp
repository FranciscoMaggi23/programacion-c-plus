//Ejercicio 2.
//¿Qué salidas produce el siguiente código?


#include<iostream>
using namespace std;


int main(){
	
	int *p1, *p2;
	p1 = new int;
	p2 = new int;
	*p1 = 10;
	*p2 = 20;
	cout << *p1 << " " << *p2 << endl; //10 y 20
	*p1 = *p2;
	cout << *p1 << " " << *p2 << endl;//20 y 20
	*p2 = 30;
	cout << *p1 << " " << *p2 << endl; // Como p1 no se ha cambiado y todavía apunta a
	//la misma dirección de memoria que p2, al imprimir los valores de *p1 y *p2 se obtiene 20 y 30
	
	return 0;
} 
