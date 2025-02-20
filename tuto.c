//imprimir y recibir datos de parte del usuario
#include<stdio.h> 

/*  Macros: Variables a usar a lo largo del programa,
		normalmente no se cambian valores*/
#define PI 3.1416

// Variable global
int y = 5; 

// Función principal
int main(){
	
	// variables locales: dentro de una función
	int x = 10;
	
	float suma = 0;
	
	int edad = 0;
	char nombre[50];
	printf("Introduzca su nombre: ");
	scanf("%s", nombre); /*ya no usa solo un caracter sino string (%s)
							tampoco necesita ahora el & para dirección de memoria*/ 

	/* el scanf detecta hasta que haya un espacio, por eso tambien 
	   se usa el gets(nombre) para recibir con todo y espacio
	*/ 
	printf("Introduzca su edad: ");
	scanf("%i", &edad); //pide un dato tipo entero %i y luego lo guarda en dato (&dato)
	printf("Su nombre es: %s y su edad es: %i\n", nombre, edad);
	suma = PI + x ;
	printf("La suma es = %.2f",suma); //imprime la suma con solo 2 decimales
	
	
	return 0;
}