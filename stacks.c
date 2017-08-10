/*
NAME: RAINA.R.LOPES
ROLL NO.: 29
PROGRAM NAME: STACKS
DATE OF PERFORMANCE: 13/08/2015
DATE OF SUBMISSION: 5/10/2015
*/

#include<stdio.h>
#include<malloc.h>
void display();
void push();
void pop();
struct node
{
int data;
 struct node*next;
}*TOP,*p;

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
printf("******WELCOME******\nenter 1 to display\nenter 2 to push\nenter 3 to pop");


printf("\nenter your choice");
scanf("%d",&choice);

switch(choice)
{
case 1:display();break;
case 2:push();break;
case 3:pop();break;
default:printf("invalid choice");

}
printf("\ndo you want to continue?\nIf yes then press1 else press 0");
scanf("%d",&m);
}
while(m!=0);

}

void display()
{
        p=TOP;
       if(TOP==NULL)
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





void push()
{
       int max=5;
        
         struct node*q;
         
        if(count==max)
       {
       printf("\nSTACK OVERFLOW");
           }
       else
          {
        int value;
         printf("\nEnter the element");
        
         
         scanf("%d",&value);
         q=getnode();
         q->next=TOP;
         q->data=value;
         TOP=q;
         printf("\nelement pushed successfully");
        count++;
         }}


     void pop()
{         
struct node*t;
t=TOP;
if(TOP==NULL)
printf("\nSTACK UNDERFLOW");
else
{
TOP=TOP->next;
free(t);
printf("\nelement popped successfully");
count--;
}
}

/*
******WELCOME******
enter 1 to display
enter 2 to push
enter 3 to pop
enter your choice1

list is empty
do you want to continue?
If yes then press1 else press 01
******WELCOME******
enter 1 to display
enter 2 to push
enter 3 to pop
enter your choice2

Enter the element9

element pushed successfully
do you want to continue?
If yes then press1 else press 01
******WELCOME******
enter 1 to display
enter 2 to push
enter 3 to pop
enter your choice2

Enter the element4

element pushed successfully
do you want to continue?
If yes then press1 else press 01
******WELCOME******
enter 1 to display
enter 2 to push
enter 3 to pop
enter your choice2

Enter the element6

element pushed successfully
do you want to continue?
If yes then press1 else press 01
******WELCOME******
enter 1 to display
enter 2 to push
enter 3 to pop
enter your choice2

Enter the element3

element pushed successfully
do you want to continue?
If yes then press1 else press 01
******WELCOME******
enter 1 to display
enter 2 to push
enter 3 to pop
enter your choice2

Enter the element7

element pushed successfully
do you want to continue?
If yes then press1 else press 01
******WELCOME******
enter 1 to display
enter 2 to push
enter 3 to pop
enter your choice2

STACK OVERFLOW
do you want to continue?
If yes then press1 else press 01
******WELCOME******
enter 1 to display
enter 2 to push
enter 3 to pop
enter your choice3

element popped successfully
do you want to continue?
If yes then press1 else press 01
******WELCOME******
enter 1 to display
enter 2 to push
enter 3 to pop
enter your choice3

element popped successfully
do you want to continue?
If yes then press1 else press 01
******WELCOME******
enter 1 to display
enter 2 to push
enter 3 to pop
enter your choice3

element popped successfully
do you want to continue?
If yes then press1 else press 01
******WELCOME******
enter 1 to display
enter 2 to push
enter 3 to pop
enter your choice3

element popped successfully
do you want to continue?
If yes then press1 else press 01
******WELCOME******
enter 1 to display
enter 2 to push
enter 3 to pop
enter your choice3

element popped successfully
do you want to continue?
If yes then press1 else press 01
******WELCOME******
enter 1 to display
enter 2 to push
enter 3 to pop
enter your choice3

STACK UNDERFLOW
do you want to continue?
If yes then press1 else press 01
******WELCOME******
enter 1 to display
enter 2 to push
enter 3 to pop
enter your choice2

Enter the element5

element pushed successfully
do you want to continue?
If yes then press1 else press 01
******WELCOME******
enter 1 to display
enter 2 to push
enter 3 to pop
enter your choice2

Enter the element1

element pushed successfully
do you want to continue?
If yes then press1 else press 01
******WELCOME******
enter 1 to display
enter 2 to push
enter 3 to pop
enter your choice2

Enter the element3

element pushed successfully
do you want to continue?
If yes then press1 else press 01
******WELCOME******
enter 1 to display
enter 2 to push
enter 3 to pop
enter your choice2

Enter the element7

element pushed successfully
do you want to continue?
If yes then press1 else press 01
******WELCOME******
enter 1 to display
enter 2 to push
enter 3 to pop
enter your choice1
        7       3       1       5
do you want to continue?
If yes then press1 else press 01
******WELCOME******
enter 1 to display
enter 2 to push
enter 3 to pop
enter your choice3

element popped successfully
do you want to continue?
If yes then press1 else press 01
******WELCOME******
enter 1 to display
enter 2 to push
enter 3 to pop
enter your choice1
        3       1       5
do you want to continue?
If yes then press1 else press 01
******WELCOME******
enter 1 to display
enter 2 to push
enter 3 to pop
enter your choice3

element popped successfully
do you want to continue?
If yes then press1 else press 01
******WELCOME******
enter 1 to display
enter 2 to push
enter 3 to pop
enter your choice1
        1       5
do you want to continue?
If yes then press1 else press 00

--------------------------------
Process exited after 138.3 seconds with return value 0
Press any key to continue . . .
*/
