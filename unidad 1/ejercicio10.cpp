//Ejercicio 10.
//Escribir un programa que imprima el men� mostrado a continuaci�n y solicite al usuario elegir una opci�n, la
//cual se debe ejecutar para luego volver a mostrar el men� repetidas veces, hasta que el usuario decida salir:
//�A�: Invertir n�mero.
//�B�: Sumatoria de d�gitos.
//�C�: Decir si son m�ltiplos.
//�D�: Salir.
//Dependiendo del car�cter ingresado por el usuario, realizar la acci�n indicada en el men�: A: leer un n�mero e
//invertir sus d�gitos para luego imprimirlo en orden inverso; B: solicitar un n�mero e imprimir la suma de sus 
//d�gitos; C: solicitar el ingreso de dos n�meros y decir si el primero es m�ltiplo del segundo; D: terminar el
//programa.
//Si el usuario ingresa un car�cter que no es la opci�n D, se debe ejecutar lo que corresponda y volver a mostrar
//el men� para permitirle elegir otra opci�n. Si el car�cter ingresado por el usuario no es A, B, C ni D, mostrarle un
//mensaje de error y continuar mostr�ndole el men� y solicitando una opci�n hasta que ingrese una que sea v�lida.

#include<iostream>

using namespace std;

int main(){
	char letra;

	while(letra!='d'){
		switch(letra){
			case 'a':
				cout<<"eligio invertir numero"<<endl;
			    break;
			case 'b':
				cout<<"eligio sumar numero"<<endl;
			    break;
			case 'c':
				cout<<"eligio pepas"<<endl;
				break;
					
		}
		cout<<"'A': invertir numero\n"
		"'B': sumatoria de digitos\n" 
		"'C': decir si son multiplos\n"
		"'D': salir\n"; cin>>letra;
		letra = tolower(letra);			
	}
    cout<<"eligio salir";
	return 0;
}
