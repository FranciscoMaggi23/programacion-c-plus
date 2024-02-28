//bajo stock: a partir de una lista y un numero entero, generar y devolver una nueva lista que contenga todos los productos con un stock menor que el
//numero especificado. 


Nodo* a(Nodo* lista; int num){
	Nodo* anterior=lista, *stockmenor=NULL;
	for(Nodo* i=lista; i!=NULL; i=i->siguiente){
		if(i->stock<num){
			anterior=i;
			anterior->siguiente=NULL;
			stockmenor=insertarlista(stockmenor,anterior);
		}
	}
	return stockmenor;
}
