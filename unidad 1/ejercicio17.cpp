//Ejercicio 17.
//Escribir un programa que determine si un año es bisiesto.
//Nota: un año es bisiesto si es múltiplo de 4. Los años múltiplos de 100 no son bisiestos, excepto que también
//sean múltiplos de 400.
//Ejemplo: 2000 es bisiesto, 1800 no lo es.

#include<iostream>

using namespace std;

int main(){
	int ano;
	cout<<"ingrese año:";
	cin>>ano;
	
	if(ano<=99 and ano%4==0){
		cout<<"el año"<<ano<<"es bisiesto"<<endl;
	}
	if(ano>=100 and ano%400==0){
		cout<<"el año"<<ano<<"es bisiesto"<<endl;
	}
	else{
		cout<<"no es bisiesto";
	}
	
	return 0;
}

//terminado
