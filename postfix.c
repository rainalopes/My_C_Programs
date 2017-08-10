#include<stdio.h>
#include<malloc.h>
void display();
void push(struct node);

struct stackA
{
int data;
 struct stackA*next;
struct stackA*prev;
}*TOP,*p;

struct stackB
{
int data;
struct stackB*next;
struct stackB*prev;
}*TOP,*p;

struct node*getnode(void)
{
return((struct node*)malloc(sizeof(struct node)));
}
int count=0;

void main()
{
char s[100];int i=0;
printf("\nEnter The Exprssion:");
scanf("%s",s);
printf("\nthe expression is:\t%s",s);
while(s[i]!='\0')
{
if(s[i]=='('||s[i]=='['||s[i]=='{')
push(stackA,s[i]);
else if(s[i]>='A'||s[i]>='a'||s[i]<='Z'||s[i]<='z')
push(stackB,s[i]);
else if(s[i]=='*'||s[i]=='/'||s[i]=='+'||s[i]=='-')
push(stackA);
if(s[i]==')'||s[i]==']'||s[i]=='}')
push(stackA,s[i])
while(stackA->data!='('||stackA->data!='['||stackA->data!='{')
{
m=p;
p=p->next;
pop(p);
while(m!=')'||m!=']'||m!='}')
{
push(stackB,s[i]);
m=m->prev;
}}
display(stackB);

}

void display(struct stack)
{
      struct stack*p;
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





void push(struct stack,char b)
{
    int i=0;
         struct stack*q;
                          
         scanf("%d",&value);
         q=getnode();
         q->next=TOP;
         q->data=b;
         TOP=q;
         printf("\nelement pushed successfully");
        
         }

