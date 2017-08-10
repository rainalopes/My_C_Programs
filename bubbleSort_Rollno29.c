/*
NAME: RAINA.R.LOPES
ROLL NO.: 29
PROGRAM NAME: bubble sort

*/

#include<stdio.h>
void main()
{
int i,j,n,temp;
int a[100];
printf("\nenter the number of elements you want to sort");
scanf("%d",&n);
printf("\nenter the elements:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("\nthe unsorted list is:");
for(i=0;i<n;i++)
{
printf("\n%d",a[i]);
}
for(i=0;i<n;i++)
{
for(j=0;j<n-i-1;j++)
{
if(a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
}
printf("\nthe sorted list is:");
for(i=0;i<n;i++)
{
printf("\n%d",a[i]);
}
}
/*
OUTPUT:
enter the number of elements you want to sort8

enter the elements:8
7
6
5
4
3
2
1

the unsorted list is:
8
7
6
5
4
3
2
1
the sorted list is:
1
2
3
4
5
6
7
8
*/