#include <stdio.h>

typedef struct
   {
      char play;
      char diary;
      char workout;
   } Todolist;
   
int main(){
   Todolist Todolist1;
   printf("<���� �ؾ� �� ��>\n");
   printf("---------------------\n");
   printf("[%c] �躯���� ���\n",Todolist1.play);
   printf("[%c] �ϱ⾲��\n",Todolist1.diary);
   printf("[%c] ��ϱ�\n",Todolist1.workout);
   return 0;
}


