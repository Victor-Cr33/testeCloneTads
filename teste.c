#include <stdlib.h>
#include <stdio.h>

int main(){

    int num; 

   printf("Digite um número: ");
    
    scanf("%i", &num);

    if(num % 2 == 0){

       printf("par...");
    }
    else{
       printf("Impar...");
    }



 
 printf("\n");

    return 0;
}