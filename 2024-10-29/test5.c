#include <stdio.h>

typedef struct {
    char name[10];
    int age;
} human;

int main(){
    human h1 = {"�躯��", 20};
    human h2 = {"�̸Ű�", 21};
    human h3 = {"���Լ�", 19};
    
    printf("ù ��° ��� �̸�: %s, ����:%d\n", h1.name, h1.age);
    printf("�� ��° ��� �̸�: %s, ����:%d\n", h2.name, h2.age);
    printf("�� ��° ��� �̸�: %s, ����:%d\n", h3.name, h3.age);
    
    
    return 0;
}