#include <stdio.h>


int square(int input)
{
    printf("%p\n",&input);
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

int oldestValue(int ages[],int size)
{
    int largest = ages[0];
    for (size_t i = 1; i < size; i++)
    {
        /* code */
        if(ages[i] > largest)
        {
            largest = ages[i];
        }
    }
    return largest;
    
}
int main()
{
    int x = 5;
    int output = square(x);
    printf("%p\n",&x);

    //x *= x;
    printf("%d\n",x);
    printf("%p\n",&x);

    int y = power(x,3);
    printf("%d\n",y);

    changeVal(&x);
    printf("%d\n",x);

    int ages[] = {1,4,33,53,34,34};
    int size = 6;
    printf("%d\n",oldestValue(ages,size));
    return 0;
}