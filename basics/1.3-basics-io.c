#include <stdio.h>

int main()
{
    printf("Hello World\n");
    int x = 50;
    int y; //declare
    y  = 10; //initilize
    printf("%s World\n","Hello");

    printf("The value of x is %d\n",x);

    printf("X: %d, Y: %d\n",x,y);
    printf("Give me a radius: ");
    int radius;
    scanf("%d",&radius);// address-of-operator (pointer)
    printf("The radius is %d\n",radius);

    char name[20]; //char array of 20 characters.
    scanf("%19s",name);
    printf("Your name is %s\n",name);
    return 0;
}
