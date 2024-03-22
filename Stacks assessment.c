#include<stdio.h>
#define len 20
typedef struct
{
    int size[len];
    int top;
}asteroid;

int isfull(asteroid *a)
{
    if(a->top==len-1)
        return 1;
return 0;
}

void push(asteroid *a,int element)
{
if(isfull(&a)==1)
{
    printf("STACK OVERFLOW\n");
    return;
}
a->top++;
a->size[a->top]=element;
return;
}

void display(asteroid *a)
{
for(int i=a->top;i>=0;i--)
printf("%d\n",a->size[i]);
return;
}

void collision(asteroid *a,int n)
{
int ptolem=0,neil=0,i;
for(i=0;i<n;i++)
{
    if(a->size[i]<0)
        ptolem++;
    else
        neil++;
}
printf("ASTEROID COLLIDE:%d\n",ptolem);
printf("ASTEROID COLLIDE:%d\n",neil);
return;
}

int main()
{
asteroid a;
a.top=-1;
int n,s,ptolem,neil;
scanf("%d",&n);
if(n>0)
{
    for(int i=0;i<n;i++)
    {
        scanf("%d",&s);
        push(&a,s);
    }
    printf("Asteroid in space are:\n");
    display(&a);
    collision(&a,n);
}
else
printf("No asteroids in the space\n");
return 0;
}
