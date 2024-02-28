//Ejercicio 5.
//Escribir un programa que lea una fecha en el formato numérico AAAAMMDD y la informe con el formato
//DD/MM/AAAA

#include<iostream>

using namespace std;

int main(){
	int dia, mes, anos;
	
	cout<<"ingrese dia: ";
	cin>>dia;
	
	cout<<"ingrese mes: ";
	cin>>mes;
	
	cout<<"ingrese año: ";
	cin>>anos;
	
	
	cout<<dia<<"//"<<mes<<"//"<<anos;
	
	
	return 0;
}
