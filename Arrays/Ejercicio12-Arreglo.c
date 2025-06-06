/*
    Topico 1: Resolviendo problemas de estructura de datos en C.
    
    - Ejercicio 11: Mostrando un arreglo de manera descendente
*/

//Declaramos la biblioteca para las funciones de INPUT/OUTPUT.
#include <stdio.h>

//Declaramos la funcion principal
int main(int argc, char *argv[]){
    //Declarar un arreglo con tres elementos
    int array1[3];
    //Declarar dos variables para guardar los minimos y maximos de un array
    int max = 0, position = 0;
    
    //Leer el array. Para eso debemos recorrer este mismo.
    for(int i = 0; i < 3; i++){
        printf("Element %i: ", i);
        scanf("%i", &array1[i]);
    }
    
    //Utilizamos el algoritmo de seleccion (Selection Sort)
    /*
        - Estamos haciendo esto:
        
        * Estamos iterando en el arreglo hasta encontrar un numero mayor al anterior
        * Si es asi. Entonces, debemos ver que en la siguiente iteracion si un elemento sea mayor a array1 
    */
    //Primero, recorremos este arreglo
    for(int i = 0; i < 3; i++){
        //Almacenamos el elemento menor del arreglo
        max = array1[i];
        //Y su posicion
        position = i;
        //Recorremos desde la siguiente posicion a la actual
        for(int j = i + 1; j < 3; j++){
            //Verificamos que el arreglo en esta posicion que estamos iterando sea menor al que previamente registramos
            if(array1[j] > max){
                //Entonces, almacenamos en min el nuevo elemento
                max = array1[j];
                position = j;
            }
        }
        //Entonces, intercambiamos valores
        array1[position] = array1[i];
        array1[i] = max;
    }
    
    //De ahi, mostramos el arreglo completamente
    for(int i = 0; i < 3; i++){
        printf("Element: %i \n", array1[i]);
    }
    
    return 0;
}