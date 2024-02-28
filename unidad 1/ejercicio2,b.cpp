//Ejercicio 2.
//Contar la cantidad de números negativos leídos desde teclado. La serie termina con el valor cero (0), el cual no
//debe procesarse. ¿Qué cambiaría si debiera procesarse también el último número ingresado (0)?

#include <iostream>
using namespace std;


int main(){
	int numero,contador;
//	cout<<"ingrese numero: ";
//	cin>> numero;
	do{
		cout<<"ingrese numero: ";
		cin>>numero;
		
		if(numero<0){
			contador++;
		}
	}while(numero!=0);
		
	cout<<"la cantidad de numeros negativos es: "<<
	contador<<endl;
	return 0;
}
