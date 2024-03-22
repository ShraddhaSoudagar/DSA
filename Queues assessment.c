#include<stdio.h>
#include<ctype.h>
# define size 10
typedef struct
{
    char type[size];
    int front;
    int rear;
}queue;

int isfull(queue *q)
{
if(q->rear==size-1)
return 1;
return 0;
}

int isempty(queue *q)
{
if(q->rear==-1 && q->front==-1)
return 1;
return 0;
}

void enqueue(queue *q,char ch)
{

    if (!isfull(q))
        q->type[++q->rear] = ch;
    else
        printf("OVERFLOW\n");
}
char dequeue(queue *q)
{
    if(!isempty(q)) //details dh;
   return( q->type[++q->front]);
   printf("EMPTY\n");
   // return dh;
}
void display(queue *q)
{
    for(int i=q->front;i<=q->rear;i++)
        printf("\n %c\n",q->type);
}
void total_amt(queue *q)
{
float lmv=0,hmv=0;
int tw=0;
for(int i=q->front;i<=q->rear;i++)
{
    //char x=dequeue(&q);
    if(dequeue(q)=='L')
    lmv+=50;
    else if(dequeue(q)=='H')
    hmv+=100;
    else if(dequeue(q)=='T')
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
int n;char ch;
printf("ENTER NUMBER OF VEHICLES\n");
scanf("%d",&n);
for(int i=1;i<=n;i++)
{    ch= getchar();
    printf("ENTER THE TYPE OF THE VEHICLE\n");
    scanf("%c",&ch);
    enqueue(&q,ch);
}
display(&q);
total_amt(&q);
return 0;
}
