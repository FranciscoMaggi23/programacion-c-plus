//Ejercicio 13.
//Dado un arreglo bidimensional de tipo float de 7 filas y 10 columnas, describir las sentencias para:
//a) Asignar el valor 105 a la posición que se encuentra en la segunda fila, quinta columna.
//b) Asignar en todas las posiciones de la cuarta fila el valor 1.5.
//c) Imprimir todos los valores de la matriz, colocando cada fila en una nueva línea.
//d) Permutar las columnas 3 y 5.
//e) Sumar todos los elementos de las filas 2 y 6.
//f) Imprimir todos los valores de la tercera columna.
//g) Hallar en qué fila y columna se encuentra almacenado el mayor elemento.


#include<iostream>
using namespace std;

int main(){
	float arreglo[7][10], dato[3][3]={{1,2,3},{4,5,6},{7,8,9}}, fila;
	
	arreglo[1][4]=105;
	// punto b: hay dos  formas de hacerlo 1°:
//	for(int i=0; i<7; i++){
//		for(int j=0; j<10; j++){
//			if(i==2){
//				arreglo[i][j]=1.5;
//			}
//		}
//	}
	//punto b 2° forma:
	for (int i = 0; i < 10; i++) {
	    arreglo[3][i] = 1.5;
	}
	
//punto d:
	float temp=0;
    for (int i = 0; i < 3; i++) {
        temp= dato[i][2];
        dato[i][2] = dato[i][1];
        dato[i][1] = temp;
    }
    
    	//imprimir arreglo:
	
	for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << dato[i][j] << " ";
        }
        cout << endl;
    }
    
//    cout<<dato[0][1]<<endl;
//    
//   for (int i = 0; i < 3; i++) {
//        for (int j = 0; j < 3; j++) {
//            cout << dato[i][j] << " ";
//        }
//        cout << endl;
//    }

//punto e 1° forma:
    fila=0.0;
//    for(int i=0; i<3; i++){
//    	for(int j=0; j<3; j++){
//    		if(i==0||i==2){
//    			fila+=dato[i][j];
//    			cout<<dato[i][j]<<endl;
//    		}
//    	}
//    }
//punto e 2° forma:    
    for(int i=0; i<3; i++){
		fila+=dato[0][i]+dato[2][i];
    }
	cout<<fila;




//    cout<<"w: "<<fila<<endl;
//    
//    for (int i = 0; i < 3; i++) {
//        cout << dato[i][0]<< endl;
//    }
 
    
	
	
	return 0;
}










