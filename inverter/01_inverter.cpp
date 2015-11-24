#include<stdio.h>
#include<stdlib.h>


int main(){
      
    int origen,
        destino = 0;
      
      printf("Numero: ");
    
       scanf(" %i", &origen);
       
       destino += origen % 10;

       origen /= 10;

       destino += origen % 10;

       origen /= 10;

       destino += origen % 10;

       origen /= 10;
        
       printf("%i\n", destino);

    return EXIT_SUCCESS;
}
