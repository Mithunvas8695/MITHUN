#include<stdio.h>
#include<conio.h>
#include<process.h>
#define max 5
int top=-1;
int stack[5];
void Push();
void Pop();
void display();
int main()
{
int ch;
clrscr();
while(1)
{
printf("\n\n 1. PUSH");
printf("\n 2. POP");
printf("\n 3. DISPLAY");
printf("\n 4. EXIT");
printf("\n\nEnter the choice:");
scanf("%d",&ch);
switch(ch)
 {
case 1: Push();
break;
case 2: Pop();
break;
case 3: display();
break;
case 4: exit(0);
default: printf("\nInvalid choice!!");
 }
 }
}
void Push()
 {
int ele;
if(top==max-1)
 {
 printf("\nStack is Overflow!!");
 }
else
{
 printf("\nEnter element to push:");
 scanf("%d",&ele);
 top++;
 stack[top]=ele;
}
}
void Pop()
 {
 if(top==-1)
 {
 printf("\nStack is Underflow!!");
 }
 else
 {
 printf("\nPopped element: %d",stack[top]);
 top--;
 }
 }
void display()
 {
 int i;
 if(top==-1)
 {
 printf("\nStack is Underflow!!");
 }
 else
 {
 printf("\n Top-> ");
 for(i=top;i>=0;i--)
 printf(" %d",stack[i]);
 }
}
