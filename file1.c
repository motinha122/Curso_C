#include <stdio.h>

void printChar(char* C)
{
    while(*C != '\0')
    {
        printf("%c\n",*C);
        C++;
    }
}

int main() 
{
    char c1[20];
    printf("Type ur name: ");
    scanf("%s",c1);
    printChar(c1);
    return 0;
}

