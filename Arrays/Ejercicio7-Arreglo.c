/*
    Topico 1: Resolviendo problemas de estructura de datos en C.
    
    - Ejercicio 7: Mostrar dos arreglos arreglados descendientemente (Metodo burbuja)
*/

//Declaramos la biblioteca para las funciones de INPUT/OUTPUT.
#include <stdio.h>

//Declaramos la funcion principal
int main(int argc, char *argv[]){
    //Declarar un arreglo con cuatro elementos
    int array1[3], array2[3];
    //arreglo auxiliar
    int aux1 = 0, aux2 = 0;
    
    //Recorrer el primer arreglo solicitando los datos del primer elemento:
    for(int i = 0; i < 3; i++){
        //Mandar un mensaje al usuario para que introduzca un numero
        printf("Element %i: ", i);
        scanf("%i", &array1[i]);
    }
    
    //Recorrer el segundo arreglo solicitando los datos del primer elemento:
    for(int i = 0; i < 3; i++){
        //Mandar un mensaje al usuario para que introduzca un numero
        printf("Element %i: ", i);
        scanf("%i", &array2[i]);
    }

    //Aplicamos el clasico algoritmo de ordenamiento
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < i + 1; j++){
            if((array1[j] < array1[j + 1]) && (array2[j] < array2[j + 1])){
                aux1 = array1[j];
                aux2 = array2[j];
                array1[j] = array1[j + 1];
                array2[j] = array2[j + 1];
                array1[j + 1] = aux1;
                array2[j + 1] = aux2;
            }
        }
    }
    
    //Imprimir el arreglo en decendiente
    for(int i = 0; i < 3; i++){
        printf("%i %i ", array1[i], array2[i]);
    }
    
    return 0;
}