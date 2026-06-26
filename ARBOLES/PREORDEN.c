//PREORDEN: raíz → izquierdo → derecho 
//Útil para copiar o imprimir la estructura del árbol. 
void preorden(struct Nodo* nodo) { 

    if (nodo == NULL) return; 

    printf('%d ', nodo->dato);         // 1. Visita la raíz primero 

    preorden(nodo->izquierdo);         // 2. Luego el subárbol izquierdo 

    preorden(nodo->derecho);           // 3. Luego el subárbol derecho 

} 