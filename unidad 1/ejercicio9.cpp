//Ejercicio 9.
//Escribir un bucle para validar lo ingresado por el usuario: se debe solicitar el ingreso de un car�cter y s�lo se debe
//interrumpir el bucle cuando el usuario haya ingresado el car�cter 's' o el car�cter 'n'. La solicitud de ingreso del
//dato debe hacerse al menos una vez antes de evaluar si el bucle debe interrumpirse o no. No utilizar "while true"
//como condici�n. A continuaci�n, si el usuario ingres� la letra 's', imprimir "usted eligi� S�" y, si ingres� la 'n'
//imprimir "usted eligi� NO".
//Nota: para evaluar la condici�n de corte del bucle considerando may�sculas y min�sculas es posible utilizar las
//funciones toupper(car�cter) y tolower(car�cter), que convierten el car�cter pasado por par�metro a may�scula
//o a min�scula respectivamente (si el car�cter no es una letra, no se modifica).

#include<iostream>

using namespace std;

int main(){
	char caracter;
	do{
		cout<<"ingrese caracter: ";
		cin>>caracter;
		caracter = tolower(caracter);
		
	}while(caracter!='s' and caracter!='n');
			cout<<"ingrese caracter: ";
			cin>>caracter;
			if(caracter == 's'){
			cout<<"usted eligio SI";
			}
			if(caracter == 'n'){
				cout<<"usted eligio NO";
			}
		
		
	
	return 0;
}
