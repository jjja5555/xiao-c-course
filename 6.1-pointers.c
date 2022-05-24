#include <stdio.h>

void square(int *input)
{
        *input *= *input;
}

void sizeExample(int ages[])
{
    printf("Memory size of ages = %lu\n",sizeof(ages));
    printf("Memory address of ages = %p\n",ages[0]);
}

int main()
{
    int a = 100;
    int *b = &a;
    printf("The value of a is %d, and addres is %p\n",a,&a);
    printf("The value of *b is %d, and addres is %p\n",*b,b);

    a = 200;
    printf("The value of a is %d, and addres is %p\n",a,&a);
    printf("The value of *b is %d, and addres is %p\n",*b,b);

    *b = 300;
    printf("The value of a is %d, and addres is %p\n",a,&a);
    printf("The value of *b is %d, and addres is %p\n",*b,b);
    
    int d = 3000;

    b = &d;

    printf("The value of a is %d, and addres is %p\n",d,&d);
    printf("The value of *b is %d, and addres is %p\n",*b,b);

    int x = 5;
    square(&x);
    printf("%d\n",x);

    int ages[] = {2,43,543535,43,43,43};
    int size = 5;

    printf("Memory size of ages = %lu\n",sizeof(ages));
    printf("Memory address of ages = %p\n",ages);
    sizeExample(ages);
    return 0;
}