#include<stdio.h>
#include<conio.h>
int fib(int n);
void main()
{
int i,n;
clrscr();
printf("\n enter the number of elements:");
scanf("%d",&n);
printf("\n fibonacci series are: ");
for(i=1;i<=n;i++)
{
printf("%d ",fib(i));
}
getch();
}
int fib(int n)
{
if(n==0)
 return(0);
else
 if(n==1)
 return(1);
 else
 return(fib(n-1)+fib(n-2));
}