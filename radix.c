/*NAME: RAINA.R.LOPES
ROLL NO.: 29
PROGRAM NAME: RADIX SORT
*/
#include <stdio.h>
 
int min = 0, count = 0, array[100] = {0}, array1[100] = {0};
 
void main()
{
    int k, i, j, temp, t, n;
 
    printf("Enter size of array :");
    scanf("%d", &count);
    printf("Enter elements into array :");
    for (i = 0; i < count; i++)
    {
        scanf("%d", &array[i]);
        array1[i] = array[i];
    }
    for (k = 0; k < 3; k++)
    {    
        for (i = 0; i < count; i++)
        {
            min = array[i] % 10;        /* To find minimum lsd */
            t = i;
            for (j = i + 1; j < count; j++)    
            {
                if (min > (array[j] % 10))
                {
                    min = array[j] % 10; 
                    t = j;
                }
            }
            temp = array1[t];
            array1[t] = array1[i];
            array1[i] = temp;
            temp = array[t];
            array[t] = array[i];
            array[i] = temp;
 
        }
        for (j = 0; j < count; j++)        /*to find MSB */
            array[j] = array[j] / 10;
    }
    printf("*******RADIX SORT******** ");
    for (i = 0; i < count; i++)
        printf("%d ", array1[i]);
}
/*
OUTPUT:
Enter size of array :8
Enter elements into array :7
4
5
1
2
3
6
8
*******RADIX SORT******** 1 2 3 4 5 6 7 8
*/
