#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct student
{
    char name[20];
    char usn[20];
    struct student *next;
}node;

node *create_node()
{
    node *temp;
    temp=(node *)malloc(sizeof(node));
    if(temp==NULL)
    {
    printf("INSUFFICIENT MEMORY\n");
    return 0;
    }
    temp->next=NULL;
    return temp;
}

void *read(node *t)
{
printf("enter\n");
scanf("%s %s",t->name,t->usn);

}

node *insert_front(node *head,node *t1)
{
    t1->next=head;
    head=t1;
    return head;
}

void display(node *head)
{
    node *cur=head;
    while(cur!=NULL)
    {
        printf("\n%s %s",cur->name,cur->usn);
        cur=cur->next;
    }
}

int main()
{
    node *head;
node *t,*t1;
t=create_node();
read(t);
head=t;
t1=create_node();
read(t1);
head=insert_front(head,t1);
display(head);
return 0;
}
