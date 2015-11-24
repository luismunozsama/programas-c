#include<stdio.h>
#include<stdlib.h>

/*Esto es una constante*/

#define BASE 10

int main(){

    int entrada;
      
       /*Preguntar un numero entre 0 y 999*/
      printf("Introduce un numero entre 0 y 999:");
    
       scanf(" %i", &entrada);

      /* Para imprimir el numero  %i para que sea un numero entero */
       printf("%i", entrada % BASE);
      /*La /= Sirve para igualar "entrada" es igual a "entrada" entre 10*/  
       entrada /=BASE;
      /* Para imprimir el numero  %i para que sea un numero entero */
       printf("%i", entrada % BASE);
       /*La /= Sirve para igualar "entrada" es igual a "entrada" entre 10*/ 
        entrada /=BASE;
      /* Para imprimir el numero  %i para que sea un numero entero */
       printf("%i", entrada % BASE);
       /*La /= Sirve para igualar "entrada" es igual a "entrada" entre 10*/
        entrada /=BASE;
    
       printf("\n");

    return EXIT_SUCCESS;
}
