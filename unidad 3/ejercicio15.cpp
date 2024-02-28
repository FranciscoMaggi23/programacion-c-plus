//Ejercicio 15.
//"The Golden Gate Bridge" es el puente más famoso de la ciudad de San Francisco (California). Cuenta con una
//longitud aproximada de 1280 metros y posee tres radares de toma de velocidad. Por cada móvil que se
//desplaza por las vías principales se registra la siguiente información: sensor que lo captó (puede ser "norte",
//"sur" o "medio"), patente (no tiene un formato único ya que difiere de un estado a otro y pueden transitar
//autos extranjeros, aunque se sabe que están formadas sólo por letras y números) y velocidad en km/h.
//A. Cargar las lecturas que hacen los sensores en una lista enlazada simple ordenando por patente y, para
//la misma patente, ordenando por sensor (ya que un mismo automóvil puede ser captado por más de un
//sensor). Finaliza con la patente "aaa99", que no se debe ingresar.
//B. Dada la lista generada en el inciso anterior, armar tres listas: una por cada sensor (el orden de los
//elementos tiene que ser el mismo que en la lista original). Luego, imprimir las tres listas.

//
//#include<iostream>
//using namespace std;
//
//struct informacion{
//	string sensor;
//	string patente;
//	int velocidad;
//	informacion* siguiente;
//};
//
//
//
//
//void imprimirlista(informacion* lista){
//	for(informacion* i=lista; i!=NULL; i= i->siguiente){
//		cout<<"patente ordenada: "<<i->patente<<";  sensor: "<<i->sensor;
//	}
//}
//
//informacion* insertarOrdenado(informacion* lista, informacion* nuevo){
//	
//	if(lista==NULL || nuevo->patente < lista->patente){
//		nuevo->siguiente= lista;
//		lista=nuevo;	
//	}else{
//		informacion* aux=lista;
//		while(aux->siguiente!=NULL && aux->siguiente->patente < nuevo->patente){
//			aux=aux->siguiente;
//		}
//		
//		if(aux->siguiente != NULL && aux->patente == nuevo->patente){
//			if(aux->siguiente->sensor < nuevo->sensor){
//				nuevo->siguiente=aux->siguiente;
//				aux->siguiente= nuevo;
//			}
//		}else{
//			nuevo->siguiente=aux->siguiente;
//			aux->siguiente= nuevo;
//		}
//	}
//	return lista;
//}
//
//informacion* cargardatos(informacion* lista,string patente, string sensor, int velocidad){
//	informacion* nuevo= new informacion;
//	nuevo->sensor=sensor;
//	nuevo->patente=patente;
//	nuevo->velocidad= velocidad;
//	nuevo->siguiente= NULL;
//	
//	return nuevo;
//}
//
//void armarlistas(informacion* lista, informacion* norte, informacion* sur, informacion* medio){
//	for(informacion* i=lista; i!= NULL; i= i->siguiente){
//		if(i->sensor=="norte"){
//			norte=insertarOrdenado(norte,i);
//		}
//		if(i->sensor=="sur"){
//			sur=insertarOrdenado(sur,i);
//		}
//		if(i->sensor=="medio"){
//			medio=insertarOrdenado(medio,i);
//		}
//	}
//}
//
//
//
//
//int main(){
//	informacion* lista=NULL, *norte, *sur, *medio;
//	string sensor, patente;
//	int velocidad;
//	
//	cout<<"ingrese patente: "<<endl;
//	cin>>patente;
//	
//	while(patente != "aaa99"){
//		do{
//			cout<<"ingrese sensor: "<<endl;
//			cin>>sensor;
//		}while(sensor != "norte" && sensor != "sur" && sensor != "medio");
//		
//		
//		cout<<"ingrese velocidad: "<<endl;
//		cin>>velocidad;
//		informacion* nuevo;
//		nuevo=cargardatos(lista,patente, sensor, velocidad);
//		lista=insertarOrdenado(lista, nuevo);
//		
//		cout<<"ingrese patente: "<<endl;
//		cin>>patente;
//	}
//	imprimirlista(lista);
//	
//	armarlistas(lista,norte, sur, medio);
//	
//	imprimirlista(norte);
//
//	
//	return 0;
//}







#include<iostream>
using namespace std;

struct informacion{
	string sensor;
	string patente;
	int velocidad;
	informacion* siguiente;
};

void imprimirlista(informacion* lista){
    for(informacion* i=lista; i!=NULL; i= i->siguiente){
        cout<<"patente ordenada: "<<i->patente<<";  sensor: "<<i->sensor<<endl;
    }
}
//estudiar bien este caso
informacion* insertarOrdenado(informacion* lista, informacion* nuevo){
    if (lista == NULL || nuevo->patente < lista->patente) {
        nuevo->siguiente = lista;
        lista = nuevo;
    } else if (nuevo->patente == lista->patente) {
        if (nuevo->sensor < lista->sensor) {
            nuevo->siguiente = lista;
            lista = nuevo;
        } else {
            informacion* aux = lista;
            while (aux->siguiente != NULL && aux->siguiente->patente == nuevo->patente && aux->siguiente->sensor < nuevo->sensor) {
                aux = aux->siguiente;
            }
            nuevo->siguiente = aux->siguiente;
            aux->siguiente = nuevo;
        }
    } else {
        informacion* aux = lista;
        while (aux->siguiente != NULL && aux->siguiente->patente < nuevo->patente) {
            aux = aux->siguiente;
        }
        nuevo->siguiente = aux->siguiente;
        aux->siguiente = nuevo;
    }
    
    return lista;
}

informacion* cargardatos(informacion* lista,string patente, string sensor, int velocidad){
    informacion* nuevo= new informacion;
    nuevo->sensor=sensor;
    nuevo->patente=patente;
    nuevo->velocidad= velocidad;
    nuevo->siguiente= NULL;
    return nuevo;
}

void armarlistas(informacion* lista, informacion* norte, informacion* sur, informacion* medio){
    for(informacion* i=lista; i!= NULL; i= i->siguiente){
        if(i->sensor=="norte"){
            norte = insertarOrdenado(norte, i);
        } else if(i->sensor=="sur"){
            sur = insertarOrdenado(sur, i);
        } else if(i->sensor=="medio"){
            medio = insertarOrdenado(medio, i);
        }
    }
}

int main(){
    informacion* lista=NULL, *norte = NULL, *sur = NULL, *medio = NULL;
    string sensor, patente;
    int velocidad;
    cout<<"ingrese patente: "<<endl;
    cin>>patente;
    while(patente != "aaa99"){
        do{
            cout<<"ingrese sensor: "<<endl;
            cin>>sensor;
        } while(sensor != "norte" && sensor != "sur" && sensor != "medio");
        cout<<"ingrese velocidad: "<<endl;
        cin>>velocidad;
        informacion* nuevo = cargardatos(lista, patente, sensor, velocidad);
        lista = insertarOrdenado(lista, nuevo);
        cout<<"ingrese patente: "<<endl;
        cin>>patente;
    }
    cout<<"Lista original:"<<endl;
    imprimirlista(lista);
    armarlistas(lista, norte, sur, medio);
    cout<<"Lista norte:"<<endl;
    imprimirlista(norte);
    cout<<"Lista sur:"<<endl;
    imprimirlista(sur);
    cout<<"Lista medio:"<<endl;
    imprimirlista(medio);
    return 0;
}

