/*NAME: RAINA.R.LOPES
ROLL NO.: 29
PROGRAM NAME: INSERTION SORT
*/

#include<stdio.h>
void main()
{
	int i,j,temp;
	int a[100];
	int n;
	printf("\nEnter the number of elements you want to enter");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	printf("\nenter the number");
	scanf("%d",&a[i]);
	}
	printf("\nthe unsorted elements are:");
		for(i=0;i<n;i++)
		{
		printf("\n%d",a[i]);	
		}
		
	for(i=1;i<n;i++)
	{
		j=i;
		while(j>0 && a[j]<a[j-1])
		{
		temp=a[j];
		a[j]=a[j-1];
		a[j-1]=temp;
		j--;	
		}
	}
		printf("\nthe sorted elements are:");
	for(i=0;i<n;i++)
	{
		printf("\n%d",a[i]);
	}
	
}


/*
OUTPUT:
Enter the number of elements you want to enter8

enter the number10

enter the number9

enter the number8

enter the number1

enter the number4

enter the number5

enter the number6

enter the number8

the unsorted elements are:
10
9
8
1
4
5
6
8
the sorted elements are:
1
4
5
6
8
8
9
10
*/