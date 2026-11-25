#include<stdio.h>
struct student
{
   int roll_no;
   char name[50];
   int age;
   float marks;

};
   int main()
   {
    struct student s1={101,"shivani",22,85.5};
     printf("\n student Record\n");
     printf("Roll number =%d\n",s1.roll_no);
     printf("Name=%s\n",s1.name);
     printf("Age=%d\n",s1.age);
     printf("marks=%2.f\n",s1.marks);

     return 0;

    }
