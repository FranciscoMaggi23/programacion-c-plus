//Ejercicio 17.
//Escribir un programa que determine si un a�o es bisiesto.
//Nota: un a�o es bisiesto si es m�ltiplo de 4. Los a�os m�ltiplos de 100 no son bisiestos, excepto que tambi�n
//sean m�ltiplos de 400.
//Ejemplo: 2000 es bisiesto, 1800 no lo es.

#include<iostream>

using namespace std;

int main(){
	int ano;
	cout<<"ingrese a�o:";
	cin>>ano;
	
	if(ano<=99 and ano%4==0){
		cout<<"el a�o"<<ano<<"es bisiesto"<<endl;
	}
	if(ano>=100 and ano%400==0){
		cout<<"el a�o"<<ano<<"es bisiesto"<<endl;
	}
	else{
		cout<<"no es bisiesto";
	}
	
	return 0;
}

//terminado
