#include <stdio.h>

int main() {
   float subject1;
   float subject2;
   float subject3;
   float subject4;
   
   printf("점수를 입력하세요: ");
   scanf("%f %f %f %f", &subject1, &subject2, &subject3, &subject4);
   
   float sum = subject1 + subject2 + subject3 + subject4;
   float avg = sum / 4;
   
   printf("평균 점수: %f\n", avg);
   return 0;
}