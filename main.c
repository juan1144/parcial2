/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/main.c to edit this template
 */

/* 
 * File:   main.c
 * Author: juan
 *
 * Created on 26 de octubre de 2021, 10:49
 */

#include <stdio.h>
#include <stdlib.h>
#include "pila.h"

/*
 * 
 */
int main(int argc, char** argv) {

    PILA* pila = NULL; // Inicializamos PIla

    printf("pila_es_vacia: %i\n", pila_es_vacia(pila)); //Preguntamos si la pila está vacía

    agregar_a_pila(&pila, 1.5);
    agregar_a_pila(&pila, 6.5);
    agregar_a_pila(&pila, 2.5);

    printf("Elemento de la cima: %.2f\n", get_primero_pila(pila));

    printf("pila_es_vacia: %i\n", pila_es_vacia(pila));

    pila_borrar(&pila);

    printf("Elemento de la cima: %.2f\n", get_primero_pila(pila));

    vaciar_pila(&pila);

    printf("Carnet: %s", get_carnet());

    return (EXIT_SUCCESS);
}