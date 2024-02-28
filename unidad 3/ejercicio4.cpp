//Ejercicio 4.
//Dados los siguientes structs:
//struct Producto {
//string descripcion;
//float precio;
//};
//struct Venta {
//Producto producto;
//int cantidad;
//};
//Escribir y luego ejecutar las instrucciones necesarias para:
//a) Declarar una variable puntero a Venta y reservar memoria.
//b) Pedir al usuario que ingrese una cantidad vendida, descripción de producto y precio de producto,
//almacenando los datos en la Venta apuntada por el puntero declarado en el inciso anterior.
//c) Restar un 15% al precio del Producto guardado en la Venta apuntada por el puntero.
//d) Imprimir la descripción del producto dentro de la Venta y monto total (precio del producto * cantidad).

#include<iostream>
using namespace std;


struct Producto {
	string descripcion;
	float precio;
};
struct Venta {
	Producto producto;
	int cantidad;
};



int main(){
//a) Declarar una variable puntero a Venta y reservar memoria.
	Venta *venta= new Venta;
	Producto *producto= new Producto;
//b) Pedir al usuario que ingrese una cantidad vendida, descripción de producto y precio de producto,
//almacenando los datos en la Venta apuntada por el puntero declarado en el inciso anterior.

	cout<<"ingrese la cantidad vendida: "<<endl;
	cin>>(*venta).cantidad;

	cout<<"ingrese la descripcion del producto: "<<endl;
	getline(cin>>ws,(*venta).producto.descripcion);//otra alternativa venta->producto.descripcion

	cout<<"ingrese el precio de producto: "<<endl;
	cin>>(*venta).producto.precio;
//c) Restar un 15% al precio del Producto guardado en la Venta apuntada por el puntero.
	int restar;
	restar= venta->producto.precio*0.15;
	venta->producto.precio-=restar;
	cout<<"dsp del 15%: "<<venta->producto.precio<<endl;


//d) Imprimir la descripción del producto dentro de la Venta y monto total (precio del producto * cantidad).
	cout<<"descripcion del producto: "<<venta->producto.descripcion<<endl;
	cout<<"monto total: "<<(*venta).cantidad*(*venta).producto.precio<<endl;
	
	return 0;
}






