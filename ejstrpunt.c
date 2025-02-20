#include<stdio.h>
#include<stdlib.h>

int main(){

    char str[] = "Hola mundo!";
    char *prt = str; // apunta al primer caracter de la variable str[]

    //printf("El valor del puntero es %p \n", *prt);
    printf("Caracteres de la cadena: \n");
    
    // int i = 0;
    while(*prt != '\0'){ // el \0 se pone por defecto al final de una cadena
    // while(prt[i] != '\0'){ si se quisiera usar como vector
        printf("%c", *prt); //toma el primer caracter del puntero y lo imprime
        //printf("%c", prt[i]);
        prt++; //aumenta la posicion para imprimir mas caracteres
        // i++
    }


    return 0;
}