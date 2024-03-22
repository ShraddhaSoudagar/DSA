# include<stdio.h>
# include<ctype.h>
#define size 20
typedef struct stack
{
char stack[size];
int top;
}stack;


void push(stack *s,char c)
{
if(isfull(&s)==1)
printf("STACK OVERFLOW\n");
else
{
s->top++;
s->stack[s->top]=c;
}
return;
}

char pop(stack *s)
{
if(isempty(&s)==1)
{
printf("STACK UNDERFLOW\n");
return -1;
}
char x=s->stack[s->top];
s->top--;
return x;
}

void display(stack *s)
{
for(char i=s->top;i>=0;i--)
{
printf("%c\n",s->stack[i]);

}
return;
}
int isfull(stack *s)
{
    if(s->top==size-1)
        return 1;
return 0;
}

int isempty(stack *s)
{
    if(s->top==-1)
    return 1;
return 0;
}

char peek(stack *s)
{
    return(s->stack[s->top]);
}

int pred(char ch)
{
    switch(ch)
    {
        case '+':
        case '-':return 1;
        case '*':
        case '/':return 2;
        case '^':return 3;
    }
    return -1;
}

void infix_postfix(stack s,char infix[20])
{
    char postfix[size];
    int i=0,j=0;
    char c,x;
    while(infix[i]!='\0')
    {
       if(infix[i] >='A' && infix[i]<='Z' || infix[i] >='a' && infix[i]<='z' || infix[i] >='0' && infix[i]<='9' )
        postfix[j++]=infix[i];
        else if(infix[i]=='(')
            push(&s,infix[i]);
        else if(infix[i]==')')
        {
            while(!isempty(&s) && peek(&s)!='(')
            {
                c=pop(&s);
                postfix[j++]=c;
            }
                x=pop(&s);
        }
        else
        {
            while(!isempty(&s)&& pred(infix[i])<=pred(peek(&s)) )
                    postfix[j++]=pop(&s);
                push(&s,infix[i]);

        }
        i++;
}//end of while
while(isempty(&s)!=1)
       postfix[j++]= pop(&s);
    postfix[j]='\0';
printf("\nPOSTFIX EXPRESSION IS  %s\n",postfix);
return;
}

/*void infix_postfix(stack s,char infix[20])
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
            while(!isempty(&s) && peek(&s)!='(')
            {
                c = pop(&s);
                postfix[j++]=c;
            }
                x = pop(&s);
        }
        else
            {
                  while(!isempty(&s)&& (pred(peek(&s)) >= pred(infix[i])))
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

    }*/



int main()
{
stack s;
s.top=-1;
char infix[20],postfix[20];
printf("ENTER THE INFIX EXPRESSION\n");
scanf("%s",infix);
infix_postfix(s,infix);
return 0;
}
