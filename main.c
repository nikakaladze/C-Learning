#include <stdio.h>

int main(void)
{
const int my_array[3][3] = {{1,2,3},{4,5,6},7,8,9};
for(int i = 0;i < 3;i++){
    for(int j = 0;j < 3;j++){
        printf("%d ",my_array[i][j]);
    }
    
    printf("\n");
}
return 0;

}


