//Ejercicio 4.
//Escribir un programa que, dado un número (entero largo) expresado en segundos, informe el equivalente en
//horas, minutos y segundos.

#include<iostream>

using namespace std;

int main(){
	
	int segundos, minutos, horas;
	cout<<"ingrese los segundos: ";
	cin>>segundos;
	
	horas = segundos/3600;
	minutos= segundos/60;
	
	cout<<"el numero ingresado equivale a:"<<horas<<" horas"<<endl;
	cout<<minutos;
	
	
	return 0;
	
}
