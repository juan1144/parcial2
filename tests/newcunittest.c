/*
 * File:   pila_test.c
 * Author: jcpenya
 *
 * Created on 8 oct. 2021, 14:08:58
 */

#include <stdio.h>
#include <stdlib.h>
#include <CUnit/Basic.h>
#include "../pila.h"

/*
 * CUnit Test Suite
 */

int init_suite(void) {
    return 0;
}

int clean_suite(void) {
    return 0;
}

void testPila_es_vacia() {
    PILA *p;
    int resultado = pila_es_vacia(NULL);
    CU_ASSERT_TRUE(resultado);
    resultado = pila_es_vacia(p);
    CU_ASSERT_FALSE(resultado);

}

void testVaciar_pila() {
    PILA *p;
    vaciar_pila(&p);
    CU_ASSERT_TRUE(pila_es_vacia(p));

}

void testAgregar_a_pila() {
    PILA *p;
    int agregado = 1;
    agregar_a_pila(&p, agregado);
    CU_ASSERT_TRUE(p->e == agregado);
}

void testGet_primero_pila() {
    PILA *p;
    int agregado = 1;
    agregar_a_pila(&p, agregado);
    int resultado = get_primero_pila(p);
    CU_ASSERT_TRUE(resultado == agregado);
    agregado = 2;
    agregar_a_pila(&p, agregado);
    resultado = get_primero_pila(p);
    CU_ASSERT_TRUE(resultado == agregado);
}

void testPila_borrar() {
    PILA *p;
    int agregado = 1;
    agregar_a_pila(&p, agregado);
    int agregado2 = 2;
    agregar_a_pila(&p, agregado2);
    pila_borrar(&p);
    int resultado = get_primero_pila(p);
    CU_ASSERT_TRUE(resultado == agregado);
}

int main() {
    CU_pSuite pSuite = NULL;

    /* Initialize the CUnit test registry */
    if (CUE_SUCCESS != CU_initialize_registry())
        return CU_get_error();

    /* Add a suite to the registry */
    pSuite = CU_add_suite("pila_test", init_suite, clean_suite);
    if (NULL == pSuite) {
        CU_cleanup_registry();
        return CU_get_error();
    }

    /* Add the tests to the suite */
    if ((NULL == CU_add_test(pSuite, "testPila_es_vacia", testPila_es_vacia)) ||
            (NULL == CU_add_test(pSuite, "testVaciar_pila", testVaciar_pila)) ||
            (NULL == CU_add_test(pSuite, "testAgregar_a_pila", testAgregar_a_pila)) ||
            (NULL == CU_add_test(pSuite, "testGet_primero_pila", testGet_primero_pila)) ||
            (NULL == CU_add_test(pSuite, "testPila_borrar", testPila_borrar))) {
        CU_cleanup_registry();
        return CU_get_error();
    }

    /* Run all tests using the CUnit Basic interface */
    CU_basic_set_mode(CU_BRM_VERBOSE);
    CU_basic_run_tests();
    CU_cleanup_registry();
    return CU_get_error();
}
