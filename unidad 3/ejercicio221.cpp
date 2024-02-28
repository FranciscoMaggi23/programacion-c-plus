//Ejercicio 21.
//Cargar de teclado, en una lista circular, los datos de los jugadores de un juego de rol de mesa, para administrar
//sus turnos. De cada uno se almacenará: nombre de jugador, puntaje, raza de su personaje (dato numérico,
//donde 1 es mago, 2 es guerrero, 3 es elfo).
//a) Se debe permitir cargar, como máximo, 10 jugadores, insertando cada nuevo jugador al final. Validar
//también que la raza sólo sea 1, 2 ó 3, dejando al usuario en un bucle hasta que ingrese una raza válida.
//b) Dado el nombre de un jugador, indicar las características de la raza de su personaje: si es 1 (mago) se
//debe imprimir "1 punto de sanación por cada 5 de daño recibido"; si es 2 (guerrero) se debe imprimir
//"20% más de daño infligido"; si es 3 (elfo) se debe imprimir "capacidad de resucitar a un compañero a
//cambio de 200 puntos".
//c) Dada una raza y una cantidad de puntos de penalidad, restar del puntaje la cantidad dada, para todos
//los jugadores de esa raza.
//d) Imprimir los nombres de todos los jugadores, junto a su puntaje.


#include<iostream>
using namespace std;


struct Nodo{
	string nombre;
	int puntaje;
	int raza;
	Nodo* siguiente;
};
//c) Dada una raza y una cantidad de puntos de penalidad, restar del puntaje la cantidad dada, para todos
//los jugadores de esa raza.
Nodo* restarPuntaje(Nodo* lista, int raza, int penalidad){
		Nodo* aux=lista->siguiente;
		while(aux!=lista){
			if(aux->raza==raza){
				aux->puntaje-= penalidad; 
			}
			aux=aux->siguiente;
		}
	return lista;
}

//b) Dado el nombre de un jugador, indicar las características de la raza de su personaje: si es 1 (mago) se
//debe imprimir "1 punto de sanación por cada 5 de daño recibido"; si es 2 (guerrero) se debe imprimir
//"20% más de daño infligido"; si es 3 (elfo) se debe imprimir "capacidad de resucitar a un compañero a
//cambio de 200 puntos".

void caracteristicasDeLaRaza(Nodo* lista, string nombre){
	Nodo* aux=lista->siguiente;
	 while (aux != lista) {
	        if (aux->nombre == nombre) {
	            switch (aux->raza) {
	                case 1:
	                    cout << "1 punto de sanación por cada 5 de daño recibido" << endl;
	                    break;
	                case 2:
	                    cout << "20% mas de daño infligido" << endl;
	                    break;
	                case 3:
	                    cout << "capacidad de resucitar a un compañero a cambio de 200 puntos" << endl;
	                    break;
	            }
	        }
	        aux = aux->siguiente;
	    }
}


//a) Se debe permitir cargar, como máximo, 10 jugadores, insertando cada nuevo jugador al final. Validar
//también que la raza sólo sea 1, 2 ó 3, dejando al usuario en un bucle hasta que ingrese una raza válida.
Nodo* cargarAlFinal(Nodo* lista, string nombre, int puntaje, int raza){
	Nodo* nuevo= new Nodo;
	nuevo->nombre= nombre;
	nuevo->puntaje=puntaje;
	nuevo->raza=raza;
	nuevo->siguiente= NULL;
	
	if(lista==NULL){
		nuevo->siguiente=nuevo;
		return nuevo; 
	}else{
		nuevo->siguiente= lista->siguiente;
		lista->siguiente=nuevo;
		lista=nuevo;
		return lista;
	}
	
}




int main(){
	Nodo* lista=NULL;
	int maxJugadores=0, raza, puntaje;
	string nombre;
	
	while(maxJugadores<3){
		cout<<"ingrese nombre: "<<endl;
		getline(cin>>ws,nombre);
		
		cout<<"ingrese puntaje: "<<endl;
		cin>>puntaje;
		do{
			cout<<"ingrese raza (1 es mago, 2 es guerrero, 3 es elfo): "<<endl;
			cin>>raza;
		}while(raza!=1 && raza!=2 && raza!=3);
		
		lista= cargarAlFinal(lista, nombre, puntaje, raza);
		
		maxJugadores++;
	}
	string nombreAConsultar;
	
	cout<<"ingrese nombre para consultar su raza: "<<endl;
	getline(cin>>ws,nombreAConsultar);
	
	caracteristicasDeLaRaza(lista, nombreAConsultar);
	
	int razaAConsultar, penalidad;
	
	do{
		cout<<"ingrese raza a consultar para bajar puntaje (1 es mago, 2 es guerrero, 3 es elfo): "<<endl;
		cin>>razaAConsultar;
	}while(razaAConsultar!=1 && razaAConsultar!=2 && razaAConsultar!=3);
	
	cout<<"ingrese penalidad de puntos: "<<endl;
	cin>>penalidad;
	 
	lista=restarPuntaje(lista,  razaAConsultar, penalidad);
	
	return 0;
}
//ok



//correcion de chat gpt:
//	En la función restarPuntaje:
//
//No necesitas verificar si la lista está vacía antes de realizar el bucle, ya que si la lista es NULL, el bucle simplemente no se ejecutará. Puedes eliminar esa verificación.
//El bucle do-while no es necesario, ya que es probable que quieras realizar la operación incluso si la lista tiene solo un elemento. Puedes cambiarlo a un bucle while.
//En la condición del bucle while, debes comparar con razaAConsultar en lugar de raza.
//En la función caracteristicasDeLaRaza:
//
//Similar a la función restarPuntaje, no necesitas verificar si la lista está vacía antes de realizar el bucle. Puedes eliminar esa verificación.
//Al igual que en la función restarPuntaje, puedes cambiar el bucle do-while a un bucle while.
//En el bucle principal:
//
//En la condición del bucle principal, parece que estás usando la variable raza en lugar de razaAConsultar. Asegúrate de usar la variable correcta.

