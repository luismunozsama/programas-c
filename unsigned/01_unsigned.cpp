#include<stdio.h>
#include<stdlib.h>

int main(){
   unsigned int a=3;
    
    printf("Dime cualquier numero: ");
    scanf("%X", &a);

    printf("%x", ~a);  

   return EXIT_SUCCESS;
}
