#include <stdio.h>

int main(){
    int var = 105;
    int *ptr;
    ptr = &var;


    printf("�����Ͱ� ����Ű�� �ּ�: %p\n", ptr);
    printf("�����Ͱ� ����Ű�� �ּҿ� �ִ� ���� ��: %d\n", *ptr);
    printf("���� var�� �޸� �ּ�: %p\n", &var);
    printf("���� var�� ��: %d", var);
    return 0;
}



