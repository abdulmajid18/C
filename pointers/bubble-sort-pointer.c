#include <stdio.h>
#define SIZE 10

void bubbleSort(int *const array, const size_t size);

int main(void)
{
    int a[SIZE] = {2, 6, 4, 8, 10, 12, 89, 68, 45, 37};

    puts("Data items in the original order");

    for (size_t i = 0; i < SIZE; ++i)
    {
        printf("%4d", a[i]);
    }

    bubbleSort(a, SIZE); // sort the array
    puts("\nData items in ascending order");

    // loop through array a
    for (size_t i = 0; i < SIZE; ++i)
    {
        printf("%4d", a[i]);
    }
    puts("");
}

void bubbleSort(int *const array, const size_t size)
{
    void swap(int *element1Ptr, int *element2Ptr);

    for (unsigned int pass = 0; pass < SIZE - 1; ++pass)
    {
        for (size_t j = 0; j < size; ++j)
        {

            if (array[j] > array[j + 1])
            {
                swap(&array[j], &array[j + 1]);
            }
        }
    }
}

void swap(int *element1Ptr, int *element2Ptr)
{
    int hold = *element1Ptr;
    *element1Ptr = *element2Ptr;
    *element2Ptr = hold;
}