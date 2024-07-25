// Dado el siguiente conjunto A={2,8,12,34,2,67,8,5,-78,99,-34,78} se pide
// ordenar usando los metodos bubble sort, selection sort y insertion sort

#include <stdio.h>

int bubbleSort(int array[], int n);
int selectionSort(int array[], int n);
int insertionSort(int array[], int n);
int swap(int *x, int *y);

int main()
{
    int array[] = {2, 8, 12, 34, 2, 67, 8, 5, -78, 99, -34, 78};
    int n = sizeof(array) / sizeof(array[0]);
    bubbleSort(array, n);
    printf("\n");
    selectionSort(array, n);
    printf("\n");
    insertionSort(array, n);

    return 0;
}

int swap(int *x, int *y)
{
    int aux = *x;
    *x = *y;
    *y = aux;
}

int bubbleSort(int array[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (array[j] > array[j + 1])
                swap(&array[j], &array[j + 1]);
        }
    }

    for (i = 0; i < n; i++)
    {
        printf("[%d]", array[i]);
    }
}
int selectionSort(int array[], int n)
{
    int menor, i, j;

    for (i = 0; i < n - 1; i++)
    {
        menor = i;
        for (j = i + 1; j < n; j++)
        {
            if (array[j] < array[menor])
                menor = j;
        }
        swap(&array[menor], &array[i]);
    }

    for (i = 0; i < n; i++)
    {
        printf("[%d]", array[i]);
    }
}
int insertionSort(int array[], int n)
{
    int temp, i, j;

    for (i = 1; i < n; i++)
    {
        temp = array[i];
        j = i - 1;

        while (j >= 0 && array[j] > temp)
        {
            array[j + 1] = array[j];
            j = j - 1;
        }
        array[j + 1] = temp;
    }

    for (i = 0; i < n; i++)
    {
        printf("[%d]", array[i]);
    }
}