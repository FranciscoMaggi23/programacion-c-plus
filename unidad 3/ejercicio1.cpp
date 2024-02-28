//Ejercicio 1.
//Dado el siguiente programa, indicar la salida en cada punto señalado.



#include <iostream>
using namespace std;



int main() {
	int *p1, *p2;
	p1 = new int;
	*p1 = 42;
	p2 = p1;
	cout << *p1 << endl;
	cout << *p2 << endl; // A.Luego de ejecutar esta línea
//imprimira: 42 y 42 (bien)


	*p2 = 53;
	cout << *p1 << endl;
	cout << *p2 << endl; //B. Luego de ejecutar esta línea
//imprime 42 y 53(mal) imprime 53 dos veces pq p2=p1 significa que los 
//punteros apuntan a la misma direccion y *p2 asigna un valor en heap que es apuntado por p1 y p2
	
	
	p1 = new int;
	*p1 = 88;
	cout << *p1 << endl;
	cout << *p2 << endl;
	cout << "FIN"; //C. Luego de ejecutar esta línea
	// imprime 88 dos veces(mal) 88 y 53 
	
	
	int *a, b=4;
	a=new int(2);
	int *c=a;
	*c=b;
	cout<<*a<<"-"<<b<<"-"<<*c<<endl;
	
	b= *a *2;
	c=new int( *a *(*c));
	cout<<*a<<" "<<b<<" "<<*c<<endl<<endl;
	
	int entero;
	cin>>entero;
	while(entero!=0){
		cin>>entero;
	}
	
	return 0;

}

