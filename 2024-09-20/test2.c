#include <stdio.h>

int main(){
    int score;
    scanf("%d",&score);

    if(score%2==0){
        printf("짝수");
    } else if(score%2==1){
        printf("홀수");
    return 0;
}
