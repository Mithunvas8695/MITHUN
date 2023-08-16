#include<stdio.h>
#include<conio.h>
int bsearch(int a[],int n,int key);
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
loc=bsearch(a,n,key);
if(loc==-1)
printf("\n key element not found");
else
printf("\n key element found at location=%d", loc);
getch();
}
int bsearch (int a[], int n ,int key)
{
int low, high, mid;
low =0;
high =n-1;
while (low<=high)
{
mid=(low+high)/2;
if(key ==a[mid])
return(mid+1);
else
if(key<a[mid])
high=mid-1;
else
low=mid+1;
}
return(-1);
}