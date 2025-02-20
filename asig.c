#include<stdio.h>

int main(){
    int a,b,c;
    a=b=c = 10; //Asignación multiple de valor a la variable
    printf("El valor de a es %i \n",a);
    printf("Ingrese un entero para sumar a: ");
    int dato;
    scanf("%i",&dato);
    
    // sumarle al actual un nuevo valor, en este caso el valor de dato
    a += dato;
    /* a-=dato;
       a*=dato;
       a/=dato;
    */ 
    printf("El nuevo valor de a es %i",a);
    return 0;
}