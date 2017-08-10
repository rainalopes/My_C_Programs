#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/* constants */
#define TRUE 1
#define FALSE 0

/* structure for stack */
typedef struct
{
      char data[20];  /* array to hold stack contents */
      int tos;        /* top of the stack pointer */
} STACK;


/* function prototypes */
void initStack(STACK *stack);
void get_infix(char infix[]);
void convertToPostfix(char infix[], char postfix[]);
int isOperator(char c);
int precedence(char operator1, char operator2);
int pred_level(char ch);
void push(STACK *stack, char value);
char pop(STACK *stack);
char stackTop(STACK *stack);
int isEmpty(STACK *stack);
int isFull(STACK *stack);
void printResult(char infix[], char postfix[]);
void print_msg(void);

/* program entry point */
int main(void)
{
      char infix[20], postfix[20]="";

      /* convert from infix to postfix main function */
      convertToPostfix(infix, postfix);
      /* display the postfix equivalent */
      infix[strlen(infix)-2] = '\0';
      printResult(infix, postfix);

      return EXIT_SUCCESS;
}

/* initalise the stack */
void initStack(STACK *stack)
{
      stack->tos = -1;  /* stack is initially empty */
}

/* get infix expression from user */
void get_infix(char infix[])
{
      int i;

      printf("Enter infix expression below (max 18 characters excluding spaces) : \n");
      fflush(stdin);
      /* to read in only 18 characters excluding spaces */
      for ( i=0; i<18; )
      {
            if ( (infix[i] = getchar()) == '\n' )
            {
                  i++;
                  break;
            }
            else if ( !(isspace(infix[i])) )
                  i++;
      }

      infix[i] = '\0';
}

/* convert the infix expression to postfix notation */
void convertToPostfix(char infix[], char postfix[])
{
      int i, length;
      int j=0;
      char tos_ch;
      STACK stack;

      initStack(&stack); /* initialise stack */
      get_infix(infix);  /* get infix expression from user */
      length = strlen(infix);

      /* if strlen if infix is more than zero */
      if ( length )
      {      
            push(&stack, '(');
            strcat(infix, ")");
            length++;
            
            for ( i=0; i<length; i++ )
            {
                  /* if current operator in infix is digit */
                  if ( isdigit(infix[i]) )
                  {
                        postfix[j++] = infix[i];
                  }
                  /* if current operator in infix is left parenthesis */
                  else if ( infix[i] == '(' )
                  {
                        push(&stack, '(');
                  }
                  /* if current operator in infix is operator */
                  else if ( isOperator(infix[i]) )
                  {
                        while ( TRUE )
                        {
                              /* get tos */
                              tos_ch = stackTop(&stack);

                              /* no stack left */
                              if ( tos_ch == '\0' )
                              {
                                    printf("\nInvalid infix expression\n");
                                    print_msg();
                                    exit(1);
                              }
                              else
                              {
                                    if ( isOperator(tos_ch) )
                                    {
                                          if ( pred_level(tos_ch) >= pred_level(infix[i]) )
                                                postfix[j++] = pop(&stack);
                                          else
                                                break;
                                    }
                                    else
                                          break;
                              }
                        }
                        push(&stack, infix[i]);
                  }
                  /* if current operator in infix is right parenthesis */
                  else if ( infix[i] == ')' )
                  {
                        while ( TRUE )
                        {
                              /* get tos */
                              tos_ch = stackTop(&stack);

                              /* no stack left */
                              if ( tos_ch == '\0' )
                              {
                                    printf("\nInvalid infix expression\n");
                                    print_msg();
                                    exit(1);
                              }
                              else
                              {
                                    if ( tos_ch != '(' )
                                    {
                                          postfix[j++] = tos_ch;
                                          pop(&stack);
                                    }
                                    else
                                    {
                                          pop(&stack);
                                          break;
                                    }
                              }
                        }
                        continue;
                  }
            }
      }

      postfix[j] = '\0';
}

/* determine if c is an operator */
int isOperator(char c)
{
      if ( c == '+' || c == '-' || c == '*' ||
             c == '/' || c == '%' || c == '^' )
      {
            return TRUE;
      }
      else
            return FALSE;
}

/* determine precedence level */
int pred_level(char ch)
{
      if ( ch == '+' || ch == '-' )
            return 1;
      else if ( ch == '^' )
            return 3;
      else
            return 2;
}

/* determine if the precedence of operator1 is less than, 
   equal to, greater than the precedence of operator2 */
int precedence(char operator1, char operator2)
{
      if ( pred_level(operator1) > pred_level(operator2) )
            return 1;
      else if ( pred_level(operator1) < pred_level(operator2) )
            return -1;
      else
            return 0;
}

/* push a value on the stack */
void push(STACK *stack, char value)
{
      if ( !(isFull(stack)) )
      {
            (stack->tos)++;
            stack->data[stack->tos] = value;
      }
}

/* pop a value off the stack */
char pop(STACK *stack)
{
      char ch;

      if ( !(isEmpty(stack)) )
      {
            ch = stack->data[stack->tos];
            (stack->tos)--;
            return ch;
      }
      else
            return '\0';
}

/* return the top value of the stack without popping the stack */
char stackTop(STACK *stack)
{
      if ( !(isEmpty(stack)) )
            return stack->data[stack->tos];
      else
            return '\0';
}

/* determine if stack is empty */
int isEmpty(STACK *stack)
{
      /* empty */
      if ( stack->tos == -1 )
            return TRUE;
      /* not empty */
      else
            return FALSE;
}

/* determine if stack is full */
int isFull(STACK *stack)
{
      /* full */
      if ( stack->tos == 19 )
            return TRUE;
      /* not full */
      else
            return FALSE;
}

/* display the result postfix expression */
void printResult(char infix[], char postfix[])
{
      /*system("cls");*/
      printf("\n\n");
      printf("Infix notation  : %s\n", infix);
      printf("Postfix notation: %s\n\n", postfix);
      print_msg();
}

/* print exit message */
void print_msg(void)
{
      printf("Hit <RETURN> to exit......");
      fflush(stdin);
      getchar();
}
