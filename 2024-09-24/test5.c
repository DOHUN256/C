#include <stdio.h>

int main(){
    char array[6] = "Hello"; // H e l l o \0 ���� 6�� ����� 

    for(int i=0;i<6;i++){
        printf("%c\n",array[i]);
    }
    return 0;
}