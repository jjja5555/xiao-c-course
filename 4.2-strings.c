#include <stdio.h>
#include <string.h>

int main()
{
    char name[20];//
    scanf("%19s",name);

    int letter = 0;
    while (name[letter] != '\0')
    {
        /* code */
        letter++;
    }

    printf("Size of name is  %d\n",letter);
    printf("Size of name is  %lu\n",strlen(name));

    if(strcmp(name,"Huang") == 0)
    {
        printf("You get access\n");
    }

    char copy[20];
    printf("%p\n",&name);
    printf("%p\n",&copy);

    strcpy(copy,name);
    printf("%p\n",&name);
    printf("%p\n",&copy);


    char lastName[] = "Curry";
    strcat(copy,lastName);
    printf("%p\n",&copy);
    printf("%s\n",copy);
    return 0;
}