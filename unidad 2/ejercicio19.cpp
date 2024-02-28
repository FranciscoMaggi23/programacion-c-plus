Ejercicio 19.
Considerando la siguiente definición de struct:
struct TipoZapato {
string estilo;
double precio;
};
¿Qué salidas producirá el siguiente código?
TipoZapato zapato1, zapato2;
zapato1.estilo = "Sandalia";
zapato1.precio = 9.99;
cout << zapato1.estilo << " $" << zapato1.precio << endl;
zapato2 = zapato1;
zapato2.precio = zapato2.precio / 9;
cout << zapato2.estilo << " $" << zapato2.precio << endl;






