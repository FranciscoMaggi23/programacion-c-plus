//Ejercicio 10.
//Escribir un programa que permita al usuario gestionar los pagos de la cuota de un club.
//a) Para ello, almacenar en un arreglo los números de DNI de los socios que pagaron. El club no tiene más
//de 200 socios.
//b) Permitir al usuario buscar un DNI en el arreglo y, si el DNI está en el arreglo, imprimir "Cuota al día". Si
//no está, imprimir "Socio con deuda".
//c) También se debe permitir al usuario eliminar un DNI del arreglo, en caso de haberlo ingresado
//erróneamente.
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
