#include <stdio.h>
//4-1������
int main(){
    int a;
    int sum = 0;
    do{
    scanf("%d",&a);
    sum = sum + a;
    }while(a!=0);
    
    printf("%d",sum);
    return 0;
}



