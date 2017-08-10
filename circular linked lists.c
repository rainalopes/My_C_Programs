#include<stdio.h>
#include<malloc.h>
void disp();
void insertbeg();
void insertend();
void insertpos();
void delbeg();
void delpos();
void delend();
void search();
void rev();
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
printf("******WELCOME TO CIRCULAR SINGLE LINKED LIST******\nenter 1 to display\nenter 2 to insert at begining\nenter 3 to insert at end\nenter4 to insert at position\nenter 5 to delete at start\nenter 6 to delete at end\nenter 7 to delete the position\nenter 8 to search\nenter 9 to reverse");


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
case 8:search();break;
case 9:rev();break;
default:printf("invalid choice");

}
printf("\ndo you want to continue?\nIf yes then press1 else press 0");
scanf("%d",&m);
}
while(m!=0);


}
      void disp()
       {
       struct node*t;  
       t=START;
       if(START==NULL)
       printf("\nlist is empty");
       else
       {
       	if(START->next==START)
       	printf("%d",START->data);
       	
       	else
       	{
       while(t->next!=START)
      {
       printf("\t%d",t->data);
	    t=t->next;
       
     }
        printf("\t%d",t->data);
		 }
          }
      }



         void insertbeg(void)
      {
      	struct node*p;
      	p=START;
         struct node*q;
          int value;
         printf("\nEnter the element");
         scanf("%d",&value);
         if(START==NULL)
         {
		 q=getnode();
         q->next=q;
         START=q;
		 q->data=value;
		 count++;
		 }
         else
         {
         while(p->next!=START)
         p=p->next;
         q=getnode();
         q->next=START;
         p->next=q;
          q->data=value;
         START=q;
         count++;
         printf("\nelement inserted successfully");
          }}



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
while(m->next!=START)

m=m->next;

l=getnode();
printf("enter the element you want to insert:\n");
scanf("%d",&value);
l->data=value;
l->next=START;
m->next=l;
count++;
printf("\nelement inserted successfully");

}
}
void insertpos(void)
{
struct node*d;
struct node*t;
int s,i,value;
d=START;
t=START;
struct node*h;
h=getnode();
printf("\nenter the position you want to insert");
scanf("%d",&s);
printf("\nenter the value");
scanf("%d",&value);
h->data=value;
if(START==NULL&&s!=1)
printf("\nlist is empty");
else
{

 if(s==1)
{ 
insertbeg();
}
else if(s==count+1)
insertend();
else
{

        for(i=1;i<s-1;i++)
          {
          
           if(d->next==START)
         {
     printf("\nthere are less elements");
       break;
        }
          d=d->next;}
         if(i==s-1)
         {
         h->next=d->next;
         d->next=h;   
          }
          count++;
    printf("\nelement inserted successfully");
}}}
void delbeg()
{
struct node*t;
struct node*p;
t=START;
p=START;
if(START==NULL)
printf("\nthe list is empty no deletion is possible");
else
{
	if(START->next==START)
{
free(START);
START=NULL;
count--;
printf("\nelement deleted successfully");
}
else
{

while(t->next!=START)
t=t->next;
START=START->next;
t->next=START;
free(p);

count--;
printf("\nelement deleted successfully");

}

}}


void delend()
{
struct node*g;
struct node*l;
g=START;
if(START==NULL)
printf("\nlist is empty");
if(START->next==START)
delbeg();
else
{
while(g->next!=START)
{
	l=g;
g=g->next;
}
free(g);
l->next=START;
count--;
printf("\nelement deleted successfully");
;
}

}
  void delpos()
{
      struct node*p;
     struct node*g;
      p=START;
     int i,loc;
     printf("\nenter the location to be deleted");
     scanf("%d",&loc);
       if(START==NULL)
{
printf("\nlist is empty no deletion possible");

}
   else if(loc==1)
     delbeg();
     else if(loc==count)
     delend();
     
else
{
	


for(i=1;i<=loc-1;i++)
{

if(p->next==START)
{
printf("\nless elements in list cannot be deleted");
break;
}
	g=p;
p=p->next;
}
if(i==loc)
{
g->next=p->next;

free(p);
count--;
printf("\nelement deleted successfully");
}
}
}

void search()
{
	struct node*p;
	int n,i=0;
	p=START;
		if(START==NULL)
	{
	printf("\nlist is empty");
     }
     else
     {
	 
	printf("\nenter the element you want to search");
	scanf("%d",&n);

	while(p->next!=START)
	    {
		
			
			if(p->data==n)
		    {
				
			printf("\nthe element %d is found in the list",n);
			i++;
			break;
		      }

				p=p->next;
			}
		     if(i==0)
			printf("the element is not present");
		

                       }
                       }
                     void rev()
                       {
                       	struct node*p;
                       	struct node*q;
                       	q=START;
                       	p=START;
                       	int i=0;
                       	int j;
                       	
                       	if(START==NULL)
                       	{
                       		printf("list is empty");
						   }
                       	
                       	else
                       	{
						
					   do
					   {
                             for(j=1;j<count-i;j++)
                             p=p->next;
                             i++;
                             printf("\t%d",p->data);
                             p=START;
                    }
                    while(i<count);
                        }
                    }
