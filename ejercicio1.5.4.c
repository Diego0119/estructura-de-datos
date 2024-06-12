// Escribir una funcion que elimne un elemento de una posicion dada de un arreglo

#include <stdio.h>

void delete_element_of_array(int array[], int size_of_array, int element_to_delete);

int main()
{
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int element_to_delete = 7;
    int size_of_array = sizeof(array) / sizeof(array[0]);
    delete_element_of_array(array, size_of_array, element_to_delete);
    return 0;
}

void delete_element_of_array(int array[], int size_of_array, int element_to_delete)
{
    int i = 0;
    int j = 0;
    while (i < size_of_array)
    {
        if (array[i] == element_to_delete)
        {
            array[i] = NULL;
        }

        i++;
    }

    do
    {
        printf("[%d]", array[j]);
        j++;
    } while (j < size_of_array);
}
