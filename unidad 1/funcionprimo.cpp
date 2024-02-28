#include<iostream>

using namespace std;

bool primo(int numero){
	int cont=0;
	
	for(int x=1;x<numero;x++){
		if(numero%x==0){
			cont++;
		}
	}
	if(cont==2){
		return 1;
	}else{
		return 0;
	}
}


int main(){
	int A, cont=0, acu=0;
	int P;
	cout<<"ingrese numero: ";
	cin>>A;
	while(A!=0){
		P= primo(A);
		if(P){
			cont++;
			acu+=P;
		}
		cout<<"ingrese numero: ";
		cin>>A;
    }
    int promedio=0;
    promedio= acu/cont;
    cout<<"el promedio es: "<<promedio;
	
	
	return 0;
}



