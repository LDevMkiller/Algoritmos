/*
    Topico 1: Resolviendo problemas de estructura de datos en C.
    
    - Ejercicio 4: Copiar los elementos de un arreglo a otro
*/

//Declaramos la biblioteca para las funciones de INPUT/OUTPUT.
#include <stdio.h>

//Declaramos la funcion principal
int main(int argc, char *argv[]){
    //Declarar un arreglo con tres elementos y pasar esos elementos a uno nuevo
    int array1[3], array2[3];
    
    //Recorrer el primer arreglo solicitando los datos del primer elemento:
    for(int i = 0; i < 3; i++){
        //Mandar un mensaje al usuario para que introduzca un numero
        printf("Element %i: ", i);
        scanf("%i", &array1[i]);
    }
    
    //Imprimir los elementos del primer arreglo
    printf("The element stored in the first array are: \n");
    
    //Imprimir el arreglo
    for(int i = 0; i < 3; i++){
        //Mandar a imprimir el arreglo
        printf("%i ", array1[i]);
    }
    
    //Pasar todos los datos a un nuevo arreglo
    for(int i = 0; i < 3; i++){
        array2[i] = array1[i];
    }
    
    //Imprimir los elementos del primer arreglo
    printf("\nThe element copied into the second array are: \n");
    
    //Imprimir el arreglo
    for(int i = 0; i < 3; i++){
        //Mandar a imprimir el arreglo
        printf("%i ", array2[i]);
    }
    
    return 0;
}