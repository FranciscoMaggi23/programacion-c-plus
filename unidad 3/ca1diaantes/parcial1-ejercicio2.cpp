#include<iostream>
using namespace std;

int main(){
	int valor, MAX=5;
	int vec[MAX];
	
	for(int i=0; i<MAX;i++){
		cout<<"ingrese numero: ";
		cin>>valor;
		int indice=0;
		while(indice<i && vec[indice]<=valor){
			indice++;
		}
		for(int j=i; j>indice; j--){
			vec[j]=vec[j-1];
		}
		vec[indice]=valor;
	}
	cout<<"[";
	for(int x=0; x<MAX; x++){
		cout<<vec[x];
		if(x<MAX-1){
			cout<<",";
		}
	}
	cout<<"]"<<endl;
	
	return 0;
}
