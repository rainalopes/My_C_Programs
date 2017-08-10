/*
NAME: RAINA LOPES
ROLL NO.: 29
PROGRAM NAME: BAG
*/
#include<stdio.h>
#include<malloc.h>

struct node
{
int data;
 struct node*next;
int NOE;
}*START,*p,*nn;

int count=0;
struct node*getnode(void)
{
return((struct node*)malloc(sizeof(struct node)));
}


remove(int value,int noc)
{
p=START;

if(START==NULL)
{
printf("\nBag is empty");
}

else
{
printf("\nenter the element to be removed");
scanf("%d",&value);
printf("\nEnter the number of copies to be removed");
scanf("%d",&noc);

while(p!=NULL)
{
	if(p->data==value)
{
	p->NOE=p->NOE-noc;
break;
}
	else 
     p=p->next;
}
	
}}

void disp()
       {
       	p=START;
int print;
 if(START==NULL||count==0)
printf("\nbag is empty");
else
{
while(p!=NULL)
{
for(print=0;print<p->NOE;print++)
{
printf("\t%d",p->data);

}
    p=p->next;
	}
}}
          

void add()
{
int value;
int copytoadd;
printf("enter the element");
scanf("%d",&value);
struct node*q;
q=START;
printf("enter the number of copies to add");
scanf("%d",&copytoadd);
if(START==NULL)
{
nn=getnode();
nn->next=START;
nn->data=value;
nn->NOE=copytoadd;
START=nn;
count++;
}
else
{
while(q->next!=NULL)
{
if(value==q->data)
{
q->NOE=q->NOE+copytoadd;
}
else
{
q=q->next;
}}
nn=getnode();
q->next=nn;
nn->next=NULL;
nn->data=value;
nn->NOE=copytoadd;
}
}



void subtract()
{
int s[50];
 p=START;
 int n;
printf("\nEnter the number of elements in the new bag");
scanf("%d",&n);
 printf("\nEnter the bag to be subtracted");
int i;
for(i=0;i<n;i++)
{
scanf("%d",&s[i]);
}
if(START==NULL)
{
	printf("bag is empty");
}
else
{
i=0;
while(i<n)
{
while(s[i]==p->data  && p!=NULL)
{
p->NOE=p->NOE-1;
p=p->next;
}
i++;
}
}}
void main()
{
int choice;
int m;
int val;
int copy;
do
{
printf("\n1 toadd\n2 to remove\n3 to subtract\n4 to display");


printf("\nenter your choice");
scanf("%d",&choice);

switch(choice)
{
case 1:add();break;
case 2:remove(val,copy);break;
case 3:subtract();break;
case 4:disp();break;
default:printf("invalid choice");

}
printf("\ndo you want to continue?\nIf yes then press1 else press 0");
scanf("%d",&m);
}
while(m!=0);
}
/*OUTPUT:
1 toadd
2 to remove
3 to subtract
4 to display
enter your choice1
enter the element9
enter the number of copies to add2

do you want to continue?
If yes then press1 else press 01

1 toadd
2 to remove
3 to subtract
4 to display
enter your choice1
enter the element7
enter the number of copies to add4

do you want to continue?
If yes then press1 else press 01

1 toadd
2 to remove
3 to subtract
4 to display
enter your choice4
        9       9       7       7       7       7
do you want to continue?
If yes then press1 else press 01

1 toadd
2 to remove
3 to subtract
4 to display
enter your choice2

enter the element to be removed4

Enter the number of copies to be removed3

do you want to continue?
If yes then press1 else press 01

1 toadd
2 to remove
3 to subtract
4 to display
enter your choice4
        9       9       7       7       7       7
do you want to continue?
If yes then press1 else press 01

1 toadd
2 to remove
3 to subtract
4 to display
enter your choice2

enter the element to be removed7

Enter the number of copies to be removed2

do you want to continue?
If yes then press1 else press 01

1 toadd
2 to remove
3 to subtract
4 to display
enter your choice4
        9       9       7       7
do you want to continue?
If yes then press1 else press 01

1 toadd
2 to remove
3 to subtract
4 to display
enter your choice3
Enter the number of elements in the new bag4
Enter the bag to be subtracted
1
2
3
7
do you want to continue?
If yes then press1 else press 01
1 toadd
2 to remove
3 to subtract
4 to display
enter your choice4
9       7     
  


*/
      
