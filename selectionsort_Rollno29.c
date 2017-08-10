/*
NAME: RAINA.R.LOPES
ROLL NO.: 29
PROGRAM NAME: SELECTION SORT
*/

#include<stdio.h>
void main()
{

  int n,i,j,temp,a[100];

  printf("\nEnter number of elements to be sorted: ");
  scanf("%d",&n);

  printf("Enter the elements: ");
  for(i=0;i<n;i++)
      scanf("%d",&a[i]);
      printf("\nthe unsorted elements are:");
      for(i=0;i<n;i++)
      printf("\n%d",a[i]);

  for(i=0;i<n;i++)
  {
      for(j=i+1;j<n;j++)
	  {
           if(a[i]>a[j])
		   {
               temp=a[i];
              a[i]=a[j];
              a[j]=temp;
           }
      }
  }

  printf("\nelements after sorting are:");
  for(i=0;i<n;i++)
      printf("\n%d",a[i]);

}
/*OUTPUT:
Enter number of elements to be sorted: 6
Enter the elements: 6
5
4
3
2
1

the unsorted elements are:
6
5
4
3
2
1
elements after sorting are:
1
2
3
4
5
6
*/

