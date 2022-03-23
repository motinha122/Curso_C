#include <stdio.h>
#include <stdbool.h>

void doublevalue(int *x)
{
    *x *=2;
}

int main() 
{
    int x;
    printf("Value to double: ");
    scanf("%d",&x);
    doublevalue(&x);
    printf("Double value is: %d",x);
    return 0;
}

