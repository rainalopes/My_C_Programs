/*
NAME: RAINA.R.LOPES
ROLL NO.: 29
PROGRAM NAME:QUEUE
DATE OF PERFORMANCE:13/08/2015
DATE OF SUBMISSION:5/10/2015
*/

#include<stdio.h>
#include<malloc.h>
void disp();
void queue();
void dequeue();
void insertbeg();
struct node
{
int data;
 struct node*next;
}*REAR;


struct node*getnode(void)
{
return((struct node*)malloc(sizeof(struct node)));
}
int count=0;
int max=5;
void main()
{
int choice;
int m;
do
{
printf("******WELCOME TO QUEUE******\nenter 1 to display\nenter 2 to queue\nenter3 to dequeue");


printf("\nenter your choice");
scanf("%d",&choice);

switch(choice)
{
case 1:disp();break;
case 2:queue();break;
case 3:dequeue();break;
default:printf("invalid choice");

}
printf("\ndo you want to continue?\nIf yes then press1 else press 0");
scanf("%d",&m);
}
while(m!=0);


}
void disp()
       {
         struct node*p;
       p=REAR;
       if(REAR==NULL)
       printf("\nlist is empty");
       else
       {
       while(p!=NULL)
      {
       printf("\t%d",p->data);
	    p=p->next;   
     }
        }
          }




         void insertbeg(void)
      {
         struct node*q;
          int value;
         printf("\nEnter the element");
		  
         scanf("%d",&value);
         q=getnode();
         q->next=REAR;
          q->data=value;
         REAR=q;
         count++;
         printf("\nelement inserted successfully");
          }



        void queue()
   {
   struct node*m;
    struct node*l;
int value;
     m=REAR;
  
       if(REAR==NULL)
{
     insertbeg();
}

else
{
if(count==max-1)
{
printf("OVERFLOW");
}
else
{
while(m->next!=NULL)

m=m->next;

l=getnode();
printf("enter the element you want to insert:\n");
scanf("%d",&value);
l->data=value;
m->next=l;
l->next=NULL;
count++;
printf("\nelement inserted successfully");

}}
}
void dequeue()
{
struct node*FRONT;
FRONT=REAR;
if(count==0)
printf("\nUNDERFLOW");
else
{
REAR=REAR->next;
free(FRONT);
count--;
printf("\nelement deleted successfully");
}}

/*OUTPUT:
******WELCOME TO QUEUE******
enter 1 to display
enter 2 to queue
enter3 to dequeue
enter your choice1

list is empty
do you want to continue?
If yes then press1 else press 01
******WELCOME TO QUEUE******
enter 1 to display
enter 2 to queue
enter3 to dequeue
enter your choice2

Enter the element1

element inserted successfully
do you want to continue?
If yes then press1 else press 01
******WELCOME TO QUEUE******
enter 1 to display
enter 2 to queue
enter3 to dequeue
enter your choice2
enter the element you want to insert:
2

element inserted successfully
do you want to continue?
If yes then press1 else press 01
******WELCOME TO QUEUE******
enter 1 to display
enter 2 to queue
enter3 to dequeue
enter your choice2
enter the element you want to insert:
3

element inserted successfully
do you want to continue?
If yes then press1 else press 01
******WELCOME TO QUEUE******
enter 1 to display
enter 2 to queue
enter3 to dequeue
enter your choice2
enter the element you want to insert:
4

element inserted successfully
do you want to continue?
If yes then press1 else press 01
******WELCOME TO QUEUE******
enter 1 to display
enter 2 to queue
enter3 to dequeue
enter your choice2
OVERFLOW
do you want to continue?
If yes then press1 else press 01
******WELCOME TO QUEUE******
enter 1 to display
enter 2 to queue
enter3 to dequeue
enter your choice1
        1       2       3       4
do you want to continue?
If yes then press1 else press 01
******WELCOME TO QUEUE******
enter 1 to display
enter 2 to queue
enter3 to dequeue
enter your choice3

element deleted successfully
do you want to continue?
If yes then press1 else press 01
******WELCOME TO QUEUE******
enter 1 to display
enter 2 to queue
enter3 to dequeue
enter your choice1
        2       3       4
do you want to continue?
If yes then press1 else press 01
******WELCOME TO QUEUE******
enter 1 to display
enter 2 to queue
enter3 to dequeue
enter your choice3

element deleted successfully
do you want to continue?
If yes then press1 else press 01
******WELCOME TO QUEUE******
enter 1 to display
enter 2 to queue
enter3 to dequeue
enter your choice1
        3       4
do you want to continue?
If yes then press1 else press 01
******WELCOME TO QUEUE******
enter 1 to display
enter 2 to queue
enter3 to dequeue
enter your choice3

element deleted successfully
do you want to continue?
If yes then press1 else press 01
******WELCOME TO QUEUE******
enter 1 to display
enter 2 to queue
enter3 to dequeue
enter your choice3

element deleted successfully
do you want to continue?
If yes then press1 else press 01
******WELCOME TO QUEUE******
enter 1 to display
enter 2 to queue
enter3 to dequeue
enter your choice3

UNDERFLOW
do you want to continue?
If yes then press1 else press 00

--------------------------------
Process exited after 77.71 seconds with return value 0
Press any key to continue . . .
*/
