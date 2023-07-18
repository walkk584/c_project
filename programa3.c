/*uso de enteros u numeros para reprecentar caracteres*/

#include<stdio.h> //archivo del compilador

char cadena[10];
int i;

//inicio del programa
int main(){

    printf("escriba una cadena:");
    scanf("%s",&cadena); //variable pura de memoria
    i = cadena;

    printf("\nsu cadena es = %s\n",&cadena);

    //letra de cada cadena

    printf("la ultima letra de la cadena es = ");
    printf("%d\n",&i--);

    return 0;
}
