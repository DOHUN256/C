#include <stdio.h>

int main(){
    char array[6] = "Hello"; // H e l l o \0 까지 6개 저장됨 

    for(int i=0;i<6;i++){
        printf("%c\n",array[i]);
    }
    return 0;
}