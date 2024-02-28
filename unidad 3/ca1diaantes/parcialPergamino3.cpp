//dada una lista enlazada simple de caracteres, escribir una funcion que reciba la lista y un caracter e informe la cantidad de ocurrencias del mismo. 
//no es necesario implementar la carga de la lista, solo la funcion, se asume que la losta que llega ya se encuentra cargada
int ocurrencias(Nodo* lista, char a){
	int contador=0;
	for(Nodo* i=lista; i!=NULL; i=i->siguiente){
		if(i->dato=a){
			contador++;
		}
	}
	return contador
}


supocicion mia de un  tipo de ejercicio:

//#include <iostream>
//#include <string>
//
//struct Nodo {
//    std::string dato;
//    Nodo* siguiente;
//};
//
//int ocurrencias(Nodo* lista, char c) {
//    int contador = 0;
//
//    for (Nodo* i = lista; i != NULL; i = i->siguiente) {
//        for (int a=0; a<i->dato.length();a++) {
//            if (c == i->dato[a]) {
//                contador++;
//            }
//        }
//    }
//
//    return contador;
//}
//
//int main() {
//    // Ejemplo de uso
//    Nodo* lista = new Nodo{"apple", NULL};
//    lista->siguiente = new Nodo{"banana", NULL};
//    lista->siguiente->siguiente = new Nodo{"cherry", NULL};
//
//    char caracter = 'a';
//    int resultado = ocurrencias(lista, caracter);
//
//    std::cout << "La cantidad de ocurrencias de '" << caracter << "' es: " << resultado << std::endl;
//
//    // Liberar memoria, se debe hacer adecuadamente en una implementación real
//    delete lista->siguiente->siguiente;
//    delete lista->siguiente;
//    delete lista;
//
//    return 0;
//}

