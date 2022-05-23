#include <stdio.h>
#include <stdbool.h>
int main()
{
    int a = 10;

    double b = 10.5;
    printf("%lu\n", sizeof(b)); //8 bytes = 64bits
    float c = 10.5;
    printf("%lu\n", sizeof(c)); //8 bytes = 64bits
    char d = 'a';
    char e[] = "char array";
    bool f = false;

    int slices = 17;
    int people = 2;

    double slicesPerPerson = (double)slices/people;
    printf("slice per person is %lf\n",slicesPerPerson);

    double test1 = 25/2*2;
    printf("test1 =  %lf\n",test1);

    double test2 = (double)25/2*2;
    printf("test2 =  %lf\n",test2);
    return 0;

}