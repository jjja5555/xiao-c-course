#include <stdio.h>

typedef struct
{
    int length;
    int width;
} rectangle;

typedef struct
{
    int x;
    int y;
} position;

typedef struct
{
    char owner[30];
    rectangle rectangle;
    position position;
} buildingPlan;
int main()
{
    rectangle myRectangle = {5,10};
    printf("Length: %d, Width: %d\n",myRectangle.length,myRectangle.width);
    
    buildingPlan myHouse = {"Xiao Huang",{5,10},{32,48}};
    printf("The house at %d %d (size %d %d) is owned by %s\n",
            myHouse.position.x,
            myHouse.position.y,
            myHouse.rectangle.length,
            myHouse.rectangle.width,
            myHouse.owner
    );

    buildingPlan *structPointer = &myHouse;
    printf("%p\n",structPointer->owner);
    printf("%p\n",&myHouse.owner);
    printf("%p\n",&myHouse.position);
    printf("%p\n",&structPointer->position);
    return 0;
}