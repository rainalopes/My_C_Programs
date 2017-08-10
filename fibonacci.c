/*NAME:RAINA.R.LOPES
ROLL.NO:29
PROGRAM NAME:RECURSION
DATE OF PERFORMANCE:23/07/2015
DATE OF SUBMISSION:30/09/2015
*/

#include<stdio.h>
int fib(int m);
void main()
{
int n,s,i,j=1;
printf("enter the number of values you want to display");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("\t%d",fib(j));
j++;
}
}
int fib(int m)
{
int r;
if(m==1)
return 0;
else if(m==2)
return 1;
else
{
r=fib(m-1)+fib(m-2);
return r;
}
}
/*
OUTPUT:
enter the number of values you want to display10
        0       1       1       2       3       5       8       13      21
34*/
