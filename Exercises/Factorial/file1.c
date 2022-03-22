#include <stdio.h>
#include <stdbool.h>

int factorial(int x)
{
    int n =1;

    while(x >0)
    {
        n *= x;
        x--;
    }

    return n;
}


int main() 
{
    int var;
    printf("Enter a number to calculate factorial: ");
    scanf("%d",&var);
    printf("Factorial of %d is %d",var,factorial(var));
    return 0;
}

