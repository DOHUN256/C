#include <stdio.h>

typedef struct
   {
      char play;
      char diary;
      char workout;
   } Todolist;
   
int main(){
   Todolist Todolist1;
   Todolist1.play = ' ';
   Todolist1.diary = 'X';
   Todolist1.workout = ' ';
   printf("<¿À´Ã ÇØ¾ß ÇÒ ÀÏ>\n");
   printf("---------------------\n");
   printf("[%c] ±èº¯¼ö¶û ³î±â\n",Todolist1.play);
   printf("[%c] ÀÏ±â¾²±â\n",Todolist1.diary);
   printf("[%c] ¿îµ¿ÇÏ±â\n",Todolist1.workout);
   return 0;
}


