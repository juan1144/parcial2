#include "pila.h"

int pila_es_vacia(PILA *p) {
    if (p == NULL) {
        return 1;
    } else {
        return 0;
    }

}

void vaciar_pila(PILA **p) {
    free(*p);
    *p = NULL;
}

void agregar_a_pila(PILA **p, TipoElemento te) {

    PILA *nodo = (PILA *) malloc(sizeof (PILA));
    nodo->e = te;
    nodo->siguiente = *p;
    *p = nodo;

}

TipoElemento get_primero_pila(PILA *p) {
    PILA* cima;
    if (pila_es_vacia(p)) {
        system(EXIT_SUCCESS);
    } else {
        cima->e = p->e;
    }
    return cima->e;
}

void pila_borrar(PILA **p) {
    PILA* cima;
    cima = *p;
    (*p) = (*p)->siguiente;
    free(cima);
}

char* get_carnet(void) {
    return "PH20003";
}