#include<stdio.h>
#include<conio.h>
int gcd(int a,int b);
void main()
{
int a,b, ans;
clrscr();
 printf("\n enter two numbers:");
scanf("%d %d",&a,&b);
ans=gcd(a,b);
printf("\n GCD=%d", ans);
getch();
}
int gcd(int a,int b)
{
 if(a==b)
 return(a);
else
if(a>b)
 return(gcd(a-b,b));
else
 return(gcd(a,b-a));
}