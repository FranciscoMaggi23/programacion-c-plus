//Ejercicio 10.
//Escribir un programa que permita al usuario gestionar los pagos de la cuota de un club.
//a) Para ello, almacenar en un arreglo los n�meros de DNI de los socios que pagaron. El club no tiene m�s
//de 200 socios.
//b) Permitir al usuario buscar un DNI en el arreglo y, si el DNI est� en el arreglo, imprimir "Cuota al d�a". Si
//no est�, imprimir "Socio con deuda".
//c) Tambi�n se debe permitir al usuario eliminar un DNI del arreglo, en caso de haberlo ingresado
//err�neamente.
//d) Finalmente, imprimir todo el arreglo.

#include<iostream>
using namespace std;




int main(){
	int dimL=5, dni[dimL], eliminar, noesta=0, buscar;
	
	for(int i=0; i<dimL; i++){
		
		cout<<"ingrese dni: "<<endl;
		cin>>dni[i];
	}
	//
	cout<<"buscar dni: ";
	cin>>buscar;
	
	for(int x=0; x<dimL; x++){
		if(dni[x]==buscar){
			cout<< "cuota al dia!"<<endl;
			noesta++;
		}
	}
	if(noesta==0){
		cout<< "Socio con deuda"<<endl;
	}
	
	//
	cout<<"eliminar dni: ";
	cin>>eliminar;
	int indice=0;
	while(dni[indice]!=eliminar){
		indice++;
	}
	
	for(int j=indice; j<dimL-1; j++){
		dni[j]= dni[j+1];
	}
	dimL--;
	
	for(int s=0; s<dimL; s++){
		cout<<dni[s];
	}
	
	
	return 0;
}



//terminar
