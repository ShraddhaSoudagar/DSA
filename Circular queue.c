# include<stdio.h>
# define size 5
typedef struct
{
int data[size];
int front;
int rear;
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

void enqueue(queue *q,int x)
{
    if(isfull(q)){
        printf("OVERFLLOW\n");
        return;
    }
    else if(isempty(q)){
        q->front=q->rear=0;
        q->data[q->rear]=x;
    }
    else{
        q->rear=(q->rear+1)%size;
        q->data[q->rear]=x;
    }
}

int dequeue(queue *q)
{
    int x;
    if(isempty(q)){
        printf("UNDERFLOW\n");
        return 0;}
    else if(q->front==q->rear){
      x=q->data[q->front];
      q->front=q->rear=-1;
      return x; }
    else{
        x=q->data[q->front];
        q->front=(q->front+1)%size;
        return x;}
}

void display(queue *q)
{
    if(isempty(q)){
        printf("QUEUE EMPTY\n");
        return;}
    else {
        int i=q->front;
        while(i!=q->rear)
        {
            printf("%d\n",q->data[i]);
            i=(i+1)%size;
        }
       printf("%d\n",q->data[q->rear]);}
}

int peek(queue *q)
{
    return(q->data[q->front]);
}

/*int isfull(queue *q)
{
if(q->front==(q->rear+1)|| q->front==0 && q->rear==size-1)
return 1;
return 0;
}

int isempty(queue *q)
{
if(q->front==-1)
return 1;
return 0;
}

void enqueue(queue *q,int elt)
{
if(isfull(&q))
{
printf("Queue full\n");
return;
}
if(q->front==-1)
q->front=0;
q->rear=(q->rear+1)%size;
q->data[q->rear]=elt;
}

int dequeue(queue *q)
{
   if(isempty(&q))
    {
       printf("Queue is emty\n");
       return;
    }
      int x;
        x=q->data[q->front];
        if(q->front==q->rear)
            q->front=q->rear=-1;
        else
        {
            q->front=(q->front+1)%size;
        return x;
}
}
void display(queue *q)
{int i;
for( i=q->front;i!=q->rear;i=(i+1)%size)
printf("%d\n",q->data[i]);
printf("%d\n",q->data[i]);

}*/

int main()
{
queue q;
int x,d;
q.front=-1;
q.rear=-1;
enqueue(&q,10);
enqueue(&q,20);
enqueue(&q,30);
enqueue(&q,40);
enqueue(&q,50);
printf("display\n");
display(&q);
dequeue(&q);
dequeue(&q);
dequeue(&q);
enqueue(&q,100);
enqueue(&q,200);
display(&q);
d=peek(&q);
printf("peek=%d\n",d);
return 0;
}
