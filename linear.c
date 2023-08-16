#include<stdio.h>
#include<conio.h>
int lsearch(int a[],int n,int key);
void main()
{
int a[10],n,i,key,loc;
clrscr();
printf("\n enter number of elements:");
scanf("%d",&n);
printf("\n enter array elements:");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("\n enter key element to search:");
scanf("%d",&key);
loc=lsearch(a,n,key);
if(loc==-1)
printf("\n key element not found");
else
printf("\n key element found at location=%d", loc);
getch();
}
int lsearch(int a[],int n,int key)
{
int i;
for(i=0;i<n;i++)
{
if(key==a[i])
return(i+1);
}
return(-1);
}
