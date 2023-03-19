#include <stdio.h>

void cubeByReference(int *nPtr);

int main(void)
{

    int number = 5;
    printf("The original value of number is %d", number);
    // pass address of number to cubeByReference
    cubeByReference(&number);
    printf("\nThe new value of number is %d\n", number);
}

// calculate cube of *nPtr; actually modifies number in main
void cubeByReference(int *nPtr)
{
    *nPtr = *nPtr * *nPtr * *nPtr; // cube *nPtr
}