/*
NAME:RAINA LOPES
ROLL.NO:29
PROGRAM NAME:STUDENT STRUCT
PERFORMANCE DATE: 16/07/2015 
SUBMISSION DATE:30/09/2015
*/

#include<stdio.h>
#include<string.h>
struct student
{
int roll;
char name[40];
int phy;
int chem;
int math;	
}s[4];
int main()
{
int i,r;
float sum1=0,avg1,sum2=0,avg2,sum3=0,avg3;
printf("DETAILS OF STUDENTS : \n");
for(i=0;i<5;i++)
{	printf("STUDENT %d :\n",i+1);
	printf("NAME : \n");
	scanf("%s",s[i].name);
	printf("ROLL NO : \n");
	scanf("%d",&s[i].roll);
	printf("MARKS :\n");
	printf("PHYSICS: \n");
	scanf("%d",&s[i].phy);
	while(s[i].phy>100)
		{
		printf("MARKS SHOULD NOT BE GREATER THAN 100!!\nENTER AGAIN\n");
	scanf("%d",&s[i].phy);
		}
	printf("CHEMISTRY : \n");
	scanf("%d",&s[i].chem);
	while(s[i].chem>100)
		{
		printf("MARKS SHOULD NOT BE GREATER THAN 100!!\nENTER AGAIN\n");
		scanf("%d",&s[i].chem);
		}
	printf("MATHS : \n");
	scanf("%d",&s[i].math);
	while(s[i].math>100)
		{
		printf("MARKS SHOULD NOT BE GREATER THAN 100!!\nENTER AGAIN\n");
	scanf("%d",&s[i].math);
		}
}
printf("THE DETAILS ARE : \n");
printf("ROLL_NO\tNAME\tPHY\tCHEM\tMATHS\n");
for(i=0;i<5;i++)
{
	printf("%d\t %s\t %d\t %d\t %d\t ",s[i].roll,s[i].name,s[i].phy,s[i].chem,s[i].math);
	printf("\n");
}
for(i=0;i<5;i++)
{
sum1=sum1+s[i].phy;
}
avg1=(sum1/5);
printf("AVERAGE : \n");
printf("PHYSICS : \t %f\n",avg1);
for(i=0;i<5;i++)
{
sum2=sum2+s[i].chem;
}
avg2=(sum2/5);
printf("CHEMISTRY : \t %f\n",avg2);
for(i=0;i<5;i++)
{
sum3=sum3+s[i].math;
}
avg3=(sum3/5);
printf("MATHS : \t %f\n",avg3);
return(0);
}

/*
OUTPUT:
DETAILS OF STUDENTS :
STUDENT 1 :
NAME :
PRIYA
ROLL NO :
1
MARKS :
PHYSICS:
40
CHEMISTRY :
35
MATHS :
45
STUDENT 2 :
NAME :
YASH
ROLL NO :
2
MARKS :
PHYSICS:
50
CHEMISTRY :
44
MATHS :
25
STUDENT 3 :
NAME :
SUMI
ROLL NO :
3
MARKS :
PHYSICS:
12
CHEMISTRY :
14
MATHS :
19
STUDENT 4 :
NAME :
KIRTI
ROLL NO :
5
MARKS :
PHYSICS:
22
CHEMISTRY :
45
MATHS :
2
STUDENT 5 :
NAME :
ANU
ROLL NO :
6
MARKS :
PHYSICS:
45
CHEMISTRY :
45
MATHS :
45
THE DETAILS ARE :
ROLL_NO NAME    PHY     CHEM    MATHS
1        PRIYA   40      35      45
2        YASH    50      44      25
3        SUMI    12      14      19
5        KIRTI   22      45      2
6        ANU     45      45      45
AVERAGE :
PHYSICS :        33.799999
CHEMISTRY :      36.599998
MATHS :          27.200001
*/
