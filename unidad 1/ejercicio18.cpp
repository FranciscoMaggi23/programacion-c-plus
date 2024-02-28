//Ejercicio 18.
//Escribir un programa que, dado un a�o y una cantidad de d�as transcurridos desde el 1 de enero, muestre la
//fecha en formato dd/mm/aaaa. Validar que la cantidad de d�as dada sea v�lida (entre 1 y 365 � entre 1 y 366).
//Para esto se debe considerar si el a�o es bisiesto o no.
//Ejemplos: en el a�o 2019, el d�a n�mero 256 corresponde al 13/09/2019.
//En el a�o 2000 (bisiesto), el d�a n�mero 60 corresponde a la fecha 29/02/2000.
//En el a�o 2014, el d�a n�mero 366 no es v�lido ya que 2014 tuvo 365 d�as.

#include<iostream>

using namespace std;

bool bisiesto(int ano){
	
	if(ano<=99 and ano%4==0){
		return true;
	}
	if(ano>=100 and ano%400==0){
		return true;
	}
	else{
		return false;
	}
}

int main(){
	int ano;
	cout<<"ingrese a�o:";
	cin>>ano;
	
	cout<<bisiesto(ano);
	
	
	return 0;
}

//terminar...
