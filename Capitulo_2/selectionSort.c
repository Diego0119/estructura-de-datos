// este metodo selecciona el menor elemento del conjunto y compararlo con la primera
// posicion del arreglo, y despues seguir comparando

void selectionSort(int array[], int n)
{
    int i, j, min_idx;
    for (i = 0; i < n - 1; i++)
    {
        min_idx = i; // primer elemento del arreglo
        for (j = i + 1; j < n; j++)
        {
            if (array[j] < array[min_idx]) // busqueda del menor
            {
                min_idx = j;
            }
        }
        // se intercambia el menor con el primer elemento del arreglo
        swap(&array[min_idx], &array[i]);
    }
}