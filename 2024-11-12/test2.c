#include <stdio.h>

typedef union
   {
      char name[50];
      int age;
      int grade;
   } Student;
   
int main(){
   Student Student1;
   strcpy(Student1.name, "Student1");
   Student1.age = 19;
   // Student1.grade = 3;

   printf("%s\n", Student1.name);
   printf("%d\n", Student1.age);
   printf("%d\n", Student1.grade);   

   return 0;
}


