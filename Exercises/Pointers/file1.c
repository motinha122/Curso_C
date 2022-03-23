#include <stdio.h>
#include <stdbool.h>

int main() 
{
    int a =5;
    int *p = &a;
    
    //p -> address 
    //*p -> value of address

    printf("pointer: %d , pointer + 1: %d",p,(p+1));
    return 0;
}

