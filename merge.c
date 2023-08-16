#include<stdio.h>
#include<conio.h>
void mergesort(int a[],int low,int high);
void merge(int a[],int low,int mid,int high);
void main()
{
int a[10],n,i;
clrscr();
printf("\n Enter number of array elements:");
scanf("%d", &n);
printf("\n Enter array elements:");
for(i=0;i<n;i++)
scanf("\n %d",&a[i]);
printf("\n \n Before sorting:");
for(i=0;i<n;i++)
printf("\n %d",a[i]);
mergesort(a,0,n-1);
printf("\n\n After sorting:");
for(i=0;i<n;i++)
printf("\n %d",a[i]);
getch();
}
void mergesort(int a[],int low,int high)
 {
 int mid;
 if(low<high)
 {
mid=(low+high)/2;
mergesort(a,low,mid);
mergesort(a,mid+1,high);
merge(a,low,mid,high);
 }
}
void merge(int a[],int low,int mid,int high)
 {
int i,j,k,c[10];
i=low;
j=mid+1;
k=low;
while((i<=mid)&&(j<=high))
 {
 if(a[i]<a[j])
 {
 c[k]=a[i];
 i++;
 k++;
 }
else
{
c[k]=a[j];
j++;
k++;
}
 }
while(i<=mid)
{
c[k]=a[i];
i++;
k++;
}
while(j<=high)
{
c[k]=a[j];
j++;
k++;
}
for(i=low;i<k;i++)
a[i]=c[i];
}