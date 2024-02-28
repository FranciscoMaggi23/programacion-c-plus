#include<iostream>
using namespace std;
#include<string>

struct Nodo {
    int numero;
    Nodo* siguiente;
};

Nodo* insertar_al_principio(Nodo* inicio, int dato) {
    Nodo* nuevo = new Nodo;
    nuevo->numero = dato;
    nuevo->siguiente = inicio;
    return nuevo;
}

int main() {
    int dato;
    Nodo* nuevo;
    Nodo* inicio = NULL;
    
    cout << "Ingrese un numero: " << endl;
    cin >> dato;
    
    while (dato != 0) {
        inicio = insertar_al_principio(inicio, dato);
        cout << "Ingrese un numero: " << endl;
        cin >> dato;    
    }
    return 0;
}

