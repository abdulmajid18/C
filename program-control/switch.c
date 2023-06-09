#include <stdio.h>

int main(void)
{
    unsigned int aCount = 0;
    unsigned int bCount = 0;
    unsigned int cCount = 0;
    unsigned int dCount = 0;
    unsigned int fCount = 0;

    puts("Enter the letter grades.");
    puts("Enter the EOF character to end input");
    int grade;

    while ((grade = getchar()) != EOF)
    {
        switch (grade)
        {
        case 'A':
        case 'a':
            ++aCount;
            break;
        case 'B':
        case 'b':
            ++bCount;
            break;
        case 'C': // grade was uppercase C
        case 'c': // or lowercase c
            ++cCount;
            break;
        case 'D': // grade was uppercase D
        case 'd': // or lowercase d
            ++dCount;
            break;
        case 'F': // grade was uppercase F
        case 'f': // or lowercase f
            ++fCount;
            break;
        case '\n': // ignore newlines,
        case '\t': // tabs,
        case ' ':  // and spaces in input
            break;
        default:
            printf("%s", "Incorrect letter grade entered.");
            puts(" Enter a new grade.");
            break; // optional; will exit switch anyway
        }
    }
    // output summary of results
    puts("\nTotals for each letter grade are:");
    printf("A: %u\n", aCount);
    printf("B: %u\n", bCount);
    printf("C: %u\n", cCount);
    printf("D: %u\n", dCount);
    printf("F: %u\n", fCount);
}