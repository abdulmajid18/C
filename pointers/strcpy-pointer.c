#include <stdio.h>
#define SIZE 10

void copy2(char *s1, const char *s2);

int main(void)
{
    char string1[SIZE];
    char string2[] = "Good Bye";

    copy2(string1, string2);
    printf("string1 = %s \n", string1);
}

void copy2(char *s1, const char *s2)
{
    for (; (*s1 = *s2) != '\0'; ++s1, ++s2)
    {
        ;
    }
}
