#include <stdio.h>

void doubleElements(int a[],int size)
{
    for (int i =0; i < size ;i++)
    {
        a[i] *=2;
    }
}

int main() 
{
    int A[] = {1,2,3,4,5};
    int size = sizeof(A)/sizeof(A[0]);
    doubleElements(A,size);
    for (int i =0;i < size;i++)
    {
        printf("%d ",A[i]);
        printf("%d\n", &A+i);
    }
    return 0;
}

