#include<stdio.h>
#include<conio.h>
int main()
{
int n,i;
clrscr();
printf("enter the number:");
scanf("%d",&n);
i=1;
do
{
printf("%d\n",i);
i++;
}while(i<=n);
getch ();
return 0;
}