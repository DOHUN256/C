#include <stdio.h>
//3-2������
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if (a>=b){
        if(a>=c){
            printf("%d�� ����Ů�ϴ�.",a);
        }
        else{
            printf("%d�� ����Ů�ϴ�.",c);
        }
    }
    else{
        if(b>=c){
            printf("%d�� ����Ů�ϴ�.",b);
        }
        else{
            printf("%d�� ����Ů�ϴ�.",c);
        }
    }
    return 0;
}



