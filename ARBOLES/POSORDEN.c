//POSORDEN: izquierdo → derecho → raíz 
//Útil para eliminar el árbol completo (se eliminan los hijos antes que el padre). 
void posorden(struct Nodo* nodo) { 

    if (nodo == NULL) return; 

    posorden(nodo->izquierdo);         // 1. Recorre el subárbol izquierdo 

    posorden(nodo->derecho);           // 2. Recorre el subárbol derecho 

    printf('%d ', nodo->dato);         // 3. Visita la raíz al final 

} 