#include <stdio.h>
#include <string.h>

int main(){
    char str1[100] = "���ڿ��� �� ��쿡�� memcpy�� ����ؼ� ���ڿ� ��ü�� �� ���� �����մϴ�.";
    char str2[100];

    memcpy(str2, str1, sizeof(str1));
    printf("%s\n", str2);

    return 0;
}