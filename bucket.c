/*NAME: RAINA.R.LOPES
ROLL NO.: 29
PROGRAM NAME: BUCKET SORT
*/
#include<stdio.h>
void Bucket_Sort(int array[], int n)
{   
 int i, j;   
 int count[n];  
 for(i=0; i < n; i++)
 {   
  count[i] = 0;   
 }     
 for(i=0; i < n; i++)
 {    
  (count[array[i]])++; 
 }     
 for(i=0,j=0; i < n; i++)
 {   
  for(; count[i]>0;(count[i])--) 
  {       
   array[j++] = i; 
  }  
 }   
}    
int main() 
{ 
 int array[100];   
 int num;   
 int i;  
 printf("Enter number of Numbers : ");    
 scanf("%d",&num);      
 for(i = 0; i < num; i++ )
 {   
  scanf("%d",&array[i]);  
 }   
 printf("\n elements before sorting : \n"); 
 for (i = 0;i < num;i++) 
 {    
  printf("%d ", array[i]);   
 }    
 printf("\n elements after sorting : \n");  
 Bucket_Sort(array, num);  
 for (i = 0;i <num;i++) 
 {     
  printf("%d ", array[i]);  
 }   
 printf("\n");      
 return 0; 
} 
/*
OUTPUT:
Enter number of Numbers : 8
8
7
6
5
4
3
2
1

 elements before sorting :
8 7 6 5 4 3 2 1
 elements after sorting :
1 2 3 4 5 6 7 1
*/
