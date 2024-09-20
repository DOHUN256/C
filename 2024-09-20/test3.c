#include <stdio.h>

int main(){
    for(int i=1;i<10;i++){
        for (int m=1; i<10&&m<10;m++){
            int sum = i*m;
            printf("%d * %d = %d\n",i,m,sum);
        }    
    }
}