#include<stdio.h>
#include<conio.h>
int main()
{
int age;
clrscr();
printf("enter the age:");
scanf("%d",&age);
if (age>=18)
{
printf("eligible to vote:");
}
else
{
printf("not eligible for voting");
}
getch();
return 0;
}