#include<stdio.h>
struct date
 {
  int dd,mm,yy;

 };
  struct emp
  {
   int id,sal;
   char nm[20];
   struct date doj;

  };
  int main()
   {
    struct emp e1;

    printf("Enter id,nm&sal=");
    scanf("%d %s %d",&e1.id,&e1.nm,&e1.sal);

    printf("Enter date =");
    scanf("%d%s%d",&e1.doj.dd,&e1.doj.mm,&e1.doj.yy);

    printf("\n%d %s %d", e1.id,e1.nm,e1.sal);

    printf("\ndate of joining = %d /%d /%d",e1.doj.dd,e1.doj.mm,e1.doj.yy);

   }
