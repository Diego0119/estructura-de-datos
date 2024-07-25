// Se desea implementar un repositorio de documentos, cree las estructuras necesarias para la busqueda de un documento
//  dada una palabra;

#include <stdio.h>
#include <string.h>

struct Documento
{
    int id;
    int numero_paginas;
    char tamaño[10];
    char titulo[50];
    char fecha_creacion[30];
};

struct Repositorio
{
    struct Documento documento[20];
};

void buscarDocumentoPorPalabra(struct Repositorio *repositorio, const char *palabra);

int main()
{
    struct Repositorio repositorio;

    repositorio.documento[0].id = 0;
    repositorio.documento[0].numero_paginas = 194;
    strcpy(repositorio.documento[0].tamaño, "20MB");
    strcpy(repositorio.documento[0].titulo, "Documento importante");
    strcpy(repositorio.documento[0].fecha_creacion, "12/12/2012");

    repositorio.documento[1].id = 1;
    repositorio.documento[1].numero_paginas = 120;
    strcpy(repositorio.documento[1].tamaño, "10MB");
    strcpy(repositorio.documento[1].titulo, "Informe anual");
    strcpy(repositorio.documento[1].fecha_creacion, "01/01/2023");

    buscarDocumentoPorPalabra(&repositorio, "anual");

    return 0;
}

void buscarDocumentoPorPalabra(struct Repositorio *repositorio, const char *palabra)
{
    int encontrado = 0;

    for (int i = 0; i < 20; i++)
    {
        if (strstr(repositorio->documento[i].titulo, palabra))
        {
            printf("Documento encontrado:\n");
            printf("ID: %d\n", repositorio->documento[i].id);
            printf("Número de páginas: %d\n", repositorio->documento[i].numero_paginas);
            printf("Tamaño: %s\n", repositorio->documento[i].tamaño);
            printf("Título: %s\n", repositorio->documento[i].titulo);
            printf("Fecha de creación: %s\n", repositorio->documento[i].fecha_creacion);
            printf("\n");
            encontrado = 1;
        }
    }

    if (!encontrado)
    {
        printf("No se encontraron documentos que contengan la palabra '%s' en el título.\n", palabra);
    }
}
