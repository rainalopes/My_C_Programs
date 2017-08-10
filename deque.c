/*
NAME:RAINA LOPES
ROLLNO.:29
PROGRAM NAME: DEQUE
DATE OF PERFORMANCE:27/8/15
DATE OF SUBMISSION: 7/10/15
*/
#include<stdio.h>
#include<malloc.h>
void disp();
void insertbeg();
void insertend();
void delbeg();
void delend();
void input();
void output();
struct node
{
int data;
 struct node*next;
}*START;


struct node*getnode(void)
{
return((struct node*)malloc(sizeof(struct node)));
}
int count=0;
void main()
{
int choice;
int m;
do
{
	printf("******DOUBLE ENDED QUEUE******\nenter 1 FOR INPUT RESTRICTED QUEUE\nenter 2 OUTPUT RESTRICTED QUEUE");
printf("\nenter your choice");
scanf("%d",&choice);

switch(choice)
{
case 1:input();break;
case 2:output();break;
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
       p=START;
       if(count==0)
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
         q->next=START;
          q->data=value;
         START=q;
         count++;
         printf("\nelement inserted successfully");
disp();
          }



        void insertend(void)
   {
   struct node*m;
    struct node*l;
int value;
     m=START;
  
       if(START==NULL)
{
     insertbeg();
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
disp();
}
}
void delbeg()
{
struct node*t;
t=START;
if(START==NULL)
printf("\nthe list is empty no deletion is possible");
else
{
START=START->next;
free(t);
count--;
printf("\nelement deleted successfully");
disp();
}}


void delend()
{
struct node*g;
struct node*l;
g=START;
if(START==NULL)
printf("\nlist is empty");
else if(START->next==NULL)
delbeg();
else
{
while(g->next!=NULL)
{
	l=g;
g=g->next;
}
free(g);
l->next=NULL;
count--;
printf("\nelement deleted successfully");
disp();
}
}

void input()
{
int p,m;
do
{
	printf("\n******INPUT RESTRICTED QUEUE******");
printf("\nenter 1 to insert at right\nenter 2 to delete at right\nenter 3 to delete at left");
printf("\nEnter your choice");
scanf("%d",&p);
switch(p)
{
case 1:insertend(); break;
case 2:delend();break;
case 3:delbeg();break;
default:printf("\nINVALID CHOICE");
}
printf("\nDo you want to continue??enter 0 to exit any other number to continue.");
scanf("%d",&m);
}
while(m!=0);
}

void output()
{
int p,m;
do
{
	printf("\n******OUTPUT RESTRICTED QUEUE******");
printf("\nenter 1 to insert at left\nenter 2 to insert at right\nenter 3 to delete at right");
printf("\nEnter your choice");
scanf("%d",&p);
switch(p)
{
case 1:insertbeg(); break;
case 2:insertend();break;
case 3:delend();break;
default:printf("\nINVALID CHOICE");
}
printf("\nDo you want to continue??enter 0 to exit any other number to continue.");
scanf("%d",&m);
}
while(m!=0);
}

  /*OUTPUT:
  dbit@it3-13:~/Desktop$ ./deque
******DOUBLE ENDED QUEUE******
enter 1 FOR INPUT RESTRICTED QUEUE
enter 2 OUTPUT RESTRICTED QUEUE
enter your choice1

******INPUT RESTRICTED QUEUE******
enter 1 to insert at right
enter 2 to delete at right
enter 3 to delete at left
Enter your choice1

Enter the element5

element inserted successfully	5
Do you want to continue??enter 0 to exit any other number to continue.1

******INPUT RESTRICTED QUEUE******
enter 1 to insert at right
enter 2 to delete at right
enter 3 to delete at left
Enter your choice1
enter the element you want to insert:
6

element inserted successfully	5	6
Do you want to continue??enter 0 to exit any other number to continue.1

******INPUT RESTRICTED QUEUE******
enter 1 to insert at right
enter 2 to delete at right
enter 3 to delete at left
Enter your choice1
enter the element you want to insert:
7

element inserted successfully	5	6	7
Do you want to continue??enter 0 to exit any other number to continue.1

******INPUT RESTRICTED QUEUE******
enter 1 to insert at right
enter 2 to delete at right
enter 3 to delete at left
Enter your choice2

element deleted successfully	5	6
Do you want to continue??enter 0 to exit any other number to continue.1

******INPUT RESTRICTED QUEUE******
enter 1 to insert at right
enter 2 to delete at right
enter 3 to delete at left
Enter your choice3

element deleted successfully	6
Do you want to continue??enter 0 to exit any other number to continue.0

do you want to continue?
If yes then press1 else press 011
******DOUBLE ENDED QUEUE******
enter 1 FOR INPUT RESTRICTED QUEUE
enter 2 OUTPUT RESTRICTED QUEUE
enter your choice2

******OUTPUT RESTRICTED QUEUE******
enter 1 to insert at left
enter 2 to insert at right
enter 3 to delete at right
Enter your choice1

Enter the element5

element inserted successfully	5	6
Do you want to continue??enter 0 to exit any other number to continue.1

******OUTPUT RESTRICTED QUEUE******
enter 1 to insert at left
enter 2 to insert at right
enter 3 to delete at right
Enter your choice2
enter the element you want to insert:
9

element inserted successfully	5	6	9
Do you want to continue??enter 0 to exit any other number to continue.1

******OUTPUT RESTRICTED QUEUE******
enter 1 to insert at left
enter 2 to insert at right
enter 3 to delete at right
Enter your choice3

element deleted successfully	5	6
Do you want to continue??enter 0 to exit any other number to continue.1

******OUTPUT RESTRICTED QUEUE******
enter 1 to insert at left
enter 2 to insert at right
enter 3 to delete at right
Enter your choice3

element deleted successfully	5
Do you want to continue??enter 0 to exit any other number to continue.1

******OUTPUT RESTRICTED QUEUE******
enter 1 to insert at left
enter 2 to insert at right
enter 3 to delete at right
Enter your choice3

element deleted successfully
list is empty
Do you want to continue??enter 0 to exit any other number to continue.

  */
