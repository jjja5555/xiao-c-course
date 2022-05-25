#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

typedef struct
{
    char name[30];
    int age;
    bool isVerified;
}user;

user *createUser(char name[],int age,bool isVerified)
{
    user *newUser = malloc(sizeof(user));
    strcpy(newUser->name,name);
    newUser->age = age;
    newUser->isVerified = isVerified;
    return newUser;
}
void fun()
{
    //x++;
    int static x = 0;
    x++;
    printf("%d\n",x);
    int u;
}

int main()
{
    fun();
    fun();
    fun();


    // int size;
    // printf("How many elements?\n");
    // scanf("%d",&size);

    // int *arr = malloc(size * 4);
    // for (size_t i = 0; i < size; i++)
    // {
    //     /* code */
    //     printf("%p",&arr[i]);
    //     scanf("%d",&arr[i]);
    // }

    // for (size_t i = 0; i < size; i++)
    // {
    //     /* code */
    //     printf("%d\n",arr[i]);
    // }
    
    // free(arr);

    user *me = createUser("Xiao Huang",26,false);
    printf("%p\n",me);
    printf("age: %d, Name: %s\n",me->age,me->name);
    printf("age: %p, Name: %p, false: %p\n",&me->age,&me->name,&me->isVerified);
    free(me);

    while(true){
        malloc(300000000000);
    }
    return 0;
}