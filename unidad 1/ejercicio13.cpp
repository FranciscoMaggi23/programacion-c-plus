//Ejercicio 13.
//Leer una cadena de caracteres de teclado e, independientemente de c�mo ha sido ingresada, convertir la
//primera letra a may�scula y el resto a min�sculas. Considerar que la cadena puede estar vac�a.
//Nota: la funci�n toupper(car�cter) convierte un car�cter a may�scula si �ste es una letra de la A a la Z (si es
//cualquier otro car�cter, incluso letras acentuadas, no hace nada). De la misma forma, tolower(car�cter) convierte
//a min�scula.
//Precondici�n: si la cadena no est� vac�a, el primer car�cter es una letra.
//Ejemplo: si se ingresa la cadena �EsTO ES UNa cadENA de Texto�, el resultado deber�a ser �Esto es una cadena
//de texto�

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








