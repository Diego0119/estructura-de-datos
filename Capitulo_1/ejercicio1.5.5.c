// Escribir una funcion que encuentre el segundo menor elemento de un arreglo
#include <stdio.h>
#include <limits.h>

int second_minor_number_of_array(int array[], int size_of_array);

int main()
{
    int array[] = {3, 2, 5, 2, 4, 7, 7, 8, 1};
    int size_of_array = sizeof(array) / sizeof(array[0]);
    int second_minor = second_minor_number_of_array(array, size_of_array);
    printf("El segundo menor es: %d\n", second_minor);
    return 0;
}

int second_minor_number_of_array(int array[], int size_of_array)
{
    int first_minor = INT_MAX;
    int second_minor = INT_MAX;
    int array[] = {3, 2, 5, 2, 4, 7, 7, 8, 1};

    for (int i = 0; i < size_of_array; i++)
    {
        if (array[i] < first_minor)
        {
            second_minor = first_minor; // 3
            first_minor = array[i];     // 2
        }
        else if (array[i] < second_minor && array[i] != first_minor)
        {
            second_minor = array[i];
        }
    }

    return second_minor;
}
