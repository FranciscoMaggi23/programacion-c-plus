//Ejercicio 2.
//Contar la cantidad de n�meros negativos le�dos desde teclado. La serie termina con el valor cero (0), el cual no
//debe procesarse. �Qu� cambiar�a si debiera procesarse tambi�n el �ltimo n�mero ingresado (0)?

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
