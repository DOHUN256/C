#include <stdio.h>

int main() {
   int years;
   int birth;
   printf("몇 년 생이신가요? : ");
   scanf("%d",&birth);
   printf("0000년도에는 나는 몇 살: ");
   scanf("%d",&years);
   int age = years-birth;
   printf("%d살 입니다.",age);
   return 0;
}