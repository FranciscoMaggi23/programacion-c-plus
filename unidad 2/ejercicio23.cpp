//Ejercicio 23.
//La universidad posee información histórica sobre los estudiantes (no más de 1000) de una materia
//determinada. De cada uno almacena: nombre y apellido, legajo, cantidad de inasistencias a clase, calificación
//obtenida. Almacenar esta información en un arreglo de structs. Se pide:
//d) Imprimir nombre y apellido de los alumnos que tuvieron más de 5 inasistencias.
//e) Imprimir número de legajo de los alumnos cuya calificación promedio sea mayor o igual a la calificación
//promedio total (requiere calcular un promedio de las calificaciones de todos los alumnos en el listado).
//f) Imprimir el número de legajo de aquellos alumnos que tienen promedio mayor o igual a nueve.
//g) Dado el legajo de un alumno, eliminarlo del listado.
//Nota: analizar si es posible reutilizar código en más de uno de los incisos.


#include<iostream>
using namespace std;

const  int maxEstudiantes=1000;

struct Universidad{
	string nombreYapellido;
	int legajo;
	int inasistencias;
	int calificacion;
};

void cargarDatosDelEstudiante(Universidad arreglo[], int maxEstudiantes, int & cantEstudiantes){
	while(cantEstudiantes<maxEstudiantes){
		
		cout<<"ingrese nombre y apellido: ";
		getline(cin>>ws,arreglo[cantEstudiantes].nombreYapellido);
		
		cout<<"ingrese legajo: ";
		cin>>arreglo[cantEstudiantes].legajo;
		
		cout<<"ingrese cantidad de inasistencias: ";
		cin>>arreglo[cantEstudiantes].inasistencias;
		
		cout<<"ingrese calificacion: ";
		cin>>arreglo[cantEstudiantes].calificacion;
		
		
		cantEstudiantes++;
	}
}

//d) Imprimir nombre y apellido de los alumnos que tuvieron más de 5 inasistencias.

void inasistencias(Universidad arreglo[], int maxEstudiantes, int & cantEstudiantes){
	for(int i=0; i<cantEstudiantes; i++){
		if(arreglo[i].inasistencias>5){
		cout<<"el alumno: "<<arreglo[i].nombreYapellido<<" tiene mas de 5 inasistencias"<<endl;
			
		}
	}
}
//fin de la funcion inasistencias

//e) Imprimir número de legajo de los alumnos cuya calificación promedio sea mayor o igual a la calificación
//promedio total (requiere calcular un promedio de las calificaciones de todos los alumnos en el listado).
void numeroLegajo(Universidad arreglo[],int maxEstudiantes, int & cantEstudiantes){
	float suma; 
	float promedioTotal;
	for(int i=0; i<cantEstudiantes; i++){
		suma+= arreglo[i].calificacion;
	}
	promedioTotal = suma/cantEstudiantes;
	
	
	for(int i=0; i<cantEstudiantes; i++){
		if(arreglo[i].calificacion>=promedioTotal){
		cout<<"el numero de legajo: "<<arreglo[i].legajo<<" tiene una calificacion mayor o igual al promedio "<<endl;
			
		}
	}
}
//fin de funcion legajo

//f) Imprimir el número de legajo de aquellos alumnos que tienen promedio mayor o igual a nueve.
void mayorIgual9(Universidad arreglo[],int maxEstudiantes, int & cantEstudiantes){
	int suma; 
	for(int i=0; i<cantEstudiantes; i++){
		suma+= arreglo[i].calificacion;
	}	
	
	for(int i=0; i<cantEstudiantes; i++){
		if(arreglo[i].calificacion>=9){
		cout<<"el numero de legajo: "<<arreglo[i].legajo<<" tiene una calificacion mayor o igual a 9 "<<endl;
			
		}
	}
}
//fin de la funcion mayorigual9

//g) Dado el legajo de un alumno, eliminarlo del listado.
void eliminarAlumno(Universidad arreglo[], int & cantEstudiantes){
	int eliminar;
	
	cout<<"ingrese el numero de legajo a eliminar: ";
	cin>>eliminar;
	int i=0;
	while(arreglo[i].legajo!=eliminar){
		i++;
	}
	for(int x=i; x<cantEstudiantes-1; x++){
		arreglo[x]= arreglo[x+1];
	}
	cantEstudiantes--;
}
//fin de la funcion eliminar alumnno

int main(){
	int cantEstudiantes=0;
	Universidad infoEstudiantes[maxEstudiantes];
	
	cargarDatosDelEstudiante(infoEstudiantes,maxEstudiantes,cantEstudiantes);
	inasistencias(infoEstudiantes,maxEstudiantes,cantEstudiantes);
	numeroLegajo(infoEstudiantes,maxEstudiantes,cantEstudiantes);
	mayorIgual9(infoEstudiantes,maxEstudiantes,cantEstudiantes);
	eliminarAlumno(infoEstudiantes,cantEstudiantes);
	
	for(int i=0; i<cantEstudiantes; i++){
		cout<<"el alumno: "<<infoEstudiantes[i].nombreYapellido; //imprime los alumnos que quedan luego de eliminar alumno
	}
		
	return 0;
}

//ok
