/*NAME: RAINA.R.LOPES
ROLL NO.: 29
PROGRAM NAME: PALINDROME
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void push();
void pop();
void check(int);
struct node

{

	char data;
	struct node *next;

};


char s[100];
int count=0,max=100;
struct node *top=NULL;
int main()
{
	printf("\nENTER THE STRING : \n");
	gets(s);
	push();
	return(0);
}
void push()
{       int i=0;

	
	
		 while(s[i]!='\0')
		 {
			struct node *nn;
			nn=(struct node *)malloc(sizeof(struct node));
			nn->data=s[i];
			nn->next=top;
			top=nn;
			count++;
			i++;
		 }
	 	pop();
	

}
void pop()
{
	int i=0,c=0;
	struct node *p;


	{
		while(s[i]!='\0')
		{
			p=top;
			if(s[i]==p->data)
			c++;
			top=top->next;
			free(p);
			count--;
			i++;
		}
	}
 check(c);
}


void check(int t)
{
	if(t==strlen(s))
	printf("\nIT IS A PALINDROME\n");
	else
	printf("\nIT IS NOT A PALINDROME\n");

}

/*
OUTPUT1:
ENTER THE STRING :
RAINA

IT IS NOT A PALINDROME

OUTPUT2:

ENTER THE STRING :
MALAYALAM

IT IS A PALINDROME

*/
