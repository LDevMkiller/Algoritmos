/*
    Topico 1: Resolviendo problemas de estructura de datos en C.
    
    - Ejercicio 1: Introduciendo datos a un arreglo
*/

//Declaramos la biblioteca para las funciones de INPUT/OUTPUT.
#include <stdio.h>

//Declaramos la funcion principal
int main(int argc, char *argv[]){
    //Declarando el arreglo
    int array[10];
    
    //Solicitando los datos para introducirlos al arreglo
    for(int i=0; i < 10; i++){
        //Mandar un mensaje al usuario
        printf("INGRESE UN NUMERO: \n");
        scanf("%i", &array[i]);
    }
    
    printf("\n");
    
    //Imprimiendo el arreglo
    for(int i=0; i < 10; i++){
        //Imprimiendo el arreglo
        printf("%i", array[i]);
    }
    
    return 0;
}