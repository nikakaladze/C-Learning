#include <stdio.h>
#include <string.h>

int main(void){
    char fullName[30];
    printf("write your name: \n");
    fgets(fullName,sizeof(fullName), stdin);
    return 0;


}   