#include <stdio.h>

int main(){
    float a = 111;
    float *ptr = &a;

    printf("a에 저장된 데이터: %f\n", a);
    printf("ptr가 가리키는 값: %f", *ptr);
    return 0;
}



