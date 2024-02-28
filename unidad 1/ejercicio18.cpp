//Ejercicio 18.
//Escribir un programa que, dado un año y una cantidad de días transcurridos desde el 1 de enero, muestre la
//fecha en formato dd/mm/aaaa. Validar que la cantidad de días dada sea válida (entre 1 y 365 ó entre 1 y 366).
//Para esto se debe considerar si el año es bisiesto o no.
//Ejemplos: en el año 2019, el día número 256 corresponde al 13/09/2019.
//En el año 2000 (bisiesto), el día número 60 corresponde a la fecha 29/02/2000.
//En el año 2014, el día número 366 no es válido ya que 2014 tuvo 365 días.

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
	cout<<"ingrese año:";
	cin>>ano;
	
	cout<<bisiesto(ano);
	
	
	return 0;
}

//terminar...
