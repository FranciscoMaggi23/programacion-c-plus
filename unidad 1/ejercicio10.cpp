//Ejercicio 10.
//Escribir un programa que imprima el menú mostrado a continuación y solicite al usuario elegir una opción, la
//cual se debe ejecutar para luego volver a mostrar el menú repetidas veces, hasta que el usuario decida salir:
//‘A’: Invertir número.
//‘B’: Sumatoria de dígitos.
//‘C’: Decir si son múltiplos.
//‘D’: Salir.
//Dependiendo del carácter ingresado por el usuario, realizar la acción indicada en el menú: A: leer un número e
//invertir sus dígitos para luego imprimirlo en orden inverso; B: solicitar un número e imprimir la suma de sus 
//dígitos; C: solicitar el ingreso de dos números y decir si el primero es múltiplo del segundo; D: terminar el
//programa.
//Si el usuario ingresa un carácter que no es la opción D, se debe ejecutar lo que corresponda y volver a mostrar
//el menú para permitirle elegir otra opción. Si el carácter ingresado por el usuario no es A, B, C ni D, mostrarle un
//mensaje de error y continuar mostrándole el menú y solicitando una opción hasta que ingrese una que sea válida.

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
