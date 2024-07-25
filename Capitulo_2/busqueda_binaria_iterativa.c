#include <stdio.h>

int binary_search(int array[], int first_index, int last_index, int element);

int main()
{

    return 0;
}

int binary_search(int array[], int first_index, int last_index, int element)
{
    if (first_index <= last_index)
    {
        int middle = first_index + (last_index - first_index) / 2;
        if (array[middle] == element)
        {
            return middle;
        }
        if (array[middle] < element)
        {
            first_index = middle + 1;
        }
        else
        {
            last_index = middle - 1;
        }
    }

    return -1;
}