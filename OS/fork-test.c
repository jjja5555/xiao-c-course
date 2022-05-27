#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
int main(int argc, char * argv[])
{
    int id = fork();
    wait(NULL);
    printf("Hellp World from id: %d\n",id);

    if(id == 0){
        printf("Hellp World from Child\n");
    }else{
        printf("Hellp World from Parent\n");
    }
    return 0;
}