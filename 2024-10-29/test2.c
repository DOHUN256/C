#include <stdio.h>

int main(){
    int x = 111, y = 222;
    int *ptr1;
    int **ptr2;

    *ptr2 = &y;
    ptr1 = &x;
    printf("*ptr1: %d\n",*ptr1);
    printf("**ptr2: %d\n",**ptr2);

    ptr1 = &y;
    *ptr2 = ptr1;
    printf("*ptr1: %d\n",*ptr1);
    printf("**ptr2: %d\n",**ptr2);
    
    return 0;
}



