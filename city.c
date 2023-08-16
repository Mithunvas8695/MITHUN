#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char city[10][10],temp[10];
int n,i,j;
clrscr();
printf("\n Enter number of cities:");
scanf("%d",&n);
printf("\n Enter cities name:");
for(i=0;i<n;i++)
scanf("%s",city[i]);
printf("\n\n Before sorting:");
for(i=0;i<n;i++)
printf("\n %s",city[i]);
for(i=0;i<n-1;i++)
{
for(j=i+1;j<n;j++)
{
if(strcmp(city[i],city[j])>0)
{
strcpy(temp,city[i]);
strcpy(city[i],city[j]);
strcpy(city[j],temp);
}
}
}
printf("\n\n After sorting:");
for(i=0;i<n;i++)
printf("\n %s",city[i]);
getch();
}
