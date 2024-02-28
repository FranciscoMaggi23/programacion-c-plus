//metodos cadena
#include<iostream>
#include<string>
using namespace std;


int main(){
	string cadena="hola";
	int numero, numero1;
	cadena.erase(desde,cantidad): //desde el carácter señalado,
//elimina la cantidad de caracteres indicada, modificando al string
//original.
        cadena.length();//devuelve la longitud de la cadena
	cadena.at();// nos devuelve el caracter segun el indice que le indiquemos at(indice)
	cadena.size();//nos devuelve el tamaño de la cadena igual que en length()
	cadena.compare();//compara dos cadenas y devuelve un nunero positivo, negativo o 0 si la cadena es mayor menor o igual
	cadena.empty();//nos devuelve verdadero o falso si esta vacia o no la cadena
	cadena.erase();//lleva dos parametros erase(ind,n), nos posicionamos en el indice y borramos "n" caracteres hacia adelante
	cadena.find();//find(str,ind)o find(str) lleva como parametro el tipo de dato y devuelve la primera posision donde se encuentra el dato,
//	si le agregamos un indice , empieza a buscar desde el indice
	cadena.insert();//insert(ind,str) va a insertar una cadena
	// dentro de otra en el indice que le pasamos como parametro
	cadena.replace();//replace(ind,n,objeto str) remplaza el objeto string 
	//en la cadena en el indice y borra "n" caracteres
	cadena.substr();//substr(ind,n) nos devuelve una subcadena de la cadena
//	 principal a partir del indice teniendo en cuenta los "n" ej: .substr(5,5) de la 
//posicion 5 abanzara 5 posiciones mas y las imprimira 
//	 caracteres que le sigen
	strupr(cadena);//convierte la cadena a mayuscula
	strlwr(cadena);//convierte una cadena a minuscula
	numero1 = atoi(cadena)//convierte una cadena en un numero entero "123"->123
	//hay que agregar la libreria #include<strlib.h>
	numero = atof(cadena)//convierte una cadena en un numero flotante "12,32"->12.32
	//hay que agregar #include<stdlib.h>
	//
	std::string variable=("hola mundo");
	variable.back()= '2'; //accede al ultimo caracter y lo modifica
//	std::cout<<variable;



	return 0;
}

int main(){
	string cadena, nueva;
	int b;
	
	cadena="hola";
	nueva="hola";
	
	b=cadena.compare(nueva);
	cout<<b;
	return 0;
}
