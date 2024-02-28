//Escribir un programa el cual lee información de 10 empleados. 
//De cada uno se conoce: su nombre y apellido, su sueldo base, su DNI y la cantidad de horas extras trabajadas (0 si no trabajó ninguna). 
//El monto pagado por hora extra es $150.
//
//A medida que la información es leída se debe informar el sueldo que debe pagarse a cada empleado. 
//Estos datos deben almacenarse en un arreglo.



#include<iostream>
#include <string>
using namespace std;

const int numerodeempleados = 10;
const double montoporhoraextra= 150.0;

//declaramos un registro que se almacenra en el arreglo
struct Empleado{
	string nombre;
	string apellido;
	double sueldobase;
	string dni;
	int horasextratrabajadas; 
	double sueldototal;
};

double calcularelsueldototaldeunempleado(int horasextratrabajadasporunempleado, double sueldobasedeesteempleado)
    {   double pagoporlashorasextras = horasextratrabajadasporunempleado * montoporhoraextra;
        return  sueldobasedeesteempleado+ pagoporlashorasextras;}
    

void cargarlosdatosdelosempleados(Empleado todoslosempleados[]){
	for(int i=0; i<numerodeempleados;i++){
		cout<<"ingrese el nombre del empleado"<<i+1<<":";
		cin>>todoslosempleados[i].nombre;
		
		cout<<"ingrese el apellido del empleado"<<i+1<<":";
		cin>>todoslosempleados[i].apellido;
		
		cout<<"ingrese el sueldo base del empleado"<<i+1<<":";
		cin>>todoslosempleados[i].sueldobase;
		
		cout<<"ingrese el dni del empleado"<<i+1<<":";
		cin>>todoslosempleados[i].dni;
		
		cout<<"ingrese las horas extras trabajadas del empleado"<<i+1<<":";
		cin>>todoslosempleados[i].horasextratrabajadas;
		
		//invoca a la funcion que calcula el sueldo total
		todoslosempleados[i].sueldototal= calcularelsueldototaldeunempleado(todoslosempleados[i].horasextratrabajadas, todoslosempleados[i].sueldobase);
		
		cout<<"el sueldo a pagar al empleado "<<i+1<<"es:$"<<todoslosempleados[i].sueldototal<<"\n\n";
		
	}
}


//La función principal declara el arreglo e invoca a la función que cargará los datos en el
//arreglo.
int main(){
	Empleado todoslosempleados[numerodeempleados];
	cargarlosdatosdelosempleados(todoslosempleados);
	
	return 0;
}
