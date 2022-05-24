#include <stdio.h>

int main()
{
    // for(int i = 0; i < 10;i++){
    //     printf("%d\n",i);
    // }

    int size = 6;
    int ages[] = {12,4,44,32,32,43};
    size = sizeof(ages)/sizeof(0);
    for (size_t i = 0; i < size; i++)
    {
        /* code */
        printf("%d\n",ages[i]);
    }
    
    int i = 0;
    while(i < 10){
        printf("%d ",i);
        i++;
    }

    
    return 0;
}