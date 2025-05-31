/*
    Topico 1: Resolviendo problemas de estructura de datos en C.
    
    - Ejercicio 2: Solicitar tres numeros y imprimirlos al reves
*/

//Declaramos la biblioteca para las funciones de INPUT/OUTPUT.
#include <stdio.h>

//Declaramos la funcion principal
int main(int argc, char *argv[]){
    //Declarando el arreglo
    int array[3];
    
    //Solicitando los datos para introducirlos al arreglo
    for(int i=0; i < 3; i++){
        //Mandar un mensaje al usuario
        printf("INGRESE UN NUMERO: \n");
        scanf("%i", &array[i]);
    }
    
    printf("\n");
    
    //Imprimiendo el arreglo
    for(int i=2; i >= 0; i--){
        //Imprimiendo el arreglo
        printf("%i", array[i]);
    }
    
    return 0;
}