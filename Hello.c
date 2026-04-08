#include <stdio.h>
int main()
{
    char lower;
    printf("The lowercase letter: ");
    scanf("%c",&lower);
    printf("The uppercase letter:%c",lower-32);
    return 0;
}
