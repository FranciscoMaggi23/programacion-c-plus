//Escribir un programa que visualice el más grande, el más pequeño y el promedio de N números enteros. El valor
//de N se solicita al usuario al comienzo del programa y luego se le permite introducir los números

#include<iostream>

using namespace std;

int main(){
	int cantNumero,sumaTotal,contador=0,promedio,menor,mayor,numero;
	cout<<"ingrese cuantas veces quiere ingresar numeros: ";
	cin>>cantNumero;
	for(int x=1;x<=cantNumero;x++){
		cout<<"ingrese numero: ";
		cin>>numero;
		contador++;
		sumaTotal+=numero;
		if(x==1){
			mayor=numero;
	    }else{
	    	if(numero>mayor){
				mayor=numero;
			}
	    }
		if(x==1){
			menor=numero;
		}else{
			if(numero<menor){
				menor=numero;
			}
		}
		
	}
	promedio = sumaTotal/contador;
	cout<<"el promedio es: "<<promedio<<endl;
	cout<<"el mayor es: "<<mayor<<endl;
	cout<<"el menor es: "<<menor<<endl;
	
	
	return 0;
}
