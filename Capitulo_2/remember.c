#include <stdio.h>

void swap(int *x, int *y);
void bubbleSort(int array[], int n);
void selectionSort(int array[], int n);
void insertionSort(int array[], int n);

int main()
{
    int array[] = {1, 4, 6, 42, 5, 7, -14, 6, 8};
    int n = sizeof(array) / sizeof(array[0]);
    bubbleSort(array, n);
    printf("\n");
    selectionSort(array, n);
    printf("\n");
    insertionSort(array, n);
    return 0;
}

void swap(int *x, int *y)
{

    int aux = *x;
    *x = *y;
    *y = aux;
}

void bubbleSort(int array[], int n)
{
    int i, j;

    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                swap(&array[j], &array[j + 1]);
            }
        }
    }

    for (i = 0; i < n; i++)
    {
        printf("[%d]", array[i]);
    }
}

void selectionSort(int array[], int n)
{
    int i, j, menor;

    for (i = 0; i < n - 1; i++)
    {
        menor = i;
        for (j = i + 1; j < n; j++)
        {
            if (array[j] < array[menor])
            {
                menor = j;
            }
        }
        swap(&array[menor], &array[i]);
    }

    for (i = 0; i < n; i++)
    {
        printf("[%d]", array[i]);
    }
}

void insertionSort(int array[], int n)
{
    int i, j, key;

    for (i = 1; i < n; i++)
    {
        key = array[i];
        j = i - 1;

        while (j >= 0 && array[j] > key)
        {
            array[j + 1] = array[j];
            j = j - 1;
        }
        array[j + 1] = key;
    }

    for (i = 0; i < n; i++)
    {
        printf("[%d]", array[i]);
    }
}