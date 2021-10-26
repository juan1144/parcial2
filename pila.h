#include <stdio.h>
#include <stdlib.h>


/* 
 * File:   pila.h
 * Author: jcpenya
 *
 * Created on 20 de septiembre de 2021, 14:53
 */

#ifndef PILA_H
#define PILA_H

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
}
#endif

typedef float TipoElemento;

typedef struct NODO_PILA {
    TipoElemento e;
    struct NODO_PILA *siguiente;
} NODO_PILA;
typedef NODO_PILA PILA;
/**
 * Permite saber si una pila se encuentra vacía
 * @param 
 * @return Devuelve 0 si está vacía, cualquier otro valor si es verdadero
 */
int pila_es_vacia(PILA*);
/**
 * Libera la referencia a la pila
 * @param 
 */
void vaciar_pila(PILA**);
/**
 * Agrega un nuevo elemento al tope de la pila
 * @param 
 * @param 
 */
void agregar_a_pila(PILA**, TipoElemento);
/**
 * Obtiene el elemento al tope de la pila
 * @param 
 * @return 
 */
TipoElemento get_primero_pila(PILA*);
/**
 * Extrae el elemento al tope de la pila
 * @param 
 */
void pila_borrar(PILA**);

char* get_carnet(void);

#endif /* PILA_H */