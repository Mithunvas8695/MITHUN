#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],n ,i,small ,large;
clrscr();
printf("\n enter number of elements:");
scanf("%d", &n);
printf("\n enter array elements:");
for(i=0;i<n ; i++)
scanf("%d",&a[i]);
large=a[0];
small=a[0];
for(i=1;i<n; i++)
 {
 if (a[ i ]>large)
large =a[ i ];
else
 {
if(a[i]<small)
small=a[i];
}
}
printf("\n largest element=%d\n ", large);
printf("\n smallest element = %d",small);
getch();
}