#include <stdio.h>

int main(){
    for(int i=0;i<5;i++){
        for(int j=0;j<(5-i);j++){
            printf(" ");
        }
        for(int n=0;n<=i*2;n++){
            printf("*");
        }
    printf("\n");
    }
}
