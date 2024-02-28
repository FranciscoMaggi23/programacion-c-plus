//asumimos que ya tenemos la lista
//a partir de la lista y el nombre de una categoria colocar todos los productos que pertenescan a la misma oferta y restarle 15% al precio


void a(Nodo* lista; string cat){
	float descuento;
	for(Nodo* i=lista; i!= NULL; i++){
		if(i->categoria==cat){
			descuento = i->precio*0.15;
			i->precio-=descuento;
		}
	}
}

