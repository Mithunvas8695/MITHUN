#include<stdio.h>
#include<conio.h>
void bubblesort(int a[],int n);
void main()
{
int a[10],n,i;
clrscr();
printf("\n enter number of elements:");
scanf("%d",&n);
printf("\n enter array elements:");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("\n before sorting:");
for(i=0;i<n;i++)
printf("\n%d",a[i]);
bubblesort(a,n);
printf("\n after bubble sort:");
for(i=0;i<n;i++)
printf("\n%d",a[i]);
getch();
}
void bubblesort(int a[],int n)
{
int i,j,temp;
for(i=1;i<n;i++)
{
for(j=0;j<n-i;j++)
{
if(a[j]>a[j+1])
{
temp =a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
}
}