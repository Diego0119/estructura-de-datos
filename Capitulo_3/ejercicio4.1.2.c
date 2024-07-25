// Se desea implementar un sistema de matriculas de automoviles, cree las estructuras necesarias.

#include <stdio.h>
#include <string.h>

struct Matricula
{
    char numero[12];
};

struct InformacionVehiculo
{
    int kilometros;
    int numero_duenos;
};

struct Propietario
{
    int rut;
    struct Matricula matriculas[10];
    char nombre[50];
    char fono[15];
    struct InformacionVehiculo informacionVehiculo;
};

int main()
{
    struct Propietario propietario1;
    propietario1.rut = 12345678;
    strcpy(propietario1.nombre, "Juan Perez");
    strcpy(propietario1.fono, "987654321");

    strcpy(propietario1.matriculas[0].numero, "AB-43-FG-53");
    strcpy(propietario1.matriculas[1].numero, "AB-43-FG-54");

    propietario1.informacionVehiculo.kilometros = 990;
    propietario1.informacionVehiculo.numero_duenos = 2;

    printf("Propietario: %s\n", propietario1.nombre);
    printf("RUT: %d\n", propietario1.rut);
    printf("Teléfono: %s\n", propietario1.fono);
    printf("Matrícula 1: %s\n", propietario1.matriculas[0].numero);
    printf("Matrícula 2: %s\n", propietario1.matriculas[1].numero);
    printf("Kilometraje: %d\n", propietario1.informacionVehiculo.kilometros);
    printf("Número de dueños anteriores: %d\n", propietario1.informacionVehiculo.numero_duenos);

    return 0;
}