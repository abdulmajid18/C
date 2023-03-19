#include <stdio.h>

int main(void)
{
    char array[5];

    printf("    Array = %p \n  &Array[0] = %p \n  &Array = %p \n  ",

           array, &array[0], &array);
}