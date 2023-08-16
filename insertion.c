#include<stdio.h>
#include<conio.h>
void insertionsort(int a[],int n);
void main()
{
int a[10],i,n;
clrscr();
printf("\n enter number of elements:\n");
scanf("\n%d",&n);
printf("\n enter array elements:\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("\n before sorting:");
for(i=0;i<n;i++)
printf("\n %d",a[i]);
insertionsort(a,n);
printf("\n after sorting insertion :");
for(i=0;i<n;i++)
printf("\n %d",a[i]);
getch();
}
void insertionsort(int a[],int n)
{
int i,j,temp;
for(i=1;i<n;i++)
 {
 for(j=i;j>0;j--)
 {
 if(a[j]<a[j-1])
 {
temp=a[j];
a[j]=a[j-1];
a[j-1]=temp;
 }
 }
 }
}