#include <stdio.h>
//4-2������
int main(){
    int a = 0;
    int sum = 0;
    while(a<=100){
        if(a%3==0){
            sum = sum + a;
        }
        a++;
    }
    printf("%d",sum);
    return 0;
}



