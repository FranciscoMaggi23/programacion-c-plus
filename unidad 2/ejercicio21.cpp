//Ejercicio 21.
//Escribir un programa que almacene en un arreglo los datos de los alumnos de una escuela luego de finalizado el
//a�o acad�mico. Como m�ximo, puede haber 5000 alumnos. De cada alumno se debe guardar el nombre y la
//calificaci�n obtenida en el primer, segundo y tercer trimestre del a�o acad�mico. Imprimir el listado de
//nombres de alumnos mostrando un mensaje de "APTO" si el alumno supera o iguala la calificaci�n de 5 para
//todas las notas o "NO APTO" si no lo alcanza.
//Utilizar un arreglo como campo del struct para almacenar las tres calificaciones.



#include<iostream>
using namespace std;

const int maxAlumnos=3;

struct Alumno{
	string nombre;
	int calificacionPrimerT;
	int calificacionSegundoT;
	int calificacionTercerT;
	string resultado;
	};


string evaluacionAlumno(int calificacionPrimerT, int calificacionSegundoT, int calificacionTercerT){
	if(calificacionPrimerT>4 and calificacionSegundoT>4 && calificacionTercerT>4){
		return " esta APTO";
	}else{
		return " NO esta APTO";
	}
}


void cargarDatosDelAlumno(Alumno arreglo[maxAlumnos]){
	for(int i=0; i<2; i++){
		cout<<"ingrese nombre: ";
		cin>>arreglo[i].nombre;
		
		cout<<"ingrese calificacion primer trimestre: ";
		cin>>arreglo[i].calificacionPrimerT;
		
		cout<<"ingrese calificacion segundo trimestre: ";
		cin>>arreglo[i].calificacionSegundoT;
		
		cout<<"ingrese calificacion tercer trimestre: ";
		cin>>arreglo[i].calificacionTercerT;
		
		arreglo[i].resultado=evaluacionAlumno(arreglo[i].calificacionPrimerT, arreglo[i].calificacionSegundoT, arreglo[i].calificacionTercerT);
		
		cout<<"el alumno:"<<arreglo[i].nombre<<arreglo[i].resultado<<endl;
	}
}



int main(){
	Alumno arregloAlumnos[maxAlumnos];
	cargarDatosDelAlumno(arregloAlumnos);
	
	return 0;
}

//ok

