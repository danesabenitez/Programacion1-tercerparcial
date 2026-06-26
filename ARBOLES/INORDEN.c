//INORDEN: izquierdo → raíz → derecho 
//Resultado: los elementos en orden ASCENDENTE (de menor a mayor). 
void inorden(struct Nodo* nodo) { 

    if (nodo == NULL) return;          // Caso base: no hay nada que visitar 

    inorden(nodo->izquierdo);          // 1. Recorre el subárbol izquierdo 

    printf('%d ', nodo->dato);         // 2. Visita la raíz 

    inorden(nodo->derecho);            // 3. Recorre el subárbol derecho 

} 