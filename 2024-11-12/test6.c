#include <stdio.h>

int main() {
   char first;
   char second;
   printf("두 개의 알파벳을 입력해 주세요: ");
   scanf("%c %c",&first,&second);
   int sum = (int)first - (int)second;
   int distance = abs(sum);
   printf("%c와 %c 사이의 거리: %d",first,second,distance);
   return 0;
}