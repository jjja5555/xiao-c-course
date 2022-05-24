#include <stdio.h>
#include <stdbool.h>

int main()
{
    int age = 17;
    double money = 30000;
    bool isGraduated = true;
    if(age > 17 || isGraduated)
    {
        printf("This is True\n");
    }else
    {
        printf("This is false\n");
    }

    int menuChoice = 4;
    switch (menuChoice)
    {
    case 1:
        /* code */
        printf("This is True%d\n",menuChoice);
        break;
    case 2:
        /* code */
        printf("This is True%d\n",menuChoice);
        break;
    case 3:
        /* code */
        printf("This is True%d\n",menuChoice);
        break;
    default:
        break;
    }

    double balance = -5000;
    balance > 0 ? printf("Positive\n") : printf("negative\n");
    return 0;
}