/*
    Topico 1: Resolviendo problemas de estructura de datos en C.
    
    - Ejercicio 1: Mostrando punteros basicos en C
*/

//Declaramos la biblioteca para las funciones de INPUT/OUTPUT.
#include <stdio.h>

//Declaramos la funcion principal
int main(int argc, char *argv[]){
    //Declarar m, n y o
    int m = 10;
    int n = 0;
    int o = 0;

    //Declarar el puntero z
    int *z = NULL;

    //Imprimir el formato

    printf("Pointer: Show the basic declaration of pointer: \n");
    printf("----------------------------------------------------\n");
    printf("Here is m=10, n and o are two integer variable and *z is a pointer \n");
    z = &m;
    printf("\nz stores the address of m = %p", z);
    printf("\n\n*z stores the value of m = %i", *z);
    printf("\n\n&m is the address of m = %p", &m);
    printf("\n\n&n stores the address of n = %p", &n);
    printf("\n\n&o stores the address of o = %p", &o);
    printf("\n\n&z stores the address of z = %p", &z);
    return 0;
}