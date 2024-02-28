//Ejercicio 12.
//Escribir una variante del programa anterior en la que, en lugar de informar la cantidad de veces que apareció
//cada dígito, se informe si apareció o no cada dígito en todos los números ingresados. Analizar cómo puede
//resolverse este ejercicio evitando contabilizar la cantidad de dígitos.
//Ejemplo: Si el usuario ingresa los números 44, 1, 710, 15, se debe informar que el 0 apareció, el 1 apareció, el 2
//no apareció, el 3 no apareció, el 4 apareció, el 5 apareció, etc.


#include<iostream>
using namespace std;
#include<string>


void aparecioNO(int arreglo[]){
		int numeros;
		cout<<"ingrese numero(negativo para terminar): ";

		while(true){
			cin>>numeros;
			if(numeros<0){
			break;
			}
			if(numeros==0){
				arreglo[0]=0;
				}
		
			while(numeros>0){
				int digito = numeros%10;
				for(int i=0; i<10; i++){
					if(digito==i){
						arreglo[digito]=i;
					}
				}
				numeros/=10;
				}
		}
				
		
}


int main(){
	int arreglo[10]={0};
	arreglo[0]=1;
	

	aparecioNO(arreglo);
	
	for(int x=0; x<10; x++){
			if(arreglo[x]==x){
				cout<<"el "<<arreglo[x]<<" aparecio"<<endl;
			}else{
				cout<<"el "<<x<<" No aparecio"<<endl;
			}
		}

	return 0;
}

//terminado

//	int numeros;


//	cout<<"ingrese numero(negativo para terminar): ";
//	cin>>numeros;
	
//	while(true){
//		cin>>numeros;
//		
//		aparecioNO(numeros, arreglo);
//		
//		
//		if(numeros<0){
//			break;
//		}
//		if(numeros==0){
//			arreglo[0]=0;
//		}
//		
//		while(numeros>0){
//			int digito = numeros%10;
//			for(int i=0; i<10; i++){
//				if(digito==i){
//					arreglo[digito]=i;
//				}
//			}
//			numeros/=10;
//			}
//		}
//		for(int x=0; x<10; x++){
//			if(arreglo[x]==x){
//				cout<<"el "<<arreglo[x]<<" aparecio"<<endl;
//			}else{
//				cout<<"el "<<x<<" No aparecio"<<endl;
//			}
//	}
//	
