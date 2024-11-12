#include <stdio.h>

int main() {
   int years;
   printf("0000년도에는 나는 몇 살: ");
   scanf("%d",&years);
   int age = years-2005;
   printf("%d살 입니다.",age);
   return 0;
}