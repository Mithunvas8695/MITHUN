#include<stdio.h>
#include<conio.h>
int fact(int n);
void main()
{
int n,r,ans;
clrscr();
printf("\n enter n and r values:");
scanf("%d %d",&n ,&r);
ans=fact(n)/(fact(r)*fact(n-r));
printf("\n binomial coefficient %d C %d= %d",n ,r, ans);
getch();
}
int fact(int n)
{
if(n==0)
 return (1);
else
 return(n*fact(n-1));
}