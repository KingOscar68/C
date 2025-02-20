#include<stdio.h>

int main(){
    int n1, n2;

    printf("Ingrese 2 numeros enteros: \n");
    scanf("%i %i",&n1,&n2);
    
    // operador if para condicionales, % en este caso es residuo

    //if(n1 % n2 == 0 && n2 % n1 == 0){ doble condicion
    if(n1 % n2 == 0){
        printf("%i es divisible por %i\n", n1, n2);
    }else{
        printf("%i no es divisible por %i\n", n1, n2);
    }


    // Condicional multiple
    char numero;
    printf("digite un caracter a, b o c \n");
    scanf("%s",&numero);

    switch (numero)
    {
    case 'a':
        printf("El caracter ingresado es a\n");
        break;
    case 'b':
        printf("El caracter ingresado es b\n");
        break;
    case 'c':
        printf("El caracter ingresado es c\n");
        break;
    default:
        printf("Caracter no valido");
        break;
    }
    
    // Condicional tipo ?
    int dato;
    printf("ingrese un dato: \n");
    scanf("%i",&dato);

    /* Condicional en una linea, si se cumple lo del ()
       entonces se ejecuta lo primero, sino se ejecuta lo segundo
    */
    (dato%2 == 0) ? printf("El numero es par"): printf("El numero es impar");

    return 0;
}