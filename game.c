#include<stdio.h>

/*
 Programa que enseña a usar los datos de main, 
 que usara otra funcion, en este caso a comp_matriz
  */

//bucle que usa datos de main
void comp_matriz(int f, int c, int matriz[f][c]){

     for(int i=0; i<f; i++){
	     for(int j=0; j<c; j++){

             printf("%d",matriz[i][j]);
	     }
     printf("\n");	     
     }
}

int main(){

    printf("escriba un numero de filas:");
    int f;
    scanf("%d",&f);
    printf("\nescriba un numero de columnas:");
    int c;
    scanf("%d",&c);

    int matriz[f][c];

    //imprimer la matriz con datos de main
    comp_matriz(20,20,matriz);

    return 0;

}
