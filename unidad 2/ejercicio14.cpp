//Ejercicio 14.
//Una matriz cuadrada A se dice que es simétrica si A(i,j) = A(j,i) para todo i, j. Escribir un programa que decida si
//una matriz de 3 x 3 dada es o no simétrica.



#include<iostream>
using namespace std;


bool simetrica(int matriz[3][3]){
	bool essimetrica= true;
	
	for(int f=0; f<3; f++){
		for(int c=0; c<3; c++){
			if(matriz[f][c]!=matriz[c][f]){
				essimetrica=false;
				break;
			}
		}
	}
	return essimetrica;
}

int main(){
	int columna, fila;

	int matriz[3][3];
	
	cout<<"ingrese matriz: "<<endl;
	
	for(int f=0; f<3; f++){
		for(int c=0; c<3; c++){
			cin>>matriz[f][c];
		}
	}
	
	simetrica(matriz);
	
	if(simetrica(matriz)){
		cout<<"la matriz es simetrica"<<endl;
	}else{
		cout<<"no es simetrica"<<endl;
	}
	
	cout<<"la matriz es: "<<endl;
	for(int f=0; f<3; f++){
		for(int c=0; c<3; c++){
			cout<<"   "<<matriz[f][c];
		}
		cout<<endl;
	}
	
	return 0;
}

//ok
