#include<stdio.h>
#include<conio.h>
#include<alloc.h>
#include<process.h>
struct node
 {
 int info;
 struct node *next;
 };
struct node *start =NULL;
void create();
void display();
void iob();
void ioe();
void iom();
void dob();
void dom();
void doe();
void main()
{
 int ch;
 clrscr();
 printf("\n create SLL");
 create();
 while(1)
 {
 printf("\n 1. Insert at Begin");
 printf("\n 2. Insert at Middle");
 printf("\n 3. Insert at End");
 printf("\n 4. Delete at Begin");
 printf("\n 5. Delete at Middle");
 printf("\n 6. Delete at End");
 printf("\n 7. Display");
 printf("\n 8. exit");
 printf("\n Enter your choice:");
 scanf("%d", &ch);
 switch(ch)
 {
 case 1: iob();break;
 case 2: iom();break;
 case 3: ioe();break;
 case 4: dob();break;
 case 5: dob();break;
 case 6: dob();break;
 case 7: display();break;
 case 8: exit(0);
 default : printf("\n invalid choice");
 }
 }
}
void create()
{
 struct node *temp,*newn;
 int ele;
 char ch;
 do
 {
 printf("\n enter element to insert:");
 scanf("%d",&ele);
newn=(struct node *)malloc(sizeof(struct node));
 newn-> info= ele;
 newn-> next=NULL;
 if(start==NULL)
 {
 start=newn;
 temp= newn;
 }
 else
 {
 temp->next=newn;
 temp=newn;
 }
 printf("\n Do you want to insert another node (Y/N):");
 scanf("%s",&ch);
 }while(ch=='Y');
}
void display()
{
 struct node *temp=start;
 if(start==NULL)
 printf("\n empty singly linked list");
 else
 {
 printf("\nstart->");
 while(temp!=NULL)
 {
 printf("%d->", temp->info);
 temp=temp->next;
 }
 printf("NULL");
 }
}
void iob()
{
 struct node *newn;
 int ele;
 printf("\n enter element to insert:");
 scanf("%d",&ele);
 newn=(struct node *)malloc(sizeof(struct node));
 newn-> info= ele;
 newn-> next=start;
 start=newn;
}
void ioe()
{
 struct node *newn,*temp=start;
 int ele;
 printf("\n enter element to insert:");
 scanf("%d",&ele);
 newn=(struct node *)malloc(sizeof(struct node));
 newn-> info= ele;
 newn-> next=NULL;
 while(temp->next!=NULL)
 {
 temp=temp->next;
 }
 temp->next=newn;
 }
void iom()
{
 struct node *newn,*temp1=start, *temp2=start->next;
 int ele,key,flag=0;
 printf("\n enter key node to insert:");
 scanf("%d",&key);
 while(temp1 !=NULL)
 {
 if(temp1-> info==key)
 {
 printf("\n enter element to insert:");
 scanf("%d",&ele);
 newn=(struct node *)malloc(sizeof(struct node));
 newn-> info= ele;
 temp1->next=newn;
 newn->next=temp2;
 flag=1;
 break;
 }
 else
 {
 temp1=temp1->next;
 temp2=temp2->next;
 }
 }
if(flag==0)
 printf("\n key element not found");
 else
 printf("\n key element is inserted successfully");
 }
void dob()
{
 struct node *temp=start;
 if(start==NULL)
 printf("\n empty SLL");
 else
 {
 printf("\n deleted node =%d", temp->info);
 start = temp->next;
 free(temp);
 }
}
void doe()
{
 struct node*temp1=start,*temp2=start->next;
 if(start==NULL)
 printf("\n empty SLL");
 else
 {
 while(temp2-> next!=NULL)
 {
 temp1=temp1->next;
 temp2=temp2->next;
 }
 printf("\n deleteed node=%d",temp2->info);
 temp1->next=NULL;
 free(temp2);
 }
}
void dom()
{
 struct node *temp1=start,*temp2=start->next;
 int key,flag=0;
 if(start==NULL)
 printf("\n empty SLL");
 else
 {
 printf("\n enter key node to delete:");
 scanf("%d",&key);
 while(temp2!=NULL)
 if(key==temp2->info)
 {
 printf("\n deleted node=%d", temp2->info);
 temp1->next=temp2->next;
 free(temp2);
 flag=1;
 break;
 }
 else
 {
 temp1=temp1->next;
 temp2=temp2->next;
 }
 }
 if(flag==0)
 printf("\n key node not found");
}