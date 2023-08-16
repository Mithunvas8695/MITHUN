#include<stdio.h>
#include<conio.h>
void quicksort(int a[],int low,int high);
void main()
{
 int a[10],n,i;
 clrscr();
 printf("\n Enter number of elements:");
 scanf("%d",&n);
 printf("\n Enter array elements:");
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 printf("\n Before quicksort: \n");
 for(i=0;i<n;i++)
 printf(" %d\n ",a[i]);
 quicksort(a,0,n-1);
 printf("\n After quicksort: \n");
 for(i=0;i<n;i++)
 printf(" %d\n ",a[i]);
 getch();
}
void quicksort(int a[],int low,int high)
{
 int i,j,piv,temp;
 i=low+1;
 j=high;
 piv=a[low];
 if(low<high)
 {
 while(low<high)
 {
 while((a[i]<piv)&&(i<high))
 i++;
 while((a[j]>piv)&&(j>low))
 j--;
 if(i<j)
 {
 temp=a[i];
 a[i]=a[j];
 a[j]=temp;
 }
 else
 {
 temp=a[low];
 a[low]=a[j];
 a[j]=piv;
 break;
 }
 }
 quicksort(a,low,j-1);
 quicksort(a,j+1,high);
 }
}