#include <stdio.h>

int main() {
   int num1;
   printf("숫자를 입력하시오 : ");
   scanf("%d",&num1);
   if(num1%2==0){
      printf("짝 수 입니다.");
   }
   else if(num1%2==1){
      printf("홀 수 입니다.");
   }
   else if(num1==0){
      printf("0입니다.");
   }
   return 0;
}