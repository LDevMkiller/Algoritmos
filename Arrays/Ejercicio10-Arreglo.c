/*
    Topico 1: Resolviendo problemas de estructura de datos en C.
    
    - Ejercicio 9: Mostrando los numeros pares o impares del arreglo
*/

//Declaramos la biblioteca para las funciones de INPUT/OUTPUT.
#include <stdio.h>

//Declaramos la funcion principal
int main(int argc, char *argv[]){
    //Declarar un arreglo con tres elementos
    int array1[3];
    //Declarar dos variables para guardar los minimos y maximos de un array
    int min = 0, max = 0;
    
    //Leer el array. Para eso debemos recorrer este mismo.
    for(int i = 0; i < 3; i++){
        printf("Element %i: ", i);
        scanf("%i", &array1[i]);
    }
    
    //Recorrer el arreglo para verificar los pares
    printf("The Even Elements are: \n");
    for(int i = 0; i < 3; i++){
        if(array1[i] % 2 == 0){
            printf("%i ", array1[i]);
        }
    }

    //Recorrer el arreglo para verificar los impares
    printf("The Odd elements are: \n");
    for(int i = 0; i < 3; i++){
        if(array1[i] % 2 == 0){
            printf("%i ", array1[i]);
        }
    }
    
    return 0;
}