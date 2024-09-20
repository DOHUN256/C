#include <stdio.h>

int main(){
    for(int i=2;i<10;i++){
        for (int m=1; i<10&&m<10;m++){
            int sum = i*m;
            switch(m){
                case (9):
                    printf("%d * %d = %d. ",i,m,sum);
                    break;
                default:
                    printf("%d * %d = %d ",i,m,sum);
                    break;
            }
        } 
        printf("\n");
    }
}