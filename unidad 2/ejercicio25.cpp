//Ejercicio 25.
//Implementar un sistema que permita administrar datos de clientes de un comercio para enviarles promociones.
//De cada cliente se tiene: nombre y apellido, DNI, e-mail, fecha de cumpleaños en formato DDMM, monto total
//de compras en el último año.
//a) Realizar el módulo de carga. La misma finaliza con el nombre "z". Los clientes deben almacenarse
//ordenados por número de DNI.
//b) Informar cuántos clientes cumplen años en cada uno de los 12 meses del año. Utilizar un arreglo
//auxiliar para contabilizarlos.
//c) Informar el nombre del cliente con el mayor monto de compras.

#include<iostream>
using namespace std;

struct Clientes{
	string nombreYapellido;
	int dni;
	string email;
	int cumpleanios;
	long long montoTotal;
};

void ordenar(Clientes arregloO[], int  x){
	Clientes aux;
	for(int y=0; y<x; y++){
		for(int i=0; i<x-1; i++){ //termina en x-1 ya que se compara con en sig
			if(arregloO[i].dni<arregloO[i+1].dni){
				aux= arregloO[i+1];
				arregloO[i+1]= arregloO[i];
				arregloO[i]= aux;
			}
		}
	}
}


//a) Realizar el módulo de carga. La misma finaliza con el nombre "z". Los clientes deben almacenarse
//ordenados por número de DNI.
void cargarClientes(Clientes arreglo[], int& x){

	
	while(true){
		cout<<"ingrese su nombre y apellido: "<<endl;
		getline(cin>>ws,arreglo[x].nombreYapellido);
		if(arreglo[x].nombreYapellido=="z"){
			break;
			
		}
		
		cout<<"ingrese dni: "<<endl;
		cin>>arreglo[x].dni;
		
		cout<<"ingrese fecha de cumpleanios: "<<endl;
		cin>>arreglo[x].cumpleanios;
		
		cout<<"ingrese monto total: "<<endl;
		cin>>arreglo[x].montoTotal;
		
		x++;
	}
	
	
	ordenar(arreglo, x);

}
//fin funcion

//b) Informar cuántos clientes cumplen años en cada uno de los 12 meses del año. Utilizar un arreglo
//auxiliar para contabilizarlos.
void cantCumple(Clientes arreglo[], int meses[], int x){
	int mes;
	for(int i=0; i<x; i++){
		mes= (arreglo[i].cumpleanios/100)%100;
		meses[mes]++;
	}
	for(int a=0; a<12; a++){
		cout<<"la cantidad que cumpleanios que hay son: "<<meses[a]<<" en el mes: "<<a+1<<endl;		
	}

}
//c) Informar el nombre del cliente con el mayor monto de compras.
void montoMayor(Clientes arreglo[], int & dimL){
	string aux;
	int maximo= arreglo[0].montoTotal, montoRepetido=0;

		for(int x=0; x<dimL; x++){
			cout<<"entro al for x"<<endl;
			if(maximo<arreglo[x].montoTotal){
				aux= arreglo[x].nombreYapellido;
				maximo = arreglo[x].montoTotal;
				cout<<aux<<endl;
			}
			if(maximo==arreglo[x].montoTotal){
				montoRepetido++;
			}
		}
	cout<<"el nombre del cliente con el mayor monto de compras es: "<<aux<<endl;
	if(montoRepetido!=0){
		cout<<"hay "<<montoRepetido<<" montos repetidos"<<endl;
	}
}

//fin de la funcion


int main(){
	int cantidad=5, ahora=0;
	int arregloMeses[12]={0};
	Clientes arregloClientes[cantidad];
	
	cargarClientes(arregloClientes, ahora);
	
	cout<<cantidad<<endl;
	
	for(int a=0; a<ahora; a++){
		cout << "Nombre y Apellido: " <<arregloClientes[a].nombreYapellido << endl;
		cout << "dni: " <<arregloClientes[a].dni << endl;
		cout<<"ingrese email: "<<arregloClientes[a].email<<endl;
		cout << "cumple: " <<arregloClientes[a].cumpleanios << endl;
		cout << "monto total: " <<arregloClientes[a].montoTotal << endl;
	}
	cout<<endl;
	cantCumple(arregloClientes,arregloMeses, ahora);
	montoMayor(arregloClientes, ahora);
	
	return 0;
}

//ok

//	do{
//		cout<<"ingrese su nombre y apellido: "<<endl;
//		getline(cin>>ws,arreglo[x].nombreYapellido);
////		if(arreglo[x].nombreYapellido=="z"){
////			break;
////		}
////		
//		
//		cout<<"ingrese dni: "<<endl;
//		cin>>arreglo[x].dni;
//		
//		cout<<"ingrese email: "<<endl;
//		cin>>arreglo[x].email;
//		
//		cout<<"ingrese fecha de cumpleanios: "<<endl;
//		cin>>arreglo[x].cumpleanios;
//		
//		cout<<"ingrese monto total: "<<endl;
//		cin>>arreglo[x].montoTotal;
//		
//		x++;
//		
//	}while(arreglo[x].nombreYapellido == "z");



//	do{
//		cout<<"ingrese su nombre y apellido: "<<endl;
//		getline(cin>>ws,arreglo[x].nombreYapellido);
//		
//		cout<<"ingrese dni: "<<endl;
//		cin>>arreglo[x].dni;
//		
//		cout<<"ingrese fecha de cumpleanios: "<<endl;
//		cin>>arreglo[x].cumpleanios;
//		
//		cout<<"ingrese monto total: "<<endl;
//		cin>>arreglo[x].montoTotal;
//		
//		x++;
//	
//	}while(arreglo[x].nombreYapellido!="z");



