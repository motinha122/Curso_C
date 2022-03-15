#include <stdio.h>

int main()
{
    printf("Number of eggs: ");

    int eggs;
    scanf("%i",&eggs);

    double dozen = eggs / 12;
    printf("Number os dozens: %f",dozen);

    return 0;
}

