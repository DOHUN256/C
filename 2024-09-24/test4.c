#include <stdio.h>

int main(){
    int array[2][5];

    int num = 1;
    for(int i=0;i<2;i++){
        for(int j=0;j<5;j++){
            array[i][j] = num++;
            printf("array[%d][%d]�� %d����\n",i,j,array[i][j]);
        }
        printf("i����\n");
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<5;j++){
            printf("array[%d][%d] HOW ?: %d\n",i,j,array[i][j]);
        }
    }
    
    return 0;
}