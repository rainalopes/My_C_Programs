/*
NAME: RAINA.R.LOPES
ROLL NO.: 29
PROGRAM NAME: DOUBLE LINKED LIST
DATE OF PERFORMANCE:06/08/2015
DATE OF SUBMISSION:5/10/2015
*/

#include<stdio.h>
#include<malloc.h>
void disp();
void insertbeg();
void insertend();
void insertpos();
void delbeg();
void delpos();
void delend();

struct node
{
int data;
 struct node*next;
  struct node*prev;
}*START,*p,*newnode;


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
printf("******WELCOME TO DOUBLE LINKED LIST******\nenter 1 to display\nenter 2 to insert at begining\nenter 3 to insert at end\nenter4 to insert at position\nenter 5 to delete at start\nenter 6 to delete at end\nenter 7 to delete the position");


printf("\nenter your choice");
scanf("%d",&choice);

switch(choice)
{
case 1:disp();break;
case 2:insertbeg();break;
case 3:insertend();break;
case 4:insertpos();break;
case 5:delbeg();break;
case 6:delend();break;
case 7:delpos();break;
default:printf("invalid choice");

}
printf("\ndo you want to continue?\nIf yes then press1 else press 0");
scanf("%d",&m);
}
while(m!=0);


}
      void disp(struct node*p)
       {
         
       p=START;
       if(START==NULL)
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
         p=START;
int value;
printf("\nenter the element to be inserted");
scanf("%d",&value);
if(START==NULL)
{
newnode=getnode();
newnode->data=value;
newnode->next=NULL;
newnode->prev=NULL;
START=newnode;
count++;
}
else
{
 newnode=getnode();
newnode->data=value;
newnode->prev=NULL;
newnode->next=p;
p->prev=newnode;
START=newnode;
count++;
        }  
		printf("element inserted successfully");
		}



        void insertend(void)
   {
p=START;
   int value;
   
       if(START==NULL)
{
     insertbeg();
}
else
{
while(p->next!=NULL)

p=p->next;

newnode=getnode();
printf("enter the element you want to insert:\n");
scanf("%d",&value);
newnode->data=value;
p->next=newnode;
newnode->prev=p;
newnode->next=NULL;
printf("\nelement inserted successfully");
count++;

}
}
void insertpos(void)
{

int s,i,value;
p=START;
newnode=getnode();
printf("\nenter the position you want to insert");
scanf("%d",&s);
printf("\nenter the value");
scanf("%d",&value);
 
if(START==NULL&& s!=1)
printf("\nlist is empty");
else
{
if(s==1)
{ 
insertbeg();
}
else if(s==count+1)
{
	insertend();
}
else

{
        for(i=1;i<s-1;i++)
         { 
           if(p->next==NULL)
         {
     printf("\nthere are less elements");
       
        break; }
         p=p->next;
		 }
         if(i==s-1)
         {
         newnode->next=p->next;
         p->next->prev=newnode;
         p->next=newnode;
		 newnode->data=value; 
		 count++;  
        printf("\nelement inserted successfully");
		  }}
    
}}
void delbeg()
{

p=START;
if(count==0)
printf("\nthe list is empty no deletion is possible");
else
{
	if(START->next!=NULL)
	{
START=START->next;
free(p);
START->prev=NULL;
printf("\nelement deleted successfully");
count--;
}
else
{
	free(START);
	START=NULL;
	count--;
	printf("\nelement deleted successfully");
}
}}


void delend()
{
struct node*l;
p=START;
if(count==0)
printf("\nlist is empty");
else if(START->next==NULL)
delbeg();
else
{
while(p->next!=NULL)
{
	l=p;
p=p->next;
}
free(p);
l->next=NULL;
printf("\nelement deleted successfully");
count--;
}

}
  void delpos()
{
     struct node*g;
      p=START;
     int i,loc;
     printf("\nenter the location to be deleted");
     scanf("%d",&loc);
       if(count==0)
{
printf("\nlist is empty no deletion possible");

}
   else if(loc==1)
     delbeg();
     else if(loc==count)
     {
     	delend();
	 }
     
else
{
if(START->next==NULL && loc>count)
{
	printf("\nlesser elements present");
}
else
{
for(i=1;i<=loc-1;i++)
{
	g=p;
p=p->next;
if(p->next==NULL)
{
printf("\nless elements in list cannot be deleted");
break;
}

}
if(i==loc)
{
g->next=p->next;
p->next->prev=g;
free(p);
count--;
printf("\nelement deleted successfully");
}
}}
}
/*
OUTPUT:
******WELCOME TO DOUBLE LINKED LIST******
enter 1 to display
enter 2 to insert at begining
enter 3 to insert at end
enter4 to insert at position
enter 5 to delete at start
enter 6 to delete at end
enter 7 to delete the position
enter your choice1

list is empty
do you want to continue?
If yes then press1 else press 01
******WELCOME TO DOUBLE LINKED LIST******
enter 1 to display
enter 2 to insert at begining
enter 3 to insert at end
enter4 to insert at position
enter 5 to delete at start
enter 6 to delete at end
enter 7 to delete the position
enter your choice5

the list is empty no deletion is possible
do you want to continue?
If yes then press1 else press 01
******WELCOME TO DOUBLE LINKED LIST******
enter 1 to display
enter 2 to insert at begining
enter 3 to insert at end
enter4 to insert at position
enter 5 to delete at start
enter 6 to delete at end
enter 7 to delete the position
enter your choice2

enter the element to be inserted1
element inserted successfully
do you want to continue?
If yes then press1 else press 01
******WELCOME TO DOUBLE LINKED LIST******
enter 1 to display
enter 2 to insert at begining
enter 3 to insert at end
enter4 to insert at position
enter 5 to delete at start
enter 6 to delete at end
enter 7 to delete the position
enter your choice2

enter the element to be inserted0
element inserted successfully
do you want to continue?
If yes then press1 else press 01
******WELCOME TO DOUBLE LINKED LIST******
enter 1 to display
enter 2 to insert at begining
enter 3 to insert at end
enter4 to insert at position
enter 5 to delete at start
enter 6 to delete at end
enter 7 to delete the position
enter your choice1
        0       1
do you want to continue?
If yes then press1 else press 01
******WELCOME TO DOUBLE LINKED LIST******
enter 1 to display
enter 2 to insert at begining
enter 3 to insert at end
enter4 to insert at position
enter 5 to delete at start
enter 6 to delete at end
enter 7 to delete the position
enter your choice3
enter the element you want to insert:
2

element inserted successfully
do you want to continue?
If yes then press1 else press 01
******WELCOME TO DOUBLE LINKED LIST******
enter 1 to display
enter 2 to insert at begining
enter 3 to insert at end
enter4 to insert at position
enter 5 to delete at start
enter 6 to delete at end
enter 7 to delete the position
enter your choice1
        0       1       2
do you want to continue?
If yes then press1 else press 01
******WELCOME TO DOUBLE LINKED LIST******
enter 1 to display
enter 2 to insert at begining
enter 3 to insert at end
enter4 to insert at position
enter 5 to delete at start
enter 6 to delete at end
enter 7 to delete the position
enter your choice5

element deleted successfully
do you want to continue?
If yes then press1 else press 01
******WELCOME TO DOUBLE LINKED LIST******
enter 1 to display
enter 2 to insert at begining
enter 3 to insert at end
enter4 to insert at position
enter 5 to delete at start
enter 6 to delete at end
enter 7 to delete the position
enter your choice1
        1       2
do you want to continue?
If yes then press1 else press 01
******WELCOME TO DOUBLE LINKED LIST******
enter 1 to display
enter 2 to insert at begining
enter 3 to insert at end
enter4 to insert at position
enter 5 to delete at start
enter 6 to delete at end
enter 7 to delete the position
enter your choice6

element deleted successfully
do you want to continue?
If yes then press1 else press 01
******WELCOME TO DOUBLE LINKED LIST******
enter 1 to display
enter 2 to insert at begining
enter 3 to insert at end
enter4 to insert at position
enter 5 to delete at start
enter 6 to delete at end
enter 7 to delete the position
enter your choice1
        1
do you want to continue?
If yes then press1 else press 07
******WELCOME TO DOUBLE LINKED LIST******
enter 1 to display
enter 2 to insert at begining
enter 3 to insert at end
enter4 to insert at position
enter 5 to delete at start
enter 6 to delete at end
enter 7 to delete the position
enter your choice2

enter the element to be inserted4
element inserted successfully
do you want to continue?
If yes then press1 else press 01
******WELCOME TO DOUBLE LINKED LIST******
enter 1 to display
enter 2 to insert at begining
enter 3 to insert at end
enter4 to insert at position
enter 5 to delete at start
enter 6 to delete at end
enter 7 to delete the position
enter your choice1
        4       1
do you want to continue?
If yes then press1 else press 01
******WELCOME TO DOUBLE LINKED LIST******
enter 1 to display
enter 2 to insert at begining
enter 3 to insert at end
enter4 to insert at position
enter 5 to delete at start
enter 6 to delete at end
enter 7 to delete the position
enter your choice4

enter the position you want to insert2

enter the value9

element inserted successfully
do you want to continue?
If yes then press1 else press 01
******WELCOME TO DOUBLE LINKED LIST******
enter 1 to display
enter 2 to insert at begining
enter 3 to insert at end
enter4 to insert at position
enter 5 to delete at start
enter 6 to delete at end
enter 7 to delete the position
enter your choice1
        4       9       1
do you want to continue?
If yes then press1 else press 01
******WELCOME TO DOUBLE LINKED LIST******
enter 1 to display
enter 2 to insert at begining
enter 3 to insert at end
enter4 to insert at position
enter 5 to delete at start
enter 6 to delete at end
enter 7 to delete the position
enter your choice7

enter the location to be deleted3

element deleted successfully
do you want to continue?
If yes then press1 else press 01
******WELCOME TO DOUBLE LINKED LIST******
enter 1 to display
enter 2 to insert at begining
enter 3 to insert at end
enter4 to insert at position
enter 5 to delete at start
enter 6 to delete at end
enter 7 to delete the position
enter your choice1
        4       9
do you want to continue?
If yes then press1 else press 06
******WELCOME TO DOUBLE LINKED LIST******
enter 1 to display
enter 2 to insert at begining
enter 3 to insert at end
enter4 to insert at position
enter 5 to delete at start
enter 6 to delete at end
enter 7 to delete the position
enter your choice6

element deleted successfully
do you want to continue?
If yes then press1 else press 01
******WELCOME TO DOUBLE LINKED LIST******
enter 1 to display
enter 2 to insert at begining
enter 3 to insert at end
enter4 to insert at position
enter 5 to delete at start
enter 6 to delete at end
enter 7 to delete the position
enter your choice7

enter the location to be deleted1

element deleted successfully
do you want to continue?
If yes then press1 else press 01
******WELCOME TO DOUBLE LINKED LIST******
enter 1 to display
enter 2 to insert at begining
enter 3 to insert at end
enter4 to insert at position
enter 5 to delete at start
enter 6 to delete at end
enter 7 to delete the position
enter your choice1

list is empty
do you want to continue?
If yes then press1 else press 00

--------------------------------
Process exited after 239.7 seconds with return value 0
Press any key to continue . . .
*/
