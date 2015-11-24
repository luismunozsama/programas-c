#include <stdio.h>
#include <stdlib.h>

int main(){

      FILE *pf;

      pf = fopen("letracancion.txt","w");

      fprintf (pf, "I´d love to change the world");

      fclose(pf);

    return EXIT_SUCCESS;
}
