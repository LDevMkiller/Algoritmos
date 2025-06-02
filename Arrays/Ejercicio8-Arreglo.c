/*
    Topico 1: Resolviendo problemas de estructura de datos en C.
    
    - Ejercicio 8: Mostrar dos arreglos arreglados descendientemente (Metodo burbuja)
*/

//Declaramos la biblioteca para las funciones de INPUT/OUTPUT.
#include <stdio.h>

//Declaramos la funcion principal
int main(int argc, char *argv[]){
    //Declarar un arreglo con tres elementos
    int array1[3];
    //arreglo auxiliar
    int c;
    
    //Recorrer el primer arreglo solicitando los datos del primer elemento:
    for(int i = 0; i < 3; i++){
        //Mandar un mensaje al usuario para que introduzca un numero
        printf("Element %i: ", i);
        scanf("%i", &array1[i]);
    }
    
    //Imprimir el arreglo en decendiente
    for(int i = 0; i < 3; i++){
        //Utilizamos nuestro contador que lo establecemos en cero
        c = 1;
        //Recorremos el array buscando los numeros que no se repiten
        for(int j = i + 1; j < 5; j++){
            if(array1[i] == array1[j]){
                c++;
                break;
            }
        }
    }
    
    return 0;
}