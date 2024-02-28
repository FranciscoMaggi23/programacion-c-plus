#include<iostream>
#include<string>
#include<cctype>
using namespace std;


string validar_c(string c){
	
	string numero="0123456789", especial="+-¿'?*", ok="validada!"; 
	int cumpleNumero=0, cumpleEspecial=0, cumpleMayuscula=0;
	
	if(c.length()>=8){
		for(int i =0; i<c.length(); i++){
			
			if(isupper(c[i])){
				cout<<"mayuscula: "<<c[i]<<endl;//problema: toma numeros o caracteres especiales como mayusculas
				cumpleMayuscula=1;	
			}
			for(int n=0; n<numero.length(); n++){
					if(numero[n]==c[i]){
						cout<<"    tiene numero"<<numero[n]<<endl;
						cumpleNumero=1;
						break;
					}
            }
            for(int e=0; e<especial.length(); e++){
				if(c[i] == especial[e]){
					cout<<"tiene especial"<<especial[e]<<endl;
					cumpleEspecial=1;
				}
	        }
		}
		if(cumpleEspecial==1 and cumpleNumero==1 and cumpleMayuscula==1){
			cout<<"contrasenia apta"<<endl;
		}
		else{
			cout<<"contrasenia no apta";
		}
	
	return ok;
	}
}


int main(){
	string  contrasena;
	int menu;
		cout<<"'0': salir\n"
		"'1': validar contraseña\n" 
		"'2': validar nombre de usuario\n"; cin>>menu;
	

	
	
	switch(menu){
		case 0: break;
		case 1: cout<<"ingrese contrasena: ";
				cin>>contrasena;
				cout<<validar_c(contrasena);
						
	}
	return 0;
}
