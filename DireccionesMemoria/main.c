#include <stdio.h>
#include <stdlib.h>

int main()
{
    int entero = 5;
    int *pentero = &entero;

    double decimal = 10.2;
    double *pdecimal = &decimal;

    char letra = 'A';
    char *pletra = &letra;

    printf("%p \n", pentero);
    printf("%d \n", *pentero);
    printf("%d \n", *&entero);
    printf("%p \n", pdecimal);
    printf("%p \n", pletra);

    return 0;
}
