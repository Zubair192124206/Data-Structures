#include<stdio.h>
#include<conio.h>
int main()
{
int a=10;
int b,c;
clrscr();
printf("enter the value of b:");
scanf("%d",&b);
printf("enter the value of c:");
scanf("%d",&c);
if(a>b && a>c)
{
printf("a is greatest");
}
else if(b>a && b>c)
{
printf("b is greatest");
}
else
{
printf("c is greatest");
}
getch();
return 0;
}
