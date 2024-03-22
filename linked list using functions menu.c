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

node *insert_front(node *head,node *t)
{
    if(head==NULL)
    {
        head=t;
    }
    else{
    t->next=head;
    head=t;
    }
    return head;
}

void display(node *head)
{
    if(head==NULL)
    {
        printf("EMPTY LIST\n");
    }
    else{
    node *cur=head;
    while(cur!=NULL)
    {
        printf("\n%s %s",cur->name,cur->usn);
        cur=cur->next;
    }
}
}

int main()
{
    node *head;
node *t,*t1;
int opt;
t=create_node();
                read(t);
                head=t;

printf("1.Insert front\n2.Display\n3.Exit\n");
while (1)
{
    printf("\n\nenter option\n");
    scanf("%d",&opt);

    switch(opt)
    {
        case 1: t1=create_node();
                read(t1);
                head=insert_front(head,t1);
        break;
        case 2:display(head);
        break;
        case 3:exit(0);
    }//end of switch

}//end of while
        return 0;
}
