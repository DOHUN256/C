#include <stdio.h>

int main(){
    int a = 97;
    char b = 'B';

    printf("%d\n", b);
    
    b = a;

    printf("%d\n", b);
    printf("%d\n", b);
    
    return 0;
}