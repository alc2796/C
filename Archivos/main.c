#include <stdio.h>
#include <stdlib.h>

int main()
{
    char linea[255];
    FILE *parchivo = fopen("alumnos.txt", "r");
    fgets(linea, 255, parchivo);
    printf("%s", linea);
    //w (write) sobreescribe
    //a (annex) anade nuevos datos
    //r (read)
    //fprintf(parchivo, "Hola \n");
    fclose(parchivo);

    return 0;
}
