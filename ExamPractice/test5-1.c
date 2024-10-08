#include <stdio.h>
//3-2¹ø¹®Á¦
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if (a>=b){
        if(a>=c){
            printf("%d°¡ °¡ÀåÅ®´Ï´Ù.",a);
        }
        else{
            printf("%d°¡ °¡ÀåÅ®´Ï´Ù.",c);
        }
    }
    else{
        if(b>=c){
            printf("%d°¡ °¡ÀåÅ®´Ï´Ù.",b);
        }
        else{
            printf("%d°¡ °¡ÀåÅ®´Ï´Ù.",c);
        }
    }
    return 0;
}



