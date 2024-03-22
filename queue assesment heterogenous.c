#include<stdio.h>
# define size 5
typedef struct
{
    char name[20];
    char num[10];
    char type;
}details;

typedef struct
{
    details d[size];
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
void enqueue(queue *q,details dh)
{

    if (!isfull(q))
        q->d[++q->rear] = dh;
    else
        printf("OVERFLOW\n");
}
details dequeue(queue *q)
{
    if(!isempty(q)) //details dh;
        //printf("%d\n",q->front);
   return( q->d[++q->front]);
   printf("EMPTY\n");
   // return dh;
}

void display(queue *q)
{
    for(int i=q->front;i<=q->rear;i++)
        printf("%s %s %c\n",q->d[i].name,q->d[i].num,q->d[i].type);
}

void peek(queue q)
{
    q.front++;
    printf("peek is %s %s %c\n",q.d[q.front].name,q.d[q.front].num,q.d[q.front].type);
}

void total_amt(queue *q,int n)
{
float lmv=0,hmv=0;
int tw=0;
for(int i=q->front;i<=q->rear;i++)
{
    details dh=dequeue(q);
    if(dh.type=='L')
        lmv+=50;
    else if(dh.type=='H')
        hmv+=100;
    else if(dh.type=='T')
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
    details d,dh;
    q.front=-1;
    q.rear=-1;
    int n;char ch,c;
    printf("ENTER NUMBER OF VEHICLES\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        ch=getchar();
        printf("ENTER DETAILS\n");
        scanf("%s %s %c",dh.name,dh.num,&dh.type);
        enqueue(&q,dh);
    }
    display(&q);
    //dequeue(&q);
    //peek(q);
    total_amt(&q,n);
    return 0;
}
/*details dequeue(queue *q)
{
    if(isempty(q))
    {
        printf("QUEUE EMPTY\n");
        return;
    }
     else if(q->front==q->rear)
       {
            details x=q->d[q->front];
             //printf("%s %s %c",q->d[q->front].name,q->d[q->front].num,q->d[q->front].type);
            q->front=q->rear=-1;
           return x;
        }
   else
          //printf("%s %s %c",q->d[q->front].name,q->d[q->front].num,q->d[q->front].type);
    return(q->d[(q->front)++]);
}*/
/*void enqueue(queue *q,details dh)
{
    if(isfull(q))
    {
    printf("QUUE IS EMPTY\n");
    return;
    }
    else if(isempty(q))
    {
        q->front=q->rear=0;
        q->d[q->rear]=dh;
    }
    else
    q->d[++(q->rear)]=dh;
}*/
