#include <stdio.h>

int main(){
    int var = 111;
    int *ptr = &var;
    
    printf("������ �� ������: %d\n", *ptr);
    
    *ptr = 222;
    
    printf("����� �� ������: %d\n", *ptr);
    printf("����� var�� ��: %d\n", var);
    
    return 0;
}



