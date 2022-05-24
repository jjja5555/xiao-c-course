#include <stdio.h>
#include <stdbool.h>
int main()
{
    printf("\nfoce precedence with()\n");
    int x = 2 * (3 + 3);
    int y = (2 * 3) + 3;

    printf("x = %d\n", x);
    printf("y = %d\n", y);

    printf("\nModulus operator\n");
    int c = 10%3;
    printf("10 %% 3 = %d\n", c);

    printf("\nUnary minus\n");
    int a = 5;
    int b = -a;
    printf("a = %d\n",a);
    printf("b = %d\n",b);

    printf("\nPost increment\n");
    a = 5;
    b = 5;
    b = a++;
    printf("a = %d\n",a);
    printf("b = %d\n",b);

    printf("\nPre increment\n");
    a = 5;
    b = 5;
    b = ++a;
    printf("a = %d\n",a);
    printf("b = %d\n",b);

    printf("\nAssignment operators:\n");
    a = 5;
    b = 5;
    b += a;
    printf("b += a = %d\n",b);
    a *= 30;
    printf("b += a = %d\n",a);
    a %= 140;
    printf("a %%= 140 = %d\n",a);

    return 0;
}