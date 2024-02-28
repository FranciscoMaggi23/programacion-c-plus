//Ejercicio 15.
//Dadas dos matrices de 4 x 4 leídas por teclado, informar 
//la matriz resultante de la operación A + B

#include<iostream>
using namespace std;


void sumaMatrices(int matrizA[2][2], int matrizB[2][2]){
	cout<<"la suma es: "<<endl;
	for(int i=0; i<2; i++){
		for(int x=0; x<2; x++){
			
			cout<<matrizA[i][x]+matrizB[i][x]<<"  ";
//			cout<<"la matriz A:    "<<matrizA[i][x]<<" ";
//			cout<<"la matriz b:    "<<matrizB[i][x]<<" "; //esto es para mostrar las matrices
		}
		cout<<endl;
	}
	
}

int main(){
	int matrizA[2][2], matrizB[2][2], suma;
	
	for(int s=0; s<2; s++){
		
		for(int i=0; i<2; i++){//filas
			for(int x=0; x<2; x++){//columnas
				if(s==1){
				cout<<"ingrese matriz B: "<<endl;
				cin>>matrizA[i][x];
				}else{
				cout<<"ingrese matriz A: "<<endl;
				cin>>matrizB[i][x];
				}
				
			}
		}
	}
	sumaMatrices(matrizA, matrizB);
	
	
	
	
	return 0;
}

//okk
