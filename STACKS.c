# include<stdio.h>
# define size 5
struct stack
{
int data[size];
int top;
};
void push(struct stack *s,int element)
{
if(isfull(s))
printf("STACK OVERFLOW\n");
else
{
s->top++;
s->data[s->top]=element;
}
return;
}
int pop(struct stack *s)
{
if(isempty(s))
{
printf("STACK UNDERFLOW\n");
return -1;
}
int x=s->data[s->top];
s->top--;
return x;
}

void display(struct stack *s)
{
for(int i=s->top;i>=0;i--)
{
printf("%d\n",s->data[i]);

}
return;
}

int isfull(struct stack s)
{
    if(s.top==size-1)
        return 1;
return 0;
}

int isempty(struct stack s)
{
    if(s.top==-1)
    return 1;
return 0;
}

int main()
{
struct stack s;
s.top=-1;
int x;
push(&s,10);
push(&s,20);
push(&s,30);
push(&s,40);
push(&s,50);
display(&s);
x=pop(&s);
printf("THE ELEMENT POPPED OUT IS %d\n",x);
display(&s);
return 0;
}
