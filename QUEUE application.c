#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 20

struct request
{    long int phno;
    float amt;
    char str[10];
};

struct queue
{
    struct request R[SIZE];
    int front;
    int rear;
};

int isfull(struct queue *q)
{
    if (q->rear == SIZE - 1)
        return 1;
    return 0;
}

int isempty(struct queue *q)
{
    if (q->rear < q->front)
        return 1;
    return 0;
}

void enque(struct queue *q, struct request req)
{
    if (!isfull(q))
        q->R[++q->rear] = req;
    else
        printf("OVERFLOW\n");
}

void display(struct queue *q)
{
    for (int i = q->front; i <= q->rear; i++)
    {
        printf("%ld %f %s\n", q->R[i].phno, q->R[i].amt, q->R[i].str);
    }
}

struct request dequeue(struct queue *q)
{
    struct request r;
    r = q->R[q->front++];
    return r;
}

int main()
{
    struct queue q;
    struct request req;
    q.front = 0;
    q.rear = -1;
    int n;
    float postpaid = 0, prepaid = 0;

    printf("Enter the number of requests: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("Enter the request: ");
        scanf("%ld %f %s", &req.phno, &req.amt, req.str);
        enque(&q, req);
    }
        display(&q);

    for (int i = 1; i <= n; i++)
    {
        req = dequeue(&q);
        if (strcmp(req.str, "postpaid") == 0)
            postpaid += req.amt;
        else
            prepaid += req.amt;
    }

    printf("Total postpaid amount: %f\n", postpaid);
    printf("Total prepaid amount: %f\n", prepaid);

}
