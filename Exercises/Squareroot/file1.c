#include <stdio.h>
#include <stdbool.h>

double squareroot(double x)
{

    //double number = x;
    int numberInt = (int)x;

    int sqroot = 0;
    int i = 0;

    // Check if number is perfect square root

    bool isPerfect = false;
    bool isntPerfect = false;

    while (isPerfect == false && isntPerfect == false)
    {
        if (i * i == numberInt)
        {
            sqroot = i;
            isPerfect = true;
            printf("\nSquareroot of %d is: %d\n",numberInt, sqroot);
        }
        if (i * i > numberInt)
        {
            sqroot = --i;
            isntPerfect = true;
            i = 0;
        }
        i++;
    }

    // Calculates the decimal part of a imperfect square root

    if (isntPerfect == true)
    {
        int numberToResult = numberInt - (sqroot * sqroot);
        double iterator = 0;
        int calculusVar = sqroot * 2;
        double result = sqroot;
        int numberMinus = 0;
        double divisor = 1;
        i=1;

        for (i=1 ;i <= 6;i++)      // How much precision points to the decimal part
        {
            numberToResult -= numberMinus;
            numberToResult *= 100;
            calculusVar *= 10;
  
            bool found = false;
            while (found == false)
            {
                if ((calculusVar + iterator) * iterator > numberToResult)
                {
                    found = true;
                    iterator -=1 ;
                    numberMinus = (calculusVar + iterator) * iterator;
                    calculusVar += 2*iterator;
                    divisor *=10;
                    result += (iterator/divisor);
                    iterator = 0;
                }
                iterator++;
            }
        }
        printf("Squareroot of %d is: %lf\n",numberInt,result);
    }

    return 0;
}

int main() // First part - Inputs
{
    double cat1, cat2;

    printf("Enter the first number: ");
    scanf("%lf", &cat1);

    printf("Enter the second number: ");
    scanf("%lf", &cat2);

    squareroot(cat1);
    squareroot(cat2);

    //printf("\nPress any key to exit");
    //getch();
    return 0;
}
