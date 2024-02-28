#include<iostream>
using namespace std;

const int MAX=10;

void cargar(int numeros[MAX], int& dl){
	for(int i=0; i<MAX; i++){
		if(i%2==0){
			numeros[i]=i*2;
		}else{
			numeros[i]=i;
		}
		dl++;
	}
}

void imprimir(int numeros[MAX], int dl){
	int i=0;
	while(i<dl){
		cout<<numeros[i]<<endl;
		i++;
	}
}

int main(){
	int numeros[MAX];
	int dl=0;
	cargar(numeros, dl);
	imprimir(numeros, dl);
	
	return 0;
}
