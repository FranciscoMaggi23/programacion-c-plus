//Ejercicio 14.
//Generar una lista con los datos personales de los alumnos de un colegio (legajo, apellido y nombre, DNI) y las
//notas de tres materias: matemática, literatura y geografía (para cada alumno se cargarán las tres materias). Las
//notas pueden ir de 1 a 10 y se debe validar que el usuario no ingrese notas incorrectas, volviendo a pedir una
//nueva nota cada vez que ingrese una incorrecta, hasta que ingrese un valor en el rango indicado. Se pide
//informar la cantidad de alumnos que aprobaron las tres materias (se aprueba con 7) y el porcentaje que
//representan los aprobados sobre el total de alumnos


#include<iostream>
using namespace std;

const int cantAlumnos=2;

struct Alumno{
	int legajo;
	string NombreYapellido;
	int dni;
	int matematicas, geografia, literatura;
	Alumno* siguiente;
 
}; 

void imprimirlista(Alumno* lista){
	for(Alumno* i=lista; i!=NULL; i= i->siguiente){
		cout<<"legajo ordenado: "<<i->legajo<<"; ";
	}
}

Alumno* insertarAlumno(Alumno*& lista, int legajo, string NombreYapellido, int DNI, int matematica, int literatura, int geografia){
	Alumno* nuevo = new Alumno;
    nuevo->legajo = legajo;
    nuevo->NombreYapellido= NombreYapellido;
    nuevo->dni = DNI;
    nuevo->matematicas = matematica;
    nuevo->literatura = literatura;
    nuevo->geografia = geografia;
    nuevo->siguiente = NULL;
    
    if(lista==NULL || nuevo->legajo < lista->legajo){
    	nuevo->siguiente = lista;
		lista = nuevo;

    }else{
    	Alumno* aux=lista;
    	while(aux->siguiente != NULL && aux->siguiente->legajo < nuevo->legajo){
    		aux=aux->siguiente;
    	}
    	nuevo->siguiente= aux->siguiente;
    	aux->siguiente = nuevo;
    }
    
    
    
    return lista;
}


int validarNota(){
	int nota;
	do{
		cout<<"Ingrese una nota (entre 1 y 10): "<<endl;
		cin>>nota;
	}while(nota<1 || nota>11);
	return nota;
}


int main(){
	Alumno *lista=NULL;
	int contador=0;
	float porcentajeAprobados, cantidadAprobados=0;
	int legajo, DNI, matematica, literatura, geografia;
    string NombreYapellido;
	
	while(contador<cantAlumnos){
        cout << "Legajo: "<< endl;
        cin >> legajo;
		cout<<"ingrese nombre y apellido: "<<endl;
		getline(cin>>ws,NombreYapellido);        
        cout << "DNI: "<< endl;
        cin >> DNI;
        cout << "Notas: " << endl;
        matematica =validarNota();
        literatura = validarNota();
        geografia = validarNota();
        
        if (matematica >= 7 && literatura >= 7 && geografia >= 7) {
            cantidadAprobados++;
        }
        lista=insertarAlumno(lista, legajo, NombreYapellido, DNI, matematica, literatura, geografia);

        contador++;
	}
	imprimirlista(lista);
	cout<<"cantidad de aprobados: "<<cantidadAprobados<<endl;
	
    porcentajeAprobados = ((cantidadAprobados) / cantAlumnos) * 100;
	
	cout<<"el porcentaje de aprobados: "<<porcentajeAprobados<<endl;
	
	return 0;
}



//		cout<<"ingrese numero de legajo: "<<endl;
//		cin>>Alumno.legajo;
//		
//		cout<<"ingrese nombre y apellido: "<<endl;
//		getline(cin>>ws,Alumno.NombreYapellido);
//		
//		cout<<"ingrese dni: "<<endl;
//		cin>>Alumno.dni;
//		
//		cout<<"ingrese nota de matematicas: "<<endl;
//		cin>>Alumno.matematicas;
//		
//		cout<<"ingrese nota de geografia: "<<endl;
//		cin>>Alumno.geografia;
//		
//		cout<<"ingrese nota de literatura: "<<endl;
//		cin>>Alumno.literatura;
