#include <stdio.h>

int main() {
   int num1;
   printf("���ڸ� �Է��Ͻÿ� : ");
   scanf("%d",&num1);
   if(num1%2==0){
      printf("¦ �� �Դϴ�.");
   }
   else if(num1%2==1){
      printf("Ȧ �� �Դϴ�.");
   }
   else if(num1==0){
      printf("0�Դϴ�.");
   }
   return 0;
}