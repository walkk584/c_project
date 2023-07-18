#include<stdio.h>

int a=7;
int b;

int main(){

	printf("Bienvenido\n");
	printf("\nEscriba un numero:\n");
	scanf("%d",&b); //amperson diferencia la memoria de una variable escrita

	if(b==a){
	printf("\na y b son iguales\n");
	}else{
	printf("\n%d\n",b);	
	}
}
