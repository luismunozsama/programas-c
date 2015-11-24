#include<stdio.h>
#include<stdlib.h>

int main(){
      
    int entrada;
      
       /*Preguntar un numero entre 0 y 999*/
      printf("Introduce un numero entre 0 y 999:");
    
       scanf(" %i", &entrada);

      /* Para imprimir el numero  %i para que sea un numero entero */
       printf("%i", entrada % 10);
      /*La /= Sirve para igualar "entrada" es igual a "entrada" entre 10*/  
        entrada /=10;
      /* Para imprimir el numero  %i para que sea un numero entero */
       printf("%i", entrada % 10);
       /*La /= Sirve para igualar "entrada" es igual a "entrada" entre 10*/ 
        entrada /=10;
      /* Para imprimir el numero  %i para que sea un numero entero */
       printf("%i", entrada % 10);
       /*La /= Sirve para igualar "entrada" es igual a "entrada" entre 10*/
        entrada /=10;
    
       printf("\n");

    return EXIT_SUCCESS;
}
