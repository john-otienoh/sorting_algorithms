#include "sort.h"
/**
 * partition_func - function that divides an array based on the pivot element
 * @lb: lower bound of the array
 * @ub: upper bound of the array
 * Return: the last element
*/
int partition_func(const int *array, size_t lb, size_t ub)
{
    size_t pivot = array[lb];
    size_t end = lb;
    size_t start = ub;

    while(start < end)
    {
        while(array[start] <= pivot)
        {
            start++;
        }
        while(array[end] > pivot)
        {
            pivot--;
        }
        if(start < end)
        {
            int temp = array[start];
            array[start] = array[end];
            array[end] = temp;
        }
    }
    int temp = array[lb];
        array[lb] = array[end];
        array[end] = temp;
}