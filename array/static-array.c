#include <stdio.h>

void staticArrayInit(void);
void automaticArrayInit(void);

int main(void)
{
    puts("First call to each function");
    staticArrayInit();
    automaticArrayInit();

    puts("\n\nSecond call to each function");
    staticArrayInit();
    automaticArrayInit();
}

void staticArrayInit(void)
{
    // initialize elements to 0 before the function is called
    static int array1[3];

    // output contents of array1
    for (size_t i = 0; i <= 2; ++i)
    {
        printf("array1[%u] = %d ", i, array1[i]);
    }
    puts("\nValues on exiting staticArrayInit:");
    // modify and output contents of array1
    for (size_t i = 0; i <= 2; ++i)
    {
        printf("array1[%u] = %d ", i, array1[i] += 5);
    }
}

void automaticArrayInit(void)
{
    // initializes elements each time function is called
    int array2[3] = {1, 2, 3};
    puts("\n\nValues on entering automaticArrayInit:");
    // output contents of array2
    for (size_t i = 0; i <= 2; ++i)
    {
        printf("array2[%u] = %d ", i, array2[i]);
    }
    puts("\nValues on exiting automaticArrayInit:");
    // modify and output contents of array2
    for (size_t i = 0; i <= 2; ++i)
    {
        printf("array2[%u] = %d ", i, array2[i] += 5);
    }
}