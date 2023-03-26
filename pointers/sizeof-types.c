#include <stdio.h>
int main(void)
{
    char c;
    short s;
    int i;
    long l;
    long long ll;
    float f;
    double d;
    long double ld;
    int array[20];    // create array of 20 int elements
    int *ptr = array; // create pointer to array
    printf("sizeof c = % u\tsizeof(char) = %u"
           "\nsizeof s = % u\tsizeof(short) = %u"
           "\nsizeof i = % u\tsizeof(int) = %u"
           "\nsizeof l = % u\tsizeof(long) = %u"
           "\nsizeof ll = % u\tsizeof(long long) = %u"
           "\nsizeof f = % u\tsizeof(float) = %u"
           "\nsizeof d = % u\tsizeof(double) = %u"
           "\nsizeof ld = % u\tsizeof(long double) = %u"
           "\n sizeof array = %u"
           "\nsizeof ptr = % u\n ",
           sizeof c,
           sizeof(char), sizeof s, sizeof(short), sizeof i,
           sizeof(int), sizeof l, sizeof(long), sizeof ll,
           sizeof(long long), sizeof f, sizeof(float), sizeof d,
           sizeof(double), sizeof ld, sizeof(long double),
           sizeof array, sizeof ptr);
}