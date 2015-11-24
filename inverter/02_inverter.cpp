#include<stdio.h>

#include<stdlib.h>

int main(){
    
    int origen,
        destino = 0;
        /*Preguntar un numero al user*/
        printf("Numero:");
        /*Ponerlo en la variable de origen */
        scanf(" %i", &origen);
    
        /*Haz que origen se multiplique por 10 sume igual a origen tanto por 10 y divida la variable origen entre 10 */
        do{
        destino *= 10;
        destino += origen % 10;
        origen /= 10;
        /*While hace mientras que origen distinto igual a 0*/
         }while (origen != 0);
        /*Pon un numero entero con la variable destino*/
        printf("%i\n", destino);

     return EXIT_SUCCESS;
}
