#include <stdio.h>

int main(){
    char array[10] = {'a','b','c'};

    array[4] = 'd';
    printf("%c %c\n", array[2], array[3]);

    return 0;
}