//ejercicio 19

#include<iostream>

using namespace std;



string mayusculas(string cadena) {
 for (int i = 0; i < cadena.length(); i++) {
 cadena[i] = toupper(cadena[i]);
 }
 return cadena;
}
int main() {
 string nombre;
 cout << "Cu�l es tu nombre?: ";
 getline(cin>>ws, nombre);
 nombre = mayusculas(nombre);
 cout << "Hola, " << nombre << "!" << endl;
 return 0;
}

//terminado
