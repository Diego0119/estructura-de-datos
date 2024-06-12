#include <stdio.h>
#include <limits.h>

int first_minor_number_of_array(int array[], int size_of_array);
int second_minor_number_of_array(int array[], int size_of_array);

int main()
{
    int array[] = {3, 2, 5, 2, 4, 7, 7, 8, 1};
    int size_of_array = sizeof(array) / sizeof(array[0]);
    int first_minor = first_minor_number_of_array(array, size_of_array);
    int second_minor = second_minor_number_of_array(array, size_of_array);

    printf("El primer menor es: %d\n", first_minor);
    printf("El segundo menor es: %d\n", second_minor);
    return 0;
}

int first_minor_number_of_array(int array[], int size_of_array)
{
    int first_minor = INT_MAX;

    for (int i = 0; i < size_of_array; i++)
    {
        if (array[i] < first_minor)
        {
            first_minor = array[i];
        }
    }

    return first_minor;
}

int second_minor_number_of_array(int array[], int size_of_array)
{

    int first_minor = INT_MAX;
    int second_minor = INT_MAX;

    for (int i = 0; i < size_of_array; i++)
    {
        if (array[i] < first_minor)
        {
            second_minor = first_minor;
            first_minor = array[i];
        }
        else if (array[i] < second_minor && array[i] != first_minor)
        {
            second_minor = array[i];
        }
    }

    return second_minor;
}
