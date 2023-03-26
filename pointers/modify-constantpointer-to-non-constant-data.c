#include <stdio.h>

int main(void)
{
    int x;
    int y;

    int *const ptr = &x;

    *ptr = 7; // allowed *ptr is not const
    // ptr = &y; // error cannot be modified;
}
