//Ejercicio 3.
//Leer tres letras desde teclado e indicar cuál de ellas viene primero en el alfabeto.

#include<iostream>
using namespace std;

int main(){
//	string abc = "abcdefghyjklmnñopqrstuvwxyz", palabra;
//	int indice=0;
//	cout<<"ingrese 3 letras: ";
//	cin>>palabra;
//	cout<<abc.find(palabra[0]);
//	cin>>indice;
    char letra1,letra2,letra3;
    cout<<"ingrese la primera letra: ";
    cin>>letra1;
    
    cout<<"ingrese la segunda letra: ";
    cin>>letra2;
    
    cout<<"ingrese la trcera letra: ";
    cin>>letra3;
    
    char primera_letra= letra1;
    
    if(letra2<primera_letra){
    	primera_letra= letra2;
    }
    if(letra3<primera_letra){
    	primera_letra=letra3;
    }
	
	cout<<primera_letra;
	
	return 0;
}
