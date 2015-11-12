#include<stdio.h>
#include<stdlib.h>

int main(){

    char my_name[20];
    char comando[0x100];
    system("toilet --gay -f pagga ´NAME´ ");

    /* Bloque de entrada de datos */
     printf("Name: ");
     scanf("%s",my_name);
    printf("Te llamas %s.\n", my_name);
    /* Opción clásica */
    // printf("Te llamas %s.\n", my_name);
    /* EMO */
    sprintf(comando,
            "toilet --gay -f pagga %s",
            my_name);

        system(comando);

     return EXIT_SUCCESS;
}
