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
    return 0;
}