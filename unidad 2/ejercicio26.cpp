//Ejercicio 26.
//Escribir un programa para gestionar las sucursales de una empresa.
//a) Almacenar en un arreglo (máximo 2000 elementos) los datos de los empleados: legajo, nombre y DNI.
//En otro arreglo (máximo 20 elementos) almacenar la información de las sucursales: nombre de la
//sucursal y legajo del encargado. Cada vez que se ingrese un legajo del encargado de una sucursal, se
//debe validar si corresponde a un empleado existente. Si no existe, dejar al usuario en un bucle hasta
//que ingrese un número de legajo existente.
//b) Dado el legajo de un empleado, informar su nombre.
//c) Imprimir un listado de sucursales, mostrando nombre de sucursal y nombre del empleado encargado.
//Nota: analizar si es posible reutilizar código en más de uno de los incisos

#include<iostream>
using namespace std;

const int maxEmpleados=2, maxSucursales=1;

struct Empleados{
	int legajo;
	string nombre;
	int dni;
};

struct Sucursales{
	string nombreSucursal;
	int legajoEnc;
};

//c) Imprimir un listado de sucursales, mostrando nombre de sucursal y nombre del empleado encargado.
//Nota: analizar si es posible reutilizar código en más de uno de los incisos

void imprimirSucYEnc(Sucursales arreglo[], int dimlS){
	for(int i=0; i<dimlS; i++){
		cout<<"el nombre de la sucursal es: "<<arreglo[i].nombreSucursal<<endl;
		cout<<"el nombre del encargado es: "<<arreglo[i].legajoEnc<<endl;
	}
}




//b) Dado el legajo de un empleado, informar su nombre.
 void informarNombre(Empleados arreglo[], int dimL, int legajo){
 	bool verificado=false;
 	for(int i=0; i<dimL; i++){
 		if(arreglo[i].legajo== legajo){
 			cout<<"el nombre del lehajo ingresado es: "<<arreglo[i].nombre<<endl;
 			verificado=true;
 		}
 	}
 	if(!verificado){
 		cout<<"no se encontro la persona con ese legajo";
 	}
 }
//fin



//Cada vez que se ingrese un legajo del encargado de una sucursal, se
//debe validar si corresponde a un empleado existente. Si no existe, dejar al usuario en un bucle hasta
//que ingrese un número de legajo existente.
bool validarEncargado(Empleados arregloE[], Sucursales arregloS[], int & dimL, int & dimlS){
	for(int i=0; i<dimlS; i++){
		bool respuesta=false;
		do{
		cout<<"ingrese legajo del encargado: "<<endl;
		cin>>arregloS[i].legajoEnc;
		
		
		for(int e=0; e<dimL; e++){
			if(arregloS[i].legajoEnc==arregloE[e].legajo){
				respuesta=true;
				break;
			}
		}
		
		if(!respuesta){
			cout<<"ingrese legajo valido "<<endl;
		}
	}while(!respuesta);
	}
	return true;
}
//fin

//cargar arreglo

void cargarArreglos(Empleados arregloE[], Sucursales arregloS[], int & dimL, int & dimlS){
	bool r=false;
	while(dimL<maxEmpleados){
		cout<<"ingrese legajo: "<<endl;
		cin>>arregloE[dimL].legajo;
		
		cout<<"ingrese su nombre: "<<endl;
		cin>>arregloE[dimL].nombre;
		
		cout<<"ingrese dni: "<<endl;
		cin>>arregloE[dimL].dni;
		
		dimL++;
	}
	while(dimlS<maxSucursales){
		cout<<"ingrese su nombre de la sucursal: "<<endl;
		cin>>arregloS[dimlS].nombreSucursal;
		
		dimlS++;
		
		validarEncargado(arregloE,arregloS,dimL,dimlS);
		
			
	}
}
//fin


int main(){
	int dimL=0, dimlS=0, legajo;
	Empleados arregloEmpleados[maxEmpleados];
	Sucursales arregloSucursales[maxSucursales];
	
	
	cargarArreglos(arregloEmpleados,arregloSucursales,dimL,dimlS);
	
	cout<<"ingrese legajo a consultar: ";
	cin>>legajo;
	informarNombre(arregloEmpleados,dimL,legajo);
	
	imprimirSucYEnc(arregloSucursales,dimlS);
	
	return 0;
}


