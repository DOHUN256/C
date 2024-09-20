#include <stdio.h>

int main(){
    int score;
    scanf("%d",&score);

    if(score >=90){
        printf("1등급");
    } else if(score >=90){
        printf("2등급");
    }else if(90>score&& score>=70){
        printf("3등급");
    }else if(70 >score){
        printf("4등급");
    }
    return 0;
}
