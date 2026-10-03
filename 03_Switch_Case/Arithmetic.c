#include<stdio.h>
int main()
{
 int choice;
 int a,b;
 printf("Arthmetic calculator\n");
 printf("add\n");
 printf("substract\n");
 printf("multiply\n");
 printf("division\n");
 printf("remainder\n");

 printf("Enter your choice:");
 scanf("%d",&choice);

 printf("Enter two number:");
 scanf("%d%d",&a,&b);

    switch(choice)
    {
    case 1:
    printf("Addition=%d,a+b");
    break;
    case 2:
    printf("subtraction=%d,a-b");
    break;
    case 3:
    printf("Multiplication=%d,a*b");
    break;
    case 4:
    printf("Division=%d,a/b");
    break;
    case 5:
    printf("Remainder=%d,a%b");
    break;

    default:
    printf("Invalid choice");
    }



}
