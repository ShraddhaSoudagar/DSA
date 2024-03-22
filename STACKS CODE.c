#include<stdio.h>
#define SIZE 10
struct stack{

  char stack[20];
  int top;

};
void push(struct stack *s,char item)
{
	if(s->top >= SIZE-1)
	{
		printf("\nStack Overflow.");
	}
	else
	{
		s->top = s->top+1;
		s->stack[s->top] = item;
	}
}
/* define pop operation */
int isempty(struct stack *s)
{
    if(s->top == -1)
	   return 1;
    return 0;

}
char pop(struct stack *s)
{
	char item ;

		item = s->stack[s->top];
		s->top = s->top-1;
		return(item);
}

int precedence(char ch)
{
    switch(ch)
    {
        case '(' :return 0;
        case '+':
        case '-':return 1;

        case '*':
        case '/':
        case '%': return 2;

        case '^' :return 3;

    }

 return 4;
}
char stacktop(struct stack s)
{
    if(!isempty(&s))
        return s.stack[s.top];
}

void infix_postfix(struct stack s,char infix[20])
{
    char postfix[20], c,x;
    int i=0, j=0;

    while(infix[i]!='\0')
    {
        if(infix[i] >='A' && infix[i]<='Z')
            postfix[j++]=infix[i];
        else if(infix[i] == '(')
            push(&s,infix[i]);
        else if(infix[i] ==')')
        {
            while(!isempty(&s) && stacktop(s)!='(')
            {
                c = pop(&s);
                postfix[j++]=c;
            }
                x = pop(&s);
        }
        else
            {
                  while(!isempty(&s)&& (precedence(stacktop(s)) >= precedence(infix[i])))
                 {

                    c=pop(&s);
                    postfix[j++] = c;
                  }
                  push(&s,infix[i]);

            }
         i++;
    }

   while(!isempty(&s))
    postfix[j++] = pop(&s);

    postfix[j] = '\0';

   printf("%s", postfix);

    }


int main()
{   struct stack s;
    s.top = -1;
    char infix[20],postfix[20] ;
    printf("Enter the string\n");
    scanf("%s",infix);
    infix_postfix(s,infix);

}
