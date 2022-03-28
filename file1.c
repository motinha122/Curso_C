#include <stdio.h>

void printArray(int* A,int size)
{
    for(int i = 0; i< size;i++)
    {
    }
}

int main() 
{                                                   //                   [Example] Address :    400,404 ,408, 412, 416, 420
    int B[2][3] = {{4,5,6},{7,8,9}};    // This 2D array its a 1D array         |  4  |  5  |  6  |  7  |  8  |  9  | 
                                                    // with 3 ints per row (2r and 3c)           --B[0]-- | --B[1]--               
    int size = sizeof(B)/sizeof(B[0][0]);
    

    printf("Address of B[0][0] : %d\n",B); 
    printf("Value of B[0][0] : %d\n",**B);    
    printf("Address of B[1][0] : %d\n",(B+1));
    printf("Value of B[1][0] : %d\n",**(B+1));

    return 0;
}

