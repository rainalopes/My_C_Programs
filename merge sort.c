/*NAME: RAINA.R.LOPES
ROLL NO.: 29
PROGRAM NAME: MERGE SORT
*/
#include<stdio.h>
#include<conio.h>
void merge(int [],int ,int ,int );
void part(int [],int ,int );
void main()
{
 int arr[30];
 int i,n;
 
 printf("Enter total no. of elements : ");
 scanf("%d",&n);
 for(i=0; i<n; i++)
 {
   printf("Enter element : ");
   scanf("%d",&arr[i]);
 }
 part(arr,0,n-1);
 printf("\nsorted list is:");
 for(i=0; i<n; i++)
 printf("%d ",arr[i]);
 
}


void part(int arr[],int min,int max)
{
 int mid;
  mid=(min+max)/2;
 if(min<max)
 {
   part(arr,min,mid);
   part(arr,mid+1,max);
   merge(arr,min,mid,max);
 }
}


void merge(int arr[],int min,int mid,int max)
{
  int tmp[30];
  int i,j,k,m; 
  j=min;
  m=mid+1;
  for(i=min; j<=mid && m<=max ; i++)
  {
     if(arr[j]<=arr[m])
     {
         tmp[i]=arr[j];
         j++;
     }
     else
     {
         tmp[i]=arr[m];
         m++;
     }
  }
  if(j>mid)
  {
     for(k=m; k<=max; k++)
     {
         tmp[i]=arr[k];
         i++;
     }
  }
  else
  {
     for(k=j; k<=mid; k++)
     {
        tmp[i]=arr[k];
        i++;
     }
  }
  for(k=min; k<=max; k++)
     arr[k]=tmp[k];
}
/*
OUTPUT:
Enter total no. of elements : 8
Enter element : 8
Enter element : 7
Enter element : 6
Enter element : 5
Enter element : 4
Enter element : 3
Enter element : 2
Enter element : 1

sorted list is:1 2 3 4 5 6 7 8
*/