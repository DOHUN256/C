#include <stdio.h>
//3-2번문제
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if (a>=b){
        if(a>=c){
            printf("%d가 가장큽니다.",a);
        }
        else{
            printf("%d가 가장큽니다.",c);
        }
    }
    else{
        if(b>=c){
            printf("%d가 가장큽니다.",b);
        }
        else{
            printf("%d가 가장큽니다.",c);
        }
    }
    return 0;
}



