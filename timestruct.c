/*NAME:RAINA.R.LOPES
ROLL.NO:29
PROGRAM NAME:TIME STRUCT
DATE OF PERFORMANCE:16/07/2015
DATE OF SUBMISSION:30/09/2015
*/




#include<stdio.h>

struct time
{
	int hour;
	int min;
	int sec;
}t;
void update(struct time*m);
void display(struct time*m);
void input(struct time*m);

void main()
{

	int choice,n;
     
     struct time*p ; 
     p=&t;
	
	input(p);
	
	do
	{
		printf("\nenter 1 to update\nenter 2 to display\nenter 3 to input");
			printf("\nenter your choice");
	         scanf("%d",&choice);
    	switch(choice)
	{
		case 1: update(p);break;
		case 2: display(p);break;
		case 3:input(p);break;
		default :printf("invalid choice");
	}
	printf("Do you want to continue???\nIf yes then press any number else press 0 to exit");
	scanf("%d",&n);
	}
	while(n!=0);
	
}


void update(struct time*m)
{     
	if(m->sec==59)
	{
		m->sec=0;
		m->min++;
		
 if(m->min==60)
	{
	
	m->min=0;
	m->hour++;
	
	if(m->hour==24)
	{
		m->hour=0;
	}
}}
else
{
	m->sec++;
}
        }
        
        
        
        void display(struct time*m)
        {
        
        	printf("Time is %d:%d:%d",m->hour,m->min,m->sec);
		}
       
	   void input(struct time*m)
	   {
	   
	   
	   		printf("\nenter the hour");
       scanf("%d",&m->hour);
       
	printf("\nenter minute");
	scanf("%d",&m->min);

	printf("\nenter seconds");
      scanf("%d",&m->sec);
  

	if(m->hour>23||m->min>59||m->sec>59||m->hour<0||m->min<0||m->sec<0)
	{
	
	printf("INVALID TIME");

	input(m);
	
	}	} 


/*
OUTPUT:
enter the hour25

enter minute45

enter seconds45
INVALID TIME
enter the hour23

enter minute59

enter seconds59

enter 1 to update
enter 2 to display
enter 3 to input
enter your choice1
Do you want to continue???
If yes then press any number else press 0 to exit1

enter 1 to update
enter 2 to display
enter 3 to input
enter your choice2
Time is 0:0:0Do you want to continue???
If yes then press any number else press 0 to exit0


*/
