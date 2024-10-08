#include <stdio.h>

int main(){
    for(int i=5;i>0;i--){
        for(int j=0;j<(6-i);j++){
            printf(" ");
        }
        for(int n=0;n<(i*2)-1;n++){
            printf("*");
        }
    printf("\n");
    }
    for(int a=0;a<5;a++){
        for(int b=0;b<(5-a);b++){
            printf(" ");
        }
        for(int c=0;c<=a*2;c++){
            printf("*");
        }
    printf("\n");
    }
}
