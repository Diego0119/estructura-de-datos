// Dado el arreglo ordenado A = {-78, -34, 2, 2, 5, 8, 8, 12, 34, 67, 78, 99} , buscar el elemento 67 con busqueda binarea iterativa

#include <stdio.h>

int binary_search(int array[], int first_index, int last_index, int element);

int main()
{

    return 0;
}

int binary_search(int array[], int first_index, int last_index, int element)
{
    while (first_index <= last_index)
    {
        int middle = first_index + (last_index - first_index) / 2;

        if (array[middle] == element)
        {
            return middle;
        }

        if (array[middle] > element)
        {
            last_index = middle - 1;
        }

        if (array[middle] < element)
        {
            first_index = middle + 1;
        }
    }
    return -1;
}
