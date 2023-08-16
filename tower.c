#include<stdio.h>
#include<conio.h>
void tower(int n, char A,char B,char C);
int count =0;
void main()
{
int n;
clrscr();
printf("\n enter number of Disks :");
scanf("%d", &n);
tower(n, 'A' ,'B','C');
printf("\n number of moves=%d", count);
getch();
}
void tower( int n, char A, char B, char C)
{
if(n==1)
{
printf("move disk from %c -> %c\n ", A , C);
count++;
}
else
{
tower(n-1,A,C,B);
tower(1,A,B,C);
tower(n-1,B,A,C);
}
}