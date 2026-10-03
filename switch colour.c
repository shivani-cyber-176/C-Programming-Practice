#include<stdio.h>
int main()
{
int code;
printf("Enter colour code(1-5):");
scanf("%d",&code);

 switch(code)
 {
 case 1:
 printf("Red");
 break;
 case 2:
 printf("Green");
 break;
 case 3:
 printf("yellow");
 break;
 case 4:
 printf("Blue");
 break;
 case 5:
 printf("Black");
 break;
  default:
  printf("Invalid colour code");

 }

}
