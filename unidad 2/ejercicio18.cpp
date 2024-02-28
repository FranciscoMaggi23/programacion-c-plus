//Ejercicio 18.
//El rey de un reino muy muy lejano est� organizando festejos por su cumplea�os y desea ofrecer un banquete en
//cada una de las ciudades principales de su reino: Tuwin, Forella, Doriath y Aerilon. Los banquetes durar�n 3 d�as
//en cada ciudad y se necesita contabilizar la cantidad de invitados que habr� cada d�a, para organizar todo.
//a) Almacenar estos datos en una matriz, cargada por el usuario.
//b) Informar cu�ntos invitados se esperan en total en cada ciudad (imprimiendo nombre de la ciudad y
//cantidad de invitados en el total de d�as).
//c) Desde la ciudad Aerilon informan que habr� que restar 50 invitados que ya no asistir�n el primer d�a.
//d) Dado el nombre de una ciudad ingresada por teclado, informar la cantidad de personas que asistir�n en
//cada uno de los tres d�as.



#include<iostream>
using namespace std;



const int Numciudades=4,dias=3;


//d) Dado el nombre de una ciudad ingresada por teclado, informar la cantidad de personas que asistir�n en
//cada uno de los tres d�as.

void cantidaddepersonasqueasistiran(int matriz[Numciudades][dias], int Numciudades, string ciudades[], int dias, int& invitados){
	string nombreC, correcta;
	
	cout<<"ingrese el nombre de la ciudad a consultar: "<<endl;
	getline(cin>>ws,nombreC);
	for(int i=0; i<nombreC.length();i++){
		if(i==0){
			correcta += toupper(nombreC[i]);
		}else{
			correcta +=tolower(nombreC[i]);

		}
	}
	cout<<correcta;
	
	for(int i=0; i<dias; i++){
		for(int x=0; x<Numciudades; x++){
			if(correcta==ciudades[x]){
				cout<<"la cantidad de personas que hay en el dia "<<i+1<<" es: "<<matriz[x][i]<<endl;				
			}
		}
	}
	
}




//c) Desde la ciudad Aerilon informan que habr� que restar 50 invitados que ya no asistir�n el primer d�a.
void restarInvitados(int matriz[Numciudades][dias], int Numciudades, string ciudades[], int dias, int& invitados){
	for(int i=0; i<dias; i++){
		for(int x=0; x<Numciudades; x++){
			if(i==0 and ciudades[x]=="Aerilon"){
				matriz[x][i]-= 50;
				
			}
		}
	}
}

//b) Informar cu�ntos invitados se esperan en total en cada ciudad (imprimiendo nombre de la ciudad y
//cantidad de invitados en el total de d�as).
int contarInvitados(int matriz[Numciudades][dias], int Numciudades, string ciudades[], int dias, int& invitados  ){
	for(int x=0; x<dias; x++){
		for(int i=0; i<Numciudades; i++){
			invitados+=matriz[i][x];
		}
	}
	return invitados;
}





// cargar datos
void cargarMatriz(int matriz[Numciudades][dias], int Numciudades, string ciudades[],int dias){
	
	for(int x=0; x<dias; x++){
		for(int i=0; i<Numciudades; i++){
			cout<<"ingrese la cantidad de invitades de la ciudad "<<ciudades[i]<<" el dia "<<x+1<<endl;
			cin>>matriz[i][x];
		}
	}
	
}




int main(){
	string ciudades[Numciudades]={"Tuwin", "Forella", "Doriath" ,"Aerilon"};
	int matriz[Numciudades][dias], invitados=0;
	
	cargarMatriz(matriz,Numciudades,  ciudades,dias);
	
	contarInvitados(matriz,Numciudades,  ciudades,dias, invitados );
	cout<<"la cantidaad de invitados es: "<<invitados<<endl;
	
	restarInvitados(matriz,Numciudades,  ciudades,dias, invitados );
	cantidaddepersonasqueasistiran(matriz,Numciudades,  ciudades,dias, invitados );
	
	
	
	return 0;
}

//ok
