#include <stdio.h>
#define SIZE 10

void copy1(char *const s1, const char *const s2);

int main(void)
{
    char string1[SIZE];
    char *string2 = "Hello";

    copy1(string1, string2);
    printf("string1 = %s \n", string1);
}

void copy1(char *const s1, const char *const s2)
{
    for (size_t i = 0; (s1[i] = s2[i]) != '\0'; ++i)
    {
        ;
    }
}
