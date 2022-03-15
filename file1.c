#include <stdio.h>

int main()
{
    char ASCII;
    printf("Character: ");
    scanf("%c", &ASCII);
    printf("%i\n", ASCII);

    int integer;
    printf("Please enter a integer btw 0 - 127: ");
    scanf("%i", &integer);
    printf("%c\n", integer);
    return 0;
}

