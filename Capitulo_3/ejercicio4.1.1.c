// Se desea crear un sistema de notas, cree las estructuras necesarias para almacenar los datos
#include <stdio.h>

struct Alumno
{
    int id_alumno;
    char nombre_alumno[50];
};

struct Asignatura
{
    int id_asignatura;
    char nombre[50];
};

struct Notas
{
    int id_asignatura;
    int id_alumno;
    double notas[10];
};

struct Notas notas_lenguaje, notas_matematicas, notas_historia;

int main()
{
    struct Alumno alumno1 = {1, "Pedro"};
    struct Alumno alumno2 = {2, "Juan"};

    struct Asignatura asignatura1 = {1, "Lenguaje"};
    struct Asignatura asignatura2 = {1, "Matematicas"};

    struct Notas notas_lenguaje = {1, 1, {6.5, 3.2, 4.2}};
    struct Notas notas_matematicas = {2, 1, {4.5, 1.2, 3.2}};

    printf("Alumno: %s\n", alumno2.nombre_alumno);
    printf("Asignatura: %s\n", asignatura2.nombre);
    printf("Notas: %.2f, %.2f, %.2f\n", notas_lenguaje.notas[0], notas_lenguaje.notas[1], notas_lenguaje.notas[2]);

    return 0;
}
