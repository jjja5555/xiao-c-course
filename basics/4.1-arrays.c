#include <stdio.h>

int main()
{
    int ages[] = {1,2,3,4,5,5,4};

    for (size_t i = 0; i < 7; i++)
    {
        /* code */
        printf("%d\n",ages[i]);
    }


    int rows = 3;
    int const cols = 4;

    int grade[][cols] = {
                        {1,3,4,5},
                        {1,3,4,5},
                        {1,3,4,5}
    };

    for (size_t i = 0; i < rows; i++)
    {
        /* code */
        for (size_t j = 0; j < cols; j++)
        {
            /* code */
            printf("%d ",grade[i][j]);
        }
        printf("\n");
    }
    
    
    return 0;

}