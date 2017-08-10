/*NAME: RAINA.R.LOPES
ROLL NO.: 29
PROGRAM NAME: POSTFIX CONVERSION AND EVALUATION
*/
#include<stdio.h> 
#include <ctype.h>

char s[100];
int top =-1; 
int t[100];
int top1=-1;

push(char elem)
 { 
 s[++top] = elem;
}

char pop()
 { 
 return (s[top--]);
 }

int pr(char elem)
 { 
 switch (elem)
  {
 case '#':
  return 0;
  break;
 case '(':
   return 1;
  break;
 case '+':
 case '-':
  return 2;
  break;
 case '*':
 case '/':
  return 3;
  break;
 }
}
 void pushit(char ele)
{                     
 t[++top1]=ele-'0';
}

int popit()
{                                  
 return(t[top1--]);
}

void  main()
 { 
  char infx[50], pofx[50], ch, elem,ch1;
 int i = 0, k = 0, op1, op2;
 printf("\nRead the Infix Expression");
 scanf("%s", infx);
 push('#');
 while ((ch = infx[i++]) != '\0')
  {
  if (ch == '(')
   push(ch);
  else if (isalnum(ch))
   pofx[k++] = ch;
  else if (ch == ')') 
  {
   while (s[top] != '(')
    pofx[k++] = pop();
   elem = pop(); 
  } 
  else 
  { 
   while (pr(s[top]) >= pr(ch))
    pofx[k++] = pop();
   push(ch);
  }
 }
  while (s[top] != '#') 
  pofx[k++] = pop();
 pofx[k] = '\0'; 
 printf("\nGiven Infix Expn: %s\nPostfix Expn: %s\n", infx, pofx);

i=0;
 while(pofx[i]!= '\0')
 {
 ch1=pofx[i];
  if(isdigit(ch1))
  {
  	  pushit(ch1);
   }
  else
  {      
   op2 = popit();
   op1 = popit();
   
   
   switch(ch1)
   {
   case '+':pushit(op1+op2); printf("\n%d\n",op1+op2);
   break;
   case '-':pushit(op1-op2); printf("\n%d\n",op1-op2);
   break;
   case '*':pushit(op1*op2); printf("\n%d\n",op1*op2);
   break;
   case '/':pushit(op1/op2); printf("\n%d\n",op1/op2);
   break;
   }
  }
  i++;
 }
 printf("\n Given Postfix Expn: %s",pofx);
 printf("\n Result after Evaluation: %d",t[top1]);
}
/*OUTPUT:
Read the Infix ExpressionA+V*C(A+B)/C+(A-D)

Given Infix Expn: A+V*C(A+B)/C+(A-D)
Postfix Expn: AVCAB+*C/+AD-+

0
0
*/