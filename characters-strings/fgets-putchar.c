#include <stdio.h>
#define SIZE 80

void reverse(const char *const sPtr);

int main(void)
{
    char squence[SIZE];

    puts("Enter a line of text: ");

    fgets(squence, SIZE, stdin);

    printf("\n%s", "The line printed backward is: ");
    reverse(squence);
}

// recursively outputs characters in string in reverse order
void reverse(const char *const sPtr)
{
    // if end of the string
    if ('\0' == sPtr[0])
    { // base case
        return;
    }
    else
    {                      // if not end of the string
        reverse(&sPtr[1]); // recursion step
        putchar(sPtr[0]);  // use putchar to display character
    }
}