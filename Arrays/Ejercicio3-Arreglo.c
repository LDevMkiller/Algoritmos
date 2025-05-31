/*
    Topico 1: Resolviendo problemas de estructura de datos en C.
    
    - Ejercicio 3: Solicitar tres numeros y calcular su suma
*/

//Declaramos la biblioteca para las funciones de INPUT/OUTPUT.
#include <stdio.h>

//Declaramos la funcion principal
int main(int argc, char *argv[]){
    //Declarando el arreglo
    int array[3];
    //Declarando el arreglo para una variable para sumar
    int suma = 0;
    
    //Solicitando los datos para introducirlos al arreglo
    for(int i=0; i < 3; i++){
        //Mandar un mensaje al usuario
        printf("INGRESE UN NUMERO: \n");
        scanf("%i", &array[i]);
    }
    
    printf("\n");
    
    //Imprimiendo el arreglo
    for(int i=0; i < 3; i++){
        //Imprimiendo el arreglo
        suma += array[i];
    }
    
    printf("La suma de los elementos son: %i\n", suma);
    
    return 0;
}