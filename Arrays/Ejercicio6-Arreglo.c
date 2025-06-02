/*
    Topico 1: Resolviendo problemas de estructura de datos en C.
    
    - Ejercicio 6: Mostrar los elementos que no se repiten
*/

//Declaramos la biblioteca para las funciones de INPUT/OUTPUT.
#include <stdio.h>

//Declaramos la funcion principal
int main(int argc, char *argv[]){
    //Declarar un arreglo con cuatro elementos
    int array1[4];
    //arreglo auxiliar
    int c, aux;
    
    //Recorrer el primer arreglo solicitando los datos del primer elemento:
    for(int i = 0; i < 4; i++){
        //Mandar un mensaje al usuario para que introduzca un numero
        printf("Element %i: ", i);
        scanf("%i", &array1[i]);
    }

    //Recorremos el array
    for(int i = 0; i < 4; i++){
        //Utilizamos nuestro contador que lo establecemos en cero
        c = 0;
        //Recorremos el array buscando los numeros que no se repiten
        for(int j = 0; j < 5; j++){
            //Verificamos que no estamos en la misma posicion
            if(i != j){
                if(array1[i] == array1[j]){
                    c++;
                    break;
                }
            }
        }
        if(c == 0){
            printf("%i ", array1[i]);
        }
    }
    
    return 0;
}