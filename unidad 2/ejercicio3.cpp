//Ejercicio 3.
//Suponer que esperamos que los elementos de un arreglo est�n ordenados de menor a mayor (de modo que
//cada elemento es menor o igual que el siguiente: a[0] <= a[1] <= a[2] �)
//Sin embargo, para estar seguros queremos probar el arreglo usando una funci�n que informe si encuentra que
//alg�n elemento no est� en orden (retornando su �ndice en caso de ser as�, o retornando -1 si todo el arreglo
//est� ordenado). Se supone que el siguiente c�digo realiza esa prueba, pero contiene un error muy usual cuando
//se trabaja con arreglos, �en qu� consiste?
//int en_desorden (double arreglo[], int dimension)
//for (int indice = 0; indice < dimension; indice++) {
//if (a[indice] > a[indice + 1]) {
//return indice + 1;
//}
//return -1;
//}

#include<iostream>
using namespace std;


//int en_desorden (double arreglo[], int dimension)
//	for (int indice = 0; indice < dimension; indice++) {//error en dimension-> dimension -1
//		if (a[indice] > a[indice + 1]) { //aca el ERROR en vez de "a"[indice] -> arreglo[inice] y ademas "dimension" -> dimension-1 pq sino se pasa de los limites del arreglo
//		return indice + 1;
//	}
//	return -1;
//}





//ejemplo de funcionamiento correcto :
//
//int en_desorden(double arreglo[], int dimension) {
//    for (int indice = 0; indice < dimension-1; indice++) {
//        if (arreglo[indice] > arreglo[indice + 1]) {
//            return indice+1;
//        }
//    }
//    return -1;
//}
//
//int main() {
//    double ejemplo1[] = {1.0, 2.0, 3.0, 4.0, 5.0};
//    int resultado1 = en_desorden(ejemplo1, 5);
//    
//    if (resultado1 == -1) {
//        std::cout << "El arreglo est� en orden." << std::endl;
//    } else {
//        std::cout << "El arreglo no est� en orden en el �ndice " << resultado1 << "." << std::endl;
//    }
//
//    double ejemplo2[] = {1.0, 3.0, 2.0, 4.0, 5.0};
//    int resultado2 = en_desorden(ejemplo2, 5);
//
//    if (resultado2 == -1) {
//        std::cout << "El arreglo est� en orden." << std::endl;
//    } else {
//        std::cout << "El arreglo no est� en orden en el �ndice " << resultado2 << "." << std::endl;
//    }
//
//    return 0;
//}
//
//
















