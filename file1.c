#include <stdio.h>
#include <stdbool.h>

int doublevalue(int x)
{
    x = x * 2;
    return x;
}

int main() 
{
    int x;
    printf("Value to double: ");
    scanf("%d",&x);
    printf("Double value is: %d",doublevalue(x));
    return 0;
}

