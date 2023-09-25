#include<stdio.h>

int main(){

	//printf y scanf como partes del sistema c
	//cadena de control - lista de argumentos
	
	char c;
	int i;
	int new;

	printf("Escriba un caracter:");

	/*Flujo de entrada: direccion &c*/
	scanf("%c",&c);
	printf("Su numero de caracter es = %d\n",c);
	printf("Escriba un numero a agregarle:");
	scanf("%d",&i);

	new = c+i;

	printf("su nuevo caracter es = %c\n",new);


	return 0;
}
