#include <stdio.h>

void swap(int *a, int *b);

int main(){
    int arr[]= {1,2,3,4,5};
    int *ptr = arr;
    
    printf("%d\n",*ptr);
    printf("%d\n",*(ptr + 1));
    printf("%d\n",*(ptr + 2));
    printf("%d\n",ptr);
    printf("%d\n",(ptr + 1));
    printf("%d\n",(ptr + 2));
    return 0;
}