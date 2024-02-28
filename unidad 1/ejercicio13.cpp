//Ejercicio 13.
//Leer una cadena de caracteres de teclado e, independientemente de cómo ha sido ingresada, convertir la
//primera letra a mayúscula y el resto a minúsculas. Considerar que la cadena puede estar vacía.
//Nota: la función toupper(carácter) convierte un carácter a mayúscula si éste es una letra de la A a la Z (si es
//cualquier otro carácter, incluso letras acentuadas, no hace nada). De la misma forma, tolower(carácter) convierte
//a minúscula.
//Precondición: si la cadena no está vacía, el primer carácter es una letra.
//Ejemplo: si se ingresa la cadena “EsTO ES UNa cadENA de Texto”, el resultado debería ser “Esto es una cadena
//de texto”

#include<iostream>
#include<string.h>

using namespace std;

//string convertirMm(string cadena){
//	string nueva;
//	for(int i=0; i<=cadena.length();i++){
//		if(i == cadena.at(1)){
//			nueva = toupper(cadena[i]); 
//		}
//		nueva += tolower(cadena[i]);
//		
//	}
//	
//	return nueva;
//}







int main(){
	string cadena="hOLa", j;
	
//	cout<<cadena.at(3);

	for(int i=0; i<=cadena.length();i++){
		if(cadena[i]==cadena.at(0)){
			j = toupper(cadena[i]);
		}else{
			j += tolower(cadena[i]);
		}
		
	}
	cout<<j;
	
	
//	cout<<"retourn: "<<convertirMm(cadena);
	
	
	return 0;
}








