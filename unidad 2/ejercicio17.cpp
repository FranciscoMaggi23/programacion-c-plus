//Ejercicio 17.
//Se debe lanzar una encuesta para lanzar un nuevo producto al mercado en 20 localidades de la provincia de
//Buenos Aires. El producto se presenta en 5 formas diferentes, dándose a elegir a cada encuestado solo una de
//ellas. Además de las 5 opciones se incluye la posibilidad de elegir ninguna.
//Se pide realizar un programa que permite resolver las siguientes opciones:
//a. Informar la presentación más elegida por localidad.
//b. Informar la localidad con mayor porcentaje de encuestados que no eligieron ninguna de las
//presentaciones.


#include<iostream>
using namespace std;

int main(){
	const int localidades=4, presentacion=6;
	int matriz[localidades][presentacion];
	

	for(int i=0; i<localidades; i++){
		cout<<"localidad"<<i+1<<endl;
		
		for(int x=0; x<presentacion; x++){
			int encuesta=0;
			cout<<"ingrese presentacion(1-5) o 0 para ninguna"<<endl;
			cin>>encuesta;
			if(encuesta>=0 and encuesta<6){
				matriz[i][encuesta]++;
			}else{
				cout<<"opcion no valida"<<endl;
				x--;
			}
		}
	}

	
	//buscamos la mas elegida
	for(int j=0; j<localidades; j++){
		int maselejida=0;
		int presentacionmasekejida=0;
		for(int s=0; s<presentacion; s++){
			if(matriz[j][s]>maselejida){
				maselejida= matriz[j][s];
				presentacionmasekejida =s;
				cout<<maselejida;
				
			}
		}
		cout<<"localidad: "<<j+1<<" presentacion mas elejida: "<<presentacionmasekejida<<endl;
	}
	
	//imprimir matriz
	
	for(int q=0; q<localidades; q++){
		for(int i=0; i<presentacion; i++){
			cout<<matriz[q][i]<<" ";
		}
		cout<<endl;
	}
	
	return 0;
	
}


