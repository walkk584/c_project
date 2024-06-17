#include<stdio.h>

int a,b;

int main(){
    
    printf("First number:");
    scanf("%d",&a);
    
    printf("Second number:");
    scanf("%d",&b);
    
    int f = a%b;
    
    if (f == 0) {
        
        printf("Son divisibles\n");
    }else {
        
        printf("No son divisibles\n");
    }
    
    return 0;
}
