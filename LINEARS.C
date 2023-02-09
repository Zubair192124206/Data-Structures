#include<stdio.h>
#include<conio.h>
int res(int a[],int key,int n)
{
int i;
for(i=0;i<n;i++)
{
if(a[i]==key)
return i;
}
return -1;
}
main()
{
int n,a[10],key,i;
int linear;
int size=10;
clrscr;
printf("enter the number");
scanf("%d",&n);
printf("enter array element");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("enter the search value");
scanf("%d",&key);
linear=res(a,key,size);
if(linear==1)
printf("not in the list");
else
printf("available in the location=%d,linear");
getch();
return 0;
}