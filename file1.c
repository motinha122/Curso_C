#include <stdio.h>

void printArray(int* A,int rowSize, int colSize)
{
    for(int row = 0;row < rowSize;row++)
    {
        for(int col = 0;col < colSize;col++)
        {
            printf("Address of B[%d][%d] is : \n",row,col);
            printf("Value of B[%d][%d] is : \n",row,col);
        }
    }
}

int main() 
{ 
                                                    //                   [Example] Address :    400,404 ,408, 412, 416, 420
    int B[2][3] = {{4,5,6},{7,8,9}};    // This 2D array its a 1D array         |  4  |  5  |  6  |  7  |  8  |  9  | 
                                                    // with 3 ints per row (2r and 3c)           --B[0]-- | --B[1]--               
    int size = sizeof(B)/sizeof(B[0][0]); //sizeof => size in bytes

    printArray(*B,2,3);

    return 0;
}

