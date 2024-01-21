#include <stdio.h>
#include <stdlib.h>

int Cuadrado (int numero);

int main()
{
    char nombre[] ="Lorenzo";
    int edad = 19;

    Saludo(nombre, edad);

    printf("El cuadrado de %d es: %d", edad, Cuadrado(edad));
    return 0;
}

int Cuadrado(int numero){
    return numero * numero;
}

void Saludo(char nombre[], int edad){
    printf("Nombre: %s \n", nombre);
    printf("Edad: %d \n", edad);
}
