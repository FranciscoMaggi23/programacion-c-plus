//Ejercicio 20.
//Crear una lista circular con los datos de los procesos en ejecuci�n en un sistema operativo, donde cada uno
//consta de: PID (n�mero de proceso), nombre de usuario, segundos que se ejecut�, fecha en que se empez� a
//ejecutar (num�rica, formato DDMM). Crear la lista insertando al principio.
//a) Informar el PID del proceso que m�s segundos se ejecut�.
//b) Eliminar el proceso que se empez� a ejecutar el 14 de marzo (si hay m�s de uno, s�lo el primero).
//c) Aumentar en 2 la cantidad de segundos que se ejecut� el proceso con PID 61, si existe.
//d) Listar todos los procesos del usuario "root" (imprimiendo el PID y segundos de ejecuci�n de cada uno).


#include<iostream>
using namespace std;


struct Nodo{
	int pid;
	string nombreDeUsuario;
	int segundos;
	int fecha;
	Nodo* siguiente;
};

//d) Listar todos los procesos del usuario "root" (imprimiendo el PID y segundos de ejecuci�n de cada uno).
void imprimirUsuarioRoot(Nodo* lista){
		if(lista!=NULL){
			Nodo* aux=lista->siguiente;
			do{
				if(aux->nombreDeUsuario=="root"){
					cout<<"datos del usuario root: "<<endl;
					cout << "PID: " << aux->pid << ", Segundos: " << aux->segundos <<", fecha: "<<aux->fecha<< endl;
				}
				aux=aux->siguiente;
			}while(aux!=lista->siguiente);
	}
}


//c) Aumentar en 2 la cantidad de segundos que se ejecut� el proceso con PID 61, si existe.
Nodo* aumentarSegundos(Nodo* lista){
	if(lista!=NULL){
		Nodo* aux=lista->siguiente;
		do{
			if(aux->pid==61){
				lista->segundos+=2;
				return lista;
			}
			aux=aux->siguiente;
		}while(aux!=lista->siguiente);
	}
	cout<<"no se encontro el pid con valor 61"<<endl;
	return lista;
}

//b) Eliminar el proceso que se empez� a ejecutar el 14 de marzo (si hay m�s de uno, s�lo el primero).
Nodo* eliminarProceso(Nodo* lista, int fecha){
	if(lista!=NULL){
		Nodo* aux=lista;
		Nodo* aEliminar;
		do{
			if(aux->fecha==fecha){
				aEliminar=aux->siguiente;
				if(aEliminar==lista){
					lista=aux;
				}
				aux->siguiente=aEliminar->siguiente;
				delete aEliminar;
				cout<<"proceso eliminado"<<endl;
				break;
			}aux=aux->siguiente;
		}while(aux!=lista);
	}
	return lista;
		
//		Nodo* anterior=lista;
//		Nodo* actual=lista->siguiente;
//		if(lista->fecha==fecha){
//			lista=actual;
//			delete anterior;
//			return lista;
//		}else{
//			while(actual!=lista){
//				if(actual->fecha==fecha){
//					anterior->siguiente=actual->siguiente;
//					delete actual;
//					return lista;
//				}
//				anterior=actual;
//				actual=actual->siguiente;
//			}
//		}
}

//a) Informar el PID del proceso que m�s segundos se ejecut�.
void informarPIDdemassegundos(Nodo* lista){
	int pidMasLargo=0;
	if(lista!=NULL){
		Nodo* aux=lista;
		do{
			if(aux->segundos>pidMasLargo){
				pidMasLargo=aux->segundos;
			}
			aux=aux->siguiente;
		}while(aux!=lista);
	}
	cout<<"el pid que mas segundos se ejecuto es: "<<pidMasLargo<<endl;
}

Nodo* cargardatosalprincipio(Nodo* lista, int pid, int fecha, int segundos, string usuario){
	Nodo* nuevo= new Nodo;
	nuevo->pid=pid;
	nuevo->segundos=segundos;
	nuevo->fecha= fecha;
	nuevo->nombreDeUsuario=usuario;
	nuevo->siguiente=NULL;
	
	if(lista==NULL){
		nuevo->siguiente=nuevo;
		return nuevo;
	}else{
		nuevo->siguiente=lista->siguiente;
		lista->siguiente=nuevo;
		return lista;
	}
}


int main(){
	Nodo* lista=NULL;
	int pid, fecha, segundos;
	string nombreDeUsuario;
	
	for(int i=0; i<2; i++){
		cout<<"ingrese PID : "<<endl;
		cin>>pid;
		
		cout<<"ingrese nombre de usuario : "<<endl;
		getline(cin>>ws,nombreDeUsuario);
		
		cout<<"ingrese segundos : "<<endl;
		cin>>segundos;
		
		cout<<"ingrese fecha (formato DDMM) : "<<endl;
		cin>>fecha;
		
		lista=cargardatosalprincipio(lista,pid,fecha,segundos,nombreDeUsuario);
	}
	informarPIDdemassegundos(lista);
	
	int fechaAeliminar=1403;
	
	lista=eliminarProceso(lista,fechaAeliminar);
	lista=aumentarSegundos(lista);
	imprimirUsuarioRoot(lista);
	
	return 0;
}

//ok
