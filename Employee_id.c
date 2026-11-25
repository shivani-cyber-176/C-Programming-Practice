#include<stdio.h>
struct emp
{
 int id,sal;
 char name[20];
};
int main()
 {
  struct emp e1;
  int a;
  printf("enter id,name&sal=");
  scanf("%d%s%d",&e1.id,e1.name,&e1.sal);
   a=e1.sal*12;
   printf("Annual salary=%d",a);
 }
