//Ejercicio 3.
//Dados los siguientes punteros a char:
//char* x = new char;
//char* z = x;
//Escribir y ejecutar las instrucciones para hacer lo siguiente:
//a) Almacenar el car�cter 'M' en el espacio de memoria apuntado por x.
//b) Imprimir el car�cter apuntado por x.
//c) Almacenar el car�cter 'P' en el espacio de memoria apuntado por z.
//d) Imprimir el car�cter apuntado por z y luego el apuntado por x.
//�Qu� car�cter crees que imprimir� cada una y por qu�?
//e) Eliminar el dato apuntado por x.
//�Qu� suceder�a si a continuaci�n se intentara imprimir *z y por qu�?
//f) Obtener un nuevo espacio de memoria para un char, almacenando su direcci�n en x.
//g) Permitir al usuario ingresar un char por teclado y almacenarlo en el nuevo espacio apuntado por x.
//h) Si el car�cter ingresado por el usuario en el inciso anterior es '*', imprimir "asterisco".


#include<iostream>
using namespace std;

int main(){
	char* x = new char;
	char* z = x;
//a) Almacenar el car�cter 'M' en el espacio de memoria apuntado por x.
//b) Imprimir el car�cter apuntado por x.
	*x='M';
	cout<<*x<<endl;
//c) Almacenar el car�cter 'P' en el espacio de memoria apuntado por z.
//d) Imprimir el car�cter apuntado por z y luego el apuntado por x.
	*z ='P';
	cout<<*z<<endl;
	cout<<*x<<endl;
//e) Eliminar el dato apuntado por x.
	delete x;
	//�Qu� suceder�a si a continuaci�n se intentara imprimir *z y por qu�?
	cout<<*z<<endl;// imprime un - pq la memoria fue liberada en delete x y z apunta a x
//f) Obtener un nuevo espacio de memoria para un char, almacenando su direcci�n en x.
	x = new char;
//g) Permitir al usuario ingresar un char por teclado y almacenarlo en el nuevo espacio apuntado por x.
	cout<<"ingrese un char: "<<endl;
	cin>>*x;
//h) Si el car�cter ingresado por el usuario en el inciso anterior es '*', imprimir "asterisco".
	if(*x=='*'){
		cout<<"asterisco";
	}	

	return 0;
}

