/*
    Topico 1: Resolviendo problemas de estructura de datos en C.
    
    - Ejercicio 9: Mostrando los elementos maximos y minimos de un array
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
    
    //Establecer los minimos y maximos del array. Primero se establece desde la primera posicion del array
    min = array1[0];
    max = array1[0];
    
    //Recorrer para verificar el maximo y el minimo del array
    for(int i = 0; i < 3; i++){
        if(array1[i] < min){
            min = array1[i];
        }
        if(array1[i] > max){
            max = array1[i];
        }
    }
    
    //Imprimiendo el resultado
    printf("Maximum element is : %i\n", max);
    printf("Minimum element is : %i\n", min);
    
    return 0;
}