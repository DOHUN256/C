#include <stdio.h>
int main(){
   int first;
   int second;
   int n;
   printf("�� ����: ");
   scanf("%d %d",&first,&second);
   printf("N: ");
   scanf("%d",&n);

   for(int i=first;i<second;i++){
      if(i!=first&&i%n==0){
         printf("%d ",i);
      }
   }
}



