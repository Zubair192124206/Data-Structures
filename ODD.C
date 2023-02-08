#include<stdio.h>
#include<conio.h>
int main()
{
int a;
Fclrscr();
printf("enter the number:");
scanf("%d",&a);
if(a%2==0)
{
printf("%d is even",a);
}
else
{
printf("it is odd");
}
getch();
return 0;
}