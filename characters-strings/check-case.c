#include <ctype.h>
#include <stdio.h>

int main(void)
{

    printf("%s\n%s%s\n%s%s\n\n", "According to isdigit: ",
           isdigit('8') ? "8 is a" : " 8 is not a ",
           "digit",
           isdigit('#') ? "# is a" : "# is not a", " digit");
}