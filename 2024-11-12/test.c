#include <stdio.h>

typedef struct
   {
    char name[10];
    int korean;
    int math;
    int english;
    int science;
    int art;
    int computer;
   } score;
   
int main(){
    score s;
    strcpy(s.name, "�躯��");
    s.korean = 90;
    s.math = 50;
    s.english = 60;
    s.science = 95;
    s.art = 30;
    s.computer = 100;

 printf("%s ���� ���� ���� ����Դϴ�.\n", s.name);
 printf("����: %d ����: %d ����: %d\n", s.korean, s.math, s.english);
 printf("����: %d �̼�: %d ��ǻ��: %d\n", s.science, s.art, s.computer);
}


