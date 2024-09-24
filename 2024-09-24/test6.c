#include <stdio.h>

int main(){
    char array[] = "I love C Programming";
    
    int len = 0;
    int i = 0;

    while(1){
        len++;
        if(array[i++] == '\0'){
            break;
        }
    }
    printf("array char len : %d\n", len);
    return 0;
}