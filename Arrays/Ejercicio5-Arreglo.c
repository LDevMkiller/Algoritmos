/*
    Topico 1: Resolviendo problemas de estructura de datos en C.
    
    - Ejercicio 5: Contar los elementos repetidos de un arreglo
*/

//Declaramos la biblioteca para las funciones de INPUT/OUTPUT.
#include <stdio.h>

//Declaramos la funcion principal
int main(int argc, char *argv[]){
    //Declarar un arreglo con tres elementos y pasar esos elementos a uno nuevo
    int array1[3];
    //Variable aux
    int c = 0;
    
    //Recorrer el primer arreglo solicitando los datos del primer elemento:
    for(int i = 0; i < 3; i++){
        //Mandar un mensaje al usuario para que introduzca un numero
        printf("Element %i: ", i);
        scanf("%i", &array1[i]);
    }
    
    //Recorrer el arreglo
    for(int i = 0; i < 3; i++){
        for(int j = i + 1; j < 3; j++){
            if(array1[i] == array1[j]){
                c++;
                break;
            }
        }
    }
    
    //Imprimir el resultado
    printf("Total number of duplicate elements found in the array is: %i", c);
    
    return 0;
}