#include <stdio.h>
#include <stdlib.h>

int main()
{
    const int NUM = 1;
    char nombre[20];
    int edad;

    /*
        printf("Dime tu edad:");
        scanf("%d", &edad); //%lf para flotantes, %c para char y %s para cadenas de caracteres
        printf("Tienes %d anios \n", edad);

        printf("Dime tu nombre:");
        fgets(nombre, 20, stdin);
        printf("Tu nombre es %s \n", nombre);
    */

    int n = 0, m = 0, longitud = 0, i = 0;
    int vEdades[] = {15, 25, 35};
    n = sizeof(vEdades);
    m = sizeof(vEdades[0]);
    longitud = n/m;

    for (i = 0; i < (longitud); i++){
        printf("La edad de la posicion %d es: %d \n", i+1, vEdades[i]);
    }

    return 0;
}
