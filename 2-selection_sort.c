#include "sort.h"
/**
 * selection_sort - sorts an array of integers in ascending order using the Selection sort algorithm
 * @array: The array to be printed
 * @size: Number of elements in @array
 */
void selection_sort(int *array, size_t size)
{
    size_t i, j, min_element;

    for(i = 0; i < size; i++)
    {
        min_element = i;
        for(j = i + 1; j < size; j++)
        {
            if(array[j] < array[min_element])
            {
                min_element = j;
            }
        }
        if(min_element != i)
        {
            int temp = array[i];
            array[i] = array[min_element];
            array[min_element] = temp;
        }
        print_array(array, size);
    }
}