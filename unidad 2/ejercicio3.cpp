//Ejercicio 3.
//Suponer que esperamos que los elementos de un arreglo estén ordenados de menor a mayor (de modo que
//cada elemento es menor o igual que el siguiente: a[0] <= a[1] <= a[2] …)
//Sin embargo, para estar seguros queremos probar el arreglo usando una función que informe si encuentra que
//algún elemento no está en orden (retornando su índice en caso de ser así, o retornando -1 si todo el arreglo
//está ordenado). Se supone que el siguiente código realiza esa prueba, pero contiene un error muy usual cuando
//se trabaja con arreglos, ¿en qué consiste?
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
//        std::cout << "El arreglo está en orden." << std::endl;
//    } else {
//        std::cout << "El arreglo no está en orden en el índice " << resultado1 << "." << std::endl;
//    }
//
//    double ejemplo2[] = {1.0, 3.0, 2.0, 4.0, 5.0};
//    int resultado2 = en_desorden(ejemplo2, 5);
//
//    if (resultado2 == -1) {
//        std::cout << "El arreglo está en orden." << std::endl;
//    } else {
//        std::cout << "El arreglo no está en orden en el índice " << resultado2 << "." << std::endl;
//    }
//
//    return 0;
//}
//
//
















