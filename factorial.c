/*NAME:RAINA.R.LOPES
ROLL.NO:29
PROGRAM NAME:RECURSION
DATE OF PERFORMANCE:23/07/2015
DATE OF SUBMISSION:30/09/2015

*/

#include<stdio.h>
int fact(int num);
void main()
{
int n,result;
printf("enter the number");
scanf("%d",&n);
result=fact(n);
printf("%d",result);
}
int fact(int num)
{
int r;
if(num==1)
return 1;
else if(num==0)
return 0;
else
{
r=num*fact(num-1);
return r;
}}

/*
OUTPUT:
enter the number5
120
*/
