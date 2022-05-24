#include "5.2-libraries.h"
int oldestValue(int ages[],int size)
{
    int largest = ages[0];
    for (int i = 1; i < size; i++)
    {
        /* code */
        if(ages[i] > largest)
        {
            largest = ages[i];
        }
    }
    return largest;
    
}

int square(int input)
{
    return input * input;
}

int power(int input,int exponent)
{
    if(exponent == 1)
    {
        return input;
    }else
    {
        return input * power(input,exponent-1);
    }
}

void changeVal(int *input)
{
    *input = 90000;
}