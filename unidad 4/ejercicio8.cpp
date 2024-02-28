//Ejercicio 8.
//Escribir una función recursiva que reciba un string y lo retorne con sus caracteres invertidos.
//Nota: Podría ser útil la función substr que obtiene un substring a partir de un string.


#include<iostream>
using namespace std;


string invertir(string str){
	 if (str.length() <= 1) {
        return str;
    } else {
        // Caso general: invertir el substring que excluye el primer y último carácter
        return str.substr(str.length() - 1, 1) + invertir(str.substr(1, str.length() - 2)) + str.substr(0, 1);

//        str.substr(str.length() - 1, 1): Esta parte obtiene el último carácter del string str.
//str.length() - 1 calcula la posición del último carácter en el string.
//1 indica que queremos un solo carácter.
//En resumen, str.substr(str.length() - 1, 1) devuelve el último carácter del string.
//invertirString(str.substr(1, str.length() - 2)): Esta parte es una llamada recursiva que invierte el substring que excluye el primer y último carácter del string str.
//
//str.substr(1, str.length() - 2) toma el substring que comienza desde el segundo carácter hasta el penúltimo carácter de str.
//Luego, se llama recursivamente a la función invertirString para invertir este substring.
//str.substr(0, 1): Esta parte obtiene el primer carácter del string str.
//
//str.substr(0, 1) devuelve el substring que comienza desde el primer carácter y tiene una longitud de 1.
    }
}


int main(){
	string a;
	
	cout<<invertir("hola");
	return 0;
}

