// Implementar una funcion que imprima solo numeros impares de un arreglo

#include <stdio.h>

void printf_only_pair_numbers(int array[], int size_of_array);

int main()
{
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size_of_array = sizeof(array) / sizeof(array[0]);
    printf_only_pair_numbers(array, size_of_array);
    return 0;
}
void printf_only_pair_numbers(int array[], int size_of_array)
{
    printf("Arreglo con solo numeros pares\n");
    int i = 0;
    while (i < size_of_array)
    {
        if (array[i] % 2 == 0)
        {
            printf("[%d]", array[i]);
        }
        i++;
    }
}
