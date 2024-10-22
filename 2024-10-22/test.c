#include <stdio.h>

int main(){
    int a = 50;
    char b = 'C';
    float c =30.05;
    printf("int형 변수 a가 저장되어 있는 주쇠: %p\n", &a);
    
    printf("char형 변수 a가 저장되어 있는 주쇠: %p\n", &b);
    
    printf("float형 변수 a가 저장되어 있는 주쇠: %p\n", &c);
    return 0;
}



