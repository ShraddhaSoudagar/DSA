//UPSE PROBLEM USING CIRCULAR QUEUE
#include<stdio.h>
#define size 5
typedef struct
{
    char name[20];
    float amt;
    int chapters;
}book;

typedef struct
{
    book b[size];
    int front,rear;
}queue;

int isfull(queue *q)
{
    if((q->rear+1)%size==q->front)
        return 1;
return 0;
}

int isempty(queue *q)
{
 if(q->front==-1 &&q->rear==-1)
        return 1;
 return 0;
}

void enqueue(queue *q,book bh)
{
    if(isfull(q))
    {
        printf("OUEUE FULL\n");
        return;
    }
    else if(isempty(q))
    {
        q->front=q->rear=0;
        q->b[q->rear]=bh;
    }
    else
    {
        q->rear=(q->rear+1)%size;
        q->b[q->rear]=bh;
    }
}

book dequeue(queue *q)
{book bh;
    if(isempty(q))
    {
        printf("QUEUE EMPTY\n");
        return;
    }
    else if(q->front==q->rear)
    {
        bh=q->b[q->front];
        q->front=q->rear=-1;
        return bh;
    }
    else
    {
       bh=q->b[q->front];
       q->front=(q->front+1)%size;
       return bh;
    }
}

void display(queue *q,book b)
{
    if(isempty(q)){
        printf("QUEUE EMPTY\n");
        return;}
    else {
        int i=q->front;
        while(i!=q->rear)
        {
            printf("%s %0.2f %d\n",q->b[i].name,q->b[i].amt,q->b[i].chapters);
            i=(i+1)%size;
        }
       printf("%s %0.2f %d\n",q->b[q->rear].name,q->b[q->rear].amt,q->b[q->rear].chapters);}
}

float total_amt(queue q)
{
book bh;float total=0;
    for(int i=q.front;i<=q.rear;i++)
    {
      bh=dequeue(&q);
       total=total+bh.amt;
    }
return total;
}

void max_chapters(queue q)
{
    book bh;int i,j,max=0;
    for( i=q.front;i<=q.rear;i++)
    {
        bh=dequeue(&q);
        if(bh.chapters>max)
           max=bh.chapters;
    }
        printf("\nBOOK WITH MAXIMUM NUMBER OF CHAPTER IS  %d chapters\n",max);
}

int main()
{
queue q;
q.front=-1;
q.rear=-1;
book b,bh;int n;
float total;
printf("ENTER NUMBER OF BOOKS\n");
scanf("%d",&n);
for(int i=0;i<n;i++)
{
    printf("ENTER DETAILS OF THE BOOK\n");
    scanf("%s %f %d",bh.name,&bh.amt,&bh.chapters);
    enqueue(&q,bh);
}
printf("BOOKS ARE\n");
    display(&q,b);
    total=total_amt(q);
    printf("\nTOTAL AMOUNT=%0.2f",total);
    max_chapters(q);
return 0;
}
