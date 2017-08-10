/*
NAME: RAINA.R.LOPES
ROLL NO.: 29
PROGRAM NAME: ARRAY
DATE OF PERFORMANCE: 16/07/2015
DATE OF SUBMISSION:29/09/2015
*/

#include<stdio.h>
void traverse(int[],int);
void insert(int[],int);
void delete(int[],int);
int replace(int[],int);
void search(int[],int);
int n;
void main()
{int a[100],i;
int m;
printf("\nenter the number of elements");
scanf("%d",&n);
printf("\nenter the elements in array");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
do
{
printf("select 1 to traverse\nselect 2 to insert\nselect 3 to delete \nselect 4 to replace\nselect 5 to search");
int opt;
printf("\nselect an option");
scanf("%d",&opt);
switch(opt)
{
case 1:traverse(a,n);
break;
case 2:insert(a,n);
break;
case 3:delete(a,n);
break;
case 4:replace(a,n);
break;
case 5:search(a,n);
break;
default:printf("invalid option");
break;
}
printf("\ndo you want to continue?...if yes then press1 else press 0");
scanf("%d",&m);
}
while(m!=0);
}


void traverse(int b[],int g)
{

int j;
if(n==0)
{
	printf("Array is empty");
}
else
{
for(j=0;j<g;j++)
{
printf("%d\t",b[j]);
}
}}


void insert(int b[],int g)
{
int j;

int pos,num;
printf("\nenter the number to be inserted");
scanf("%d",&num);
printf("\nselect the position");
scanf("%d",&pos);
if(pos!=n+1 && pos>n)
{
	printf("\nlesser elements in the list");
}

else
{
for(j=g-1;j>=(pos-1);j--)
{
b[j+1]=b[j];
}
b[pos-1]=num;
n=n+1;
traverse(b,n);
}
}


void delete(int b[],int g)
{


int j;
int pos;
printf("enter the position");
scanf("%d",&pos);
if(pos>n)
{
	printf("\nNo deletion is possible due to lesser number of elements");
}
else
{
for(j=(pos-1);j<g;j++)
{
b[j]=b[j+1];
}
n=n-1;
traverse(b,n);
}}


int replace(int b[],int g)
{
int j;
int pos,num;

printf("enter position");
scanf("%d",&pos);
if (pos>n)
{
printf("\nno replacement possible!");	
}
else
{
printf("enter number to be put in position");
scanf("%d",&num);
b[pos-1]=num;
traverse(b,n);
}
}


void search(int b[],int n)
{
printf("Enter the element you want to search");
int p,i,count=0;
scanf("%d",&p);
for(i=0;i<n;i++)
{
if(b[i]==p)
count++;
}
if(count==0)
printf("Element is not present in the list");
else
printf("%d element is present in the list",p);
}
/*
OUTPUT:
enter the number of elements5

enter the elements in array14
1
7
6
12
select 1 to traverse
select 2 to insert
select 3 to delete
select 4 to replace
select 5 to search
select an option1
14      1       7       6       12
do you want to continue?...if yes then press1 else press 01
select 1 to traverse
select 2 to insert
select 3 to delete
select 4 to replace
select 5 to search
select an option2

enter the number to be inserted20

select the position4
14      1       7       20      6       12
do you want to continue?...if yes then press1 else press 01
select 1 to traverse
select 2 to insert
select 3 to delete
select 4 to replace
select 5 to search
select an option2

enter the number to be inserted8

select the position8

lesser elements in the list
do you want to continue?...if yes then press1 else press 01
select 1 to traverse
select 2 to insert
select 3 to delete
select 4 to replace
select 5 to search
select an option4
enter position4
enter number to be put in position30
14      1       7       30      6       12
do you want to continue?...if yes then press1 else press 01
select 1 to traverse
select 2 to insert
select 3 to delete
select 4 to replace
select 5 to search
select an option3
enter the position9

No deletion is possible due to lesser number of elements
do you want to continue?...if yes then press1 else press 01
select 1 to traverse
select 2 to insert
select 3 to delete
select 4 to replace
select 5 to search
select an option3
enter the position1
1       7       30      6       12
do you want to continue?...if yes then press1 else press 01
select 1 to traverse
select 2 to insert
select 3 to delete
select 4 to replace
select 5 to search
select an option5
Enter the element you want to search12
12 element is present in the list
do you want to continue?...if yes then press1 else press 00
*/
