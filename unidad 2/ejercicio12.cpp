//Ejercicio 12.
//Escribir una variante del programa anterior en la que, en lugar de informar la cantidad de veces que apareci�
//cada d�gito, se informe si apareci� o no cada d�gito en todos los n�meros ingresados. Analizar c�mo puede
//resolverse este ejercicio evitando contabilizar la cantidad de d�gitos.
//Ejemplo: Si el usuario ingresa los n�meros 44, 1, 710, 15, se debe informar que el 0 apareci�, el 1 apareci�, el 2
//no apareci�, el 3 no apareci�, el 4 apareci�, el 5 apareci�, etc.


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
