Ejercicio 6.
Considerar la definición de función:
void dos(int a[], int cuantos) {
for (int indice = 0; indice < cuantos; indice++) {
a[indice] = 2;
}
}
¿Cuáles de las siguientes son llamadas de función aceptables?
int mi_arreglo[29]; // declara e inicializa
dos(mi_arreglo, 29);//ok
dos(mi_arreglo[], 29);// no se puede poner corchetes al pasar los parametros 
dos(mi_arreglo, 10);//no tiene la misma cantidad
dos(mi_arreglo, 55);// distinta cantidad
int tu_arreglo[100]; // declara e inicializa
dos(tu_arreglo, 100);//ok
dos(mi_arreglo[3], 29);//esta pasando un solo elemento, cuando la funcion espera un arreglo completo

