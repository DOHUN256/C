#include <stdio.h>

int main() {
   char first;
   char second;
   printf("�� ���� ���ĺ��� �Է��� �ּ���: ");
   scanf("%c %c",&first,&second);
   int sum = (int)first - (int)second;
   int distance = abs(sum);
   printf("%c�� %c ������ �Ÿ�: %d",first,second,distance);
   return 0;
}