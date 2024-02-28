//Ejercicio 8.
//Escribir una funci�n recursiva que reciba un string y lo retorne con sus caracteres invertidos.
//Nota: Podr�a ser �til la funci�n substr que obtiene un substring a partir de un string.


#include<iostream>
using namespace std;


string invertir(string str){
	 if (str.length() <= 1) {
        return str;
    } else {
        // Caso general: invertir el substring que excluye el primer y �ltimo car�cter
        return str.substr(str.length() - 1, 1) + invertir(str.substr(1, str.length() - 2)) + str.substr(0, 1);

//        str.substr(str.length() - 1, 1): Esta parte obtiene el �ltimo car�cter del string str.
//str.length() - 1 calcula la posici�n del �ltimo car�cter en el string.
//1 indica que queremos un solo car�cter.
//En resumen, str.substr(str.length() - 1, 1) devuelve el �ltimo car�cter del string.
//invertirString(str.substr(1, str.length() - 2)): Esta parte es una llamada recursiva que invierte el substring que excluye el primer y �ltimo car�cter del string str.
//
//str.substr(1, str.length() - 2) toma el substring que comienza desde el segundo car�cter hasta el pen�ltimo car�cter de str.
//Luego, se llama recursivamente a la funci�n invertirString para invertir este substring.
//str.substr(0, 1): Esta parte obtiene el primer car�cter del string str.
//
//str.substr(0, 1) devuelve el substring que comienza desde el primer car�cter y tiene una longitud de 1.
    }
}


int main(){
	string a;
	
	cout<<invertir("hola");
	return 0;
}

