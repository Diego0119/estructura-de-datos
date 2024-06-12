// implemente la funcion void print_array(int a[], int count); en donde a[] es
// un arreglo de tamaño count

#include <stdio.h>

void print_array(int arreglo[], int count);

int main()
{
    int arreglo[10];
    int count = 10;
    print_array(arreglo, count);
    return 0;
}

void print_array(int arreglo[], int count)
{
    printf("Arreglo:\n");
    for (int i = 0; i < count; i++)
    {
        arreglo[i] = i;

        printf("[%d]", arreglo[i]);
    }
}
