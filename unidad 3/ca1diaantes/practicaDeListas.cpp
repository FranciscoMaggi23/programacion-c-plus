//insertar al principio:
Nodo* principio(Nodo* lista, int dato){
	Nodo* nuevo = new Nodo;
	nuevo->dato=dato;
	nuevo->siguiente=lista;
	return nuevo;
}

//insertar al final:
Nodo a(Nodo* lista; Nodo* nuevo){
	if(lista==NULL){
		lista=nuevo;
	}else{
		Nodo* aux=lista;
		while(aux->siguiente!=NULL){
			aux=aux->siguiente;
		}
		aux->siguiente=nuevo;
	}
	return lista;
}


//insertar ordenado:
Nodo a(Nodo* lista; Nodo* nuevo){
	if(lista==NULL || lista->dato<nuevo->dato){
		nuevo->siguiente=lista;
		lista=nuevo;
	}else{
		Nodo* aux=lista;
		while(aux->siguiente!=NULL && aux->siguiente->dato<nuevo->dato){
			aux=aux->siguiente;
		}
		nuevo->siguiente=aux->siguiente;
		aux->siguiente=nuevo;
	}
	return lista;
}

//eliminar un elemento de la lista:
Nodo a(Nodo* lista; int numero){
	if(lista!=NULL){
		Nodo* aux=lista;
		if(lista->dato==numero){
			lista=lista->siguiente;
			delete aux;
		}else{
			while(aux->siguiente!=NULL && aux->siguiente->dato != numero){
				aux=aux->siguiente;
			}
			if(aux->siguiente->dato==numero){
				Nodo aEliminar= aux->siguiente;
				aux->siguiente=aEliminar->siguiente;
				delete aEliminar;
			}
		}
	}
	return lista;
}	

//eliminar ocurrencias de una lista:  practicar mas veces
Nodo a(Nodo* lista; int numero){
	Nodo* aux=lista; aEliminar;
	while(lista!= NULL){
		if(lista->dato==numero){
			aEliminar=lista;
			lista=lista->siguiente;
			aux=lista;
			delete aEliminar;
		}else{
			if(aux->siguiente!= NULL && aux-siguiente->dato==numero){
				aEliminar=aux->siguiente;
				aux->siguiente=aEliminar->siguiente;
				delete aEliminar;
			}else{
				aux=aux->siguiente;
			}
		}
	}
	return lista;
} 

//dividir una lista en dos:     practicar mas veces
void a(Nodo* lista; Nodo* &a, Nodo* &b){
	Nodo*  anterior;
	while(lista!=NULL){
		anterior=lista;
		lista=lista->siguiente;
		anterior->siguiente=NULL	;
		if(anterior->dato%2==0){
			a=insertaralfinal(a,anterior);
		}else{
			b=insertaralfinal(b,anterior);
		}
	}
}

//unir dos listas en una: merge     practicar bastante
Nodo* a(Nodo* &lista1; Nodo* &lista2){
	Nodo* anterior, Nodo* listaVacia=NULL;
	while(lista1!=NULL && lista2!= NULL){
		if(lista1->dato>lista2->dato){
			anterior=lista1;
			lista1=lista1->siguiente;
		}else{
			anterior=lista2;
			lista2=lista2->siguiente;
		}
		anterior->siguiente=NULL;
		listaVacia=insertaralfinal(listavacia, anterior);
	}
	while(lista1!=NULL){
		anterior=lista1;
		lista1=lista1->siguiente;
		anterior->siguiente=NULL;
		listaVacia=insertaralfinal(listavacia, anterior);
	}
	while(lista2!=NULL){
		anterior=lista2;
		lista2=lista2->siguiente;
		anterior->siguiente=NULL;
		listaVacia=insertaralfinal(listavacia, anterior);		
	}
	return listaVacia;
}
 

//lista circular insertar al principio:
Nodo* a(Nodo* lista, int numero){
	Nodo* nuevo=new Nodo;
	nuevo->dato=numero;
	nuevo->siguiente=NULL;
	
	if(lista==NULL){
		nuevo->siguiente=nuevo;
		return nuevo;
	}else{
		nuevo->siguiente=lista->siguiente;
		lista->siguiente=nuevo;
		return lista;
	}
}

//lista circular insertaar al final
Nodo* a(Nodo* lista, int numero){
	Nodo* nuevo=new Nodo;
	nuevo->dato=numero;
	nuevo->siguiente=NULL;
	
	if(lista==NULL){
		nuevo->siguiente=nuevo;
	}else{ 
		nuevo->siguiente=lista->siguiente;
		lista->siguiente=nuevo;
		lista=nuevo; // Mover el puntero de lista al nuevo nodo (ahora es el último)
	}
	return lista;

}


//lista circular insertar ordenado: practicar
Nodo* a(Nodo* lista, int numero){
	Nodo* nuevo= new Nodo;
	nuevo->dato=numero;
	nuevo->siguiente=NULL;
	
	if(lista==NULL){
		lista=nuevo;
		nuevo->siguiente=nuevo;
	}else{
		Nodo* aux=lista->siguiente;
		do{
			if(aux!=NULL && aux->siguiente->dato>=numero){
				nuevo->siguiente=aux->siguiente;
				aux->siguiente=nuevo;
                return lista;  // Importante salir del bucle una vez insertado el nuevo nodo				
			}
		 	aux=aux->siguiente;
		}while(aux!=lista->siguiente);
	}
	return lista;
	
}


//lista circular eliminar un elemento: practicar
Nodo* a(Nodo* lista, int numero){
	Nodo* nuevo= new Nodo;
	nuevo->dato=numero;
	nuevo->siguiente=NULL;

	if(lista!=NULL){
		Nodo* aEliminar, *aux=lista;	
		do{
			if(aux->siguiente->dato==nuevo->dato){
				aEliminar=aux->siguiente;
				if(aEliminar==lista){
					lista=aux;
				}
				aux->siguiente= aEliminar->siguiente;
				delete aEliminar;
				break;
			}else{
				aux=aux->siguiente;
			}
		}while(aux!=lista);	
	}
	return lista;
}

//unir dos lustas:
Nodo* a(Nodo* a, Nodo* b){
	Nodo* anterior=NULL;
	Nodo* c;
	while(a!=NULL && b!=NULL){
		if(a->dato>b->dato){
			anterior=a;
			a=a->siguiente;
		}else{
			anterior=b;
			b=b->siguiente;
		}
		anterior->siguiente=NULL;
		c=insertaralfinal(c,anterior);
	}
	while(a!=NULL){
		anterior=a;
		a=a->siguiente;
		anterior->siguiente=NULL;
		c=insertaralfinal(c,anterior);
	}
	while(b!=NULL){
		anterior=b;
		b=b->siguiente;
		anterior->siguiente=NULL;
		c=insertaralfinal(c,anterior);
	}
	return c;
}

Nodo* a(Nodo* a, int num){
	while(lista!=NULL){
		Nodo* anterior=lista;
		Nodo* aEliminar;
		
		do{
			if(anterior->dato==num){
			
			}
		}
	}
}










