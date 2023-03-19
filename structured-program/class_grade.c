#include <stdlib.h>
#include <stdio.h>>

void printHelp(char progname[]);

int main(int argc, char *argv[])
{
    if (argc != 11)
    {
        printHelp(argv[0]);
        return 1;
    }

    int i;
    int sum = 0;
    printf("Sum  is %d \n", sum);

    for (i = 1; i < argc; i++)
    {
        sum = sum + atoi(argv[i]);
    }
    printf("Sum Result is %d \n", sum);
    ;

    int result;
    result = sum / 10;

    printf("Average Result is %d \n", result);
}

void printHelp(char progname[])
{
    printf("%s integer ...\n", progname);
    printf("This program takes any number of "
           "integer values and sums them up\n");
}