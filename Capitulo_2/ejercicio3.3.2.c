// Dado el conjunto B={8,4,2,7,9,12,-45,3,-46,5,34,23,10,0,33,-10,-8,6} se pide ordenar entre
// los índices [0..7] con el método burbuja, en el rango [8..13] con el método
// inserción, y el rango sobrante con el método selección.

#include <stdio.h>

int swap(int *x, int *y);
int bubbleSort(int array[]);
int insertionSort(int array[]);
int selectionSort(int array[]);

int main()
{
    int array[] = {8, 4, 2, 7, 9, 12, -45, 3, -46, 5, 34, 23, 10, 0, 33, -10, -8, 6};
    int n = sizeof(array) / sizeof(array[0]);
    bubbleSort(array);
    insertionSort(array);
    selectionSort(array);
    return 0;
}

int swap(int *x, int *y)
{
    int aux = *y;
    *y = *x;
    *x = aux;
}

int bubbleSort(int array[])
{
    int i, j, count;
    int n = 8;

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
int insertionSort(int array[])
{
    int i, temp, j;
    int n = 14;

    for (i = 9; i < n; i++)
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
    for (i = 8; i < n; i++)
    {
        printf("[%d]", array[i]);
    }
}

int selectionSort(int array[])
{
    int i, menor, j;
    int n = 19;

    for (i = 14; i < n - 1; i++)
    {
        menor = i;
        for (j = i + 1; j < n; j++)
        {
            if (array[j] < array[menor])
                swap(&array[menor], &array[i]);
        }
    }
    for (i = 14; i < n; i++)
    {
        printf("[%d]", array[i]);
    }
}