// Using function memmove
#include <stdio.h>
#include <string.h>
int main(void)
{
    char x[] = "Home Sweet Home"; // initialize char array x
    printf("%s%s\n", "The string in array x before memmove is: ", x);
    printf("%s%s\n", "The string in array x after memmove is: ",
           (char *)memmove(x, &x[5], 10));
}