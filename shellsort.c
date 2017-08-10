/*NAME: RAINA.R.LOPES
ROLL NO.: 29
PROGRAM NAME: SHELL SORT
*/
#include<stdio.h>
void main()
{
    int n,a[100];
    int i,j,temp,gap;
    printf("enter the number of elements to be sorted\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    	printf("\nenter the number:");
    	scanf("%d",&a[i]);
	}
	gap=n/2;
	while(gap!=0)
	{
	for(i=0;i+gap<n;i++)
	{
       j=i;

	while(a[j]>a[j+gap] && j>=0)
	{
		temp=a[j];
		a[j]=a[j+gap];
		a[j+gap]=temp;
     j--;
       }}
       gap=gap/2;		
		}
for(i=0;i<n;i++)
{
	printf("\n%d",a[i]);
}
}
/*OUTPUT:
enter the number of elements to be sorted
8

enter the number:8

enter the number:5

enter the number:4

enter the number:1

enter the number:6

enter the number:2

enter the number:3

enter the number:11

1
2
3
4
5
6
8
11
*/
