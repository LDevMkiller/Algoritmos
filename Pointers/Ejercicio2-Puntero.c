/*
    Topico 1: Resolviendo problemas de estructura de datos en C.
    
    - Ejercicio 1: Mostrando el manejo de punteros en C.
*/

//Declaramos la biblioteca para las funciones de INPUT/OUTPUT.
#include <stdio.h>

//Declaramos la funcion principal
int main(int argc, char *argv[]){
    //Declarar la variable m con el valor 29
    int m = 29;

    //Declarar el puntero ab para almacenar la direccion de memoria de m
    int *ab = &m;

    //Imprimir la salida esperada del problema
    printf("Address of m: %p", &m);
    printf("\nValue of m: %i", m);
    printf("\n\nNow ab is assigned with the address of m.");
    printf("\nAddress of pointer ab: %p", ab);
    printf("\nContent of pointer ab: %i", *ab);

    printf("\n\nThe value of m assigned to 34 now.");
    printf("\nAddress of pointer ab: %p", ab);
    printf("\nContent of pointer ab: %i", *ab=34);
    
    //Se le asigna el nuevo valor al puntero. Este apunta a la variable m.
    *ab = 7;
    
    printf("\n\nThe pointer variable ab is assigned with the value 7 now.");
    printf("\nAddress of m: %p", ab);
    printf("\nValues of m: %i", m);
    return 0;
}