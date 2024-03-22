#include<stdio.h>
# define size 5

typedef struct
{
    char ch[size];
    int front,rear;
}queue;

int isfull(queue *q)
{
    if(q->rear == size - 1)
        return 1;
    return 0;
}

int isempty(queue *q)
{
    if(q->front==-1 && q->rear==-1)
        return 1;
    return 0;
}

void enqueue(queue *q,char x)
{
    if(isfull(q)==1)
 {
    printf("QUEUE IS FULL\n");
    return;
 }
 else if(isempty(q))
  {
    q->front=q->rear=0;
    q->ch[q->rear]=x;
   }
   else
    q->ch[++(q->rear)]=x;
}

char dequeue(queue *q)
{
    char x;
    if(isempty(q))
       {
        printf("QUEUE IS EMPTY\n");
        return '\0';
       }
   // else if(q->front==q->rear)
       // {
          //  x=q->ch[q->front];
          //  q->front=q->rear=-1;
          //  return x;
       // }
    else
        return(q->ch[(q->front)++]);
}

void display(queue *q)
{
    for(int i=q->front;i<=q->rear;i++)
        printf("%c\n",q->ch[i]);
}

void total_amt(queue *q,int n)
{
float lmv=0,hmv=0;
int tw=0;
for(int i=0;i<n;i++)
{
    char x=dequeue(q);
    printf("\n%c\n\n",x);
    if(x=='L')
    lmv+=50;
    else if(x=='H')
    hmv+=100;
    else if(x=='T')
    tw++;
}
printf("TOTAL AMOUNT COLLECTED FROM LMV=%0.2f\n",lmv);
printf("TOTAL AMOUNT COLLECTED FROM HMV=%0.2f\n",hmv);
printf("NUMBER OF TWO WHEELERS=%d\n",tw);
return;
}

int main()
{
    queue q;
    q.front=-1;
    q.rear=-1;
    int n;char ch,c;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        ch=getchar();
        printf("ENTER\n");
        scanf("%c",&ch);
        enqueue(&q,ch);
    }
    display(&q);
    total_amt(&q,n);
    return 0;
}
