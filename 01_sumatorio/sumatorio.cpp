#include<stdio.h>
#include<stdlib.h>

int main(){
      
       int resultado = 0;
       int entrada;
       FILE *pf;
      
      pf = fopen ("sumatorio.txt", "r");
      fscanf(pf, " %i", &entrada);
      resultado += entrada;
      fclose(pf);
        
      printf("%i\n", resultado);  

       return EXIT_SUCCESS;
}
