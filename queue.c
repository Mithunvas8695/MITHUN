#include <stdio.h>
#include<conio.h>
#include<process.h>
#define max 5
int queue[5];
void Qinsert();
void Qdelete();
void Qdisplay();
int rear = - 1;
int front = - 1;
int main()
{
int ch;
clrscr();
while (1)
 {
printf("\n\n 1.Insert\n ");
printf("2.Delete\n ");
printf("3.Display\n ");
printf("4.Exit\n ");
printf("\n Enter your choice : ");
scanf("%d", &ch);
switch(ch)
 {
case 1:
Qinsert();
break;
case 2:
Qdelete();
break;
case 3:
Qdisplay();
break;
case 4:
exit(0);
default:
printf("\nInvalid choice ");
 }
 }
 }
void Qinsert()
{
int ele;
if(rear == max - 1)
printf("\n Queue is FULL ");
else
 {
printf("\n Enter the element to insert : ");
scanf("%d", &ele);
if(rear== - 1)
 {
 front = 0;
 rear = 0;
 }
 else
 rear++;
 queue[rear] = ele;
 }
 }
void Qdelete()
 {
if(front == -1)
printf("\n Queue is Empty\n");
else
 {
 printf("\n Element deleted from queue is : %d", queue[front]);
 if(front==rear)
 {
 front=-1;
 rear=-1;
 }
 else
 front++;
 }
 }
void Qdisplay()
 {
int i;
if(front == - 1)
printf("\n Queue is empty\n ");
else
 {
 printf("\n Queue is : ");
 printf(" front->");
 for(i = front; i <= rear; i++)
 printf(" %d ", queue[i]);
 printf(" rear");
 }
 }