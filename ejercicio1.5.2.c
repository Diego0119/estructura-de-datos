// implementar una funcion que cuente el numero de elementos duplicados en un arreglo

#include <stdio.h>

int count_duplicates(int arreglo[], int size_of_array);

int main()
{
    int arreglo[] = {0, 1, 0, 1, 2, 3, 4, 5, 4, 7, 0, 9, 5, 7, 2}; // 7 duplicados
    int size_of_array = sizeof(arreglo) / sizeof(arreglo[0]);
    int number_of_duplicates = count_duplicates(arreglo, size_of_array);
    printf("El numero de duplicados es: %d\n", number_of_duplicates);

    return 0;
}

int count_duplicates(int arreglo[], int size_of_array)
{
    int count = 0, index = 0, i = 0, j = 0;
    int number_to_check = 0;

    while (i < size_of_array)
    {
        while (j < size_of_array)
        {
            if (arreglo[i] == arreglo[j + 1])
            {
                count++;
                break;
            }
            else
            {
                j++;
            }
        }
        i++;
        j = i + 1;
    }

    return count;
}
