#include<stdio.h>
#include<stdlib.h> /*proporciona funciones para gestión de memoria,
                     control de procesos, conversiones de tipos y 
                     generación de números aleatorios, entre otras cosas.*/

void change_value(char *letter){ //toma como entrada el valor de la variable
    *letter = 'b'; // modifica directamente el valor
}


int main(){

    int *puntero; // declarar directamente

    int valor = 10;
    puntero = &valor; // asignar el valor de la direccion de memoria de valor
    int **puntero_a = &puntero;/* puntero a puntero que guarda la dirección
    de memoria de puntero */    

    printf("El valor del puntero es %p \n",(void *)puntero); // se usa %p para punteros
    printf("La direccion de memoria del puntero es %p \n",(void **)puntero_a);

    /* Si pongo un *puntero en el print, lo que haria seria 
        desrreferenciar el puntero, por lo que llamaría al valor
        en la dirección que contiene el puntero.puntero

        El (void *) se usa para evitar advertencias, solo se usa para imprimir.
    */


    // manipular valor directo de la variable
    
    char l;
    l = 'a';
    change_value(&l); /* Toma como entrada la dirección de l
                        y al entrar en la función, modifica ese espacio
                        de memoria, ya no usando una copia como lo hace
                        normalmente las funciones*/
    printf("%c\n",l);





    // manipulación de memoria dinamica


    char *r = malloc(1); // guarda un espacio de 1 byte para el puntero 
    // char *r = malloc(sizeof(char)); guarda espacio de una variable char


    if (r == NULL){
        /*Comprueba si malloc falló al asignar memoria.
          Si malloc no puede reservar memoria (por ejemplo, por falta de RAM), devuelve NULL  
        */
        fprintf(stderr, "Error: Could not alocate memory \n"); 
        //escribe el error en la salida de errores estándar
        return(1);
        //finaliza el programa con código de error 1.
    }

    *r = 'a';
    change_value(r); //ya que directamente es un puntero, no hace falta el &
    printf("El valor de el puntero r es %c\n", *r); // ya que es un puntero, se imprime con *
    free(r); //libera la memoria de r
    return 0;
}