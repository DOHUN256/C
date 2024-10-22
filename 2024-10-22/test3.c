#include <stdio.h>

int main(){
    int var = 111;
    int *ptr = &var;
    
    printf("포인터 역 참조값: %d\n", *ptr);
    
    *ptr = 222;
    
    printf("변경된 역 참조값: %d\n", *ptr);
    printf("변경된 var의 값: %d\n", var);
    
    return 0;
}



