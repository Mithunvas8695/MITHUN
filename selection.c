#include<stdio.h>
#include<conio.h>
void selectionsort(int a[],int n);
void main()
 {
 int a[10],i,n;
 clrscr();
 printf("\nEnter the no. of elements:");
 scanf("%d", &n);
 printf("\nEnter the array elements:");
 for(i=0;i<n;i++)
 scanf("%d", &a[i]);
 selectionsort(a, n);
 printf("\nAfter sorting :\n");
 for(i=0;i<n;i++)
 printf("\n %d", a[i]);
 getch();
 }
void selectionsort(int a[], int n)
{
 int i,j,temp, small, pos;
 for(i=1;i<n;i++)
 {
 small=a[i-1];
pos=i-1;
 for(j=i;j<n;j++)
 {
 if(a[j]<small)
 {
 small= a[j];
 pos=j;
 }
 }
 temp=a[i-1];
 a[i-1]=a[pos];
 a[pos]=temp;
 }
}