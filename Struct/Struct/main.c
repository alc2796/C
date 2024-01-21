#include <stdio.h>
#include <stdlib.h>

typedef struct alumnos {
    char nombre[30];
    int edad;
    double nota;
} ALUMNOS;

int main()
{
    ALUMNOS alumno1;
    alumno1.edad = 21;
    strcpy(alumno1.nombre, "Andres");
    alumno1.nota = 9.37;

    printf("Nombre: %s", alumno1.nombre);

    return 0;
}
