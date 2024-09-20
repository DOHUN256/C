#include <stdio.h>

int main(){
    for(int i=1;i<10;i++){
        for (int m=2; i<10&&m<10;m++){
            int sum = m*i;
            switch(i){
                case (9):
                    printf("%d * %d = %d. ",m,i,sum);
                    break;
                default:
                    printf("%d * %d = %d ",m,i,sum);
                    break;
            }
        } 
        printf("\n");
    }
}