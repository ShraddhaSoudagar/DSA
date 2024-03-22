#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct planet
{
    char name[20];
    int place;
    struct planet *next;
}node;

node *create_node()
{
    node *temp;
    temp=(node*)malloc(sizeof(node));
    if(temp==NULL)
    {
    printf("INSUFFICIENT MEMORY\n");
    return 0;
    }
    temp->next=NULL;
return temp;
}

void *read(node *p)
{
    printf("ENTER PLANET DETAILS\n");
    scanf("%s %d",p->name,&p->place);
}

void display(node *head)
{
    node *cur=head;
    while(cur!=NULL)
    {
     printf("%s %d\n",cur->name,cur->place);
      cur=cur->next;
    }
}

node *insert_front(node *head,node *p1)
{
        if(head==NULL)
        {
            head=p1;
        }
        else {
            p1->next=head;
            head=p1;
        }
return head;
}

node *insert_end(node *head,node *p1)
{
        if(head==NULL)
        {
            head=p1;
        }
        else {
                node *cur=head;
                while(cur->next!=NULL)
                {
                cur=cur->next;
                }
                cur->next=p1;
        }
return head;
}

int main()
{
int opt;
node *p,*head;
//head=p;
//printf("1.Insert front\n2.Display\n3.INSERT END\n4.Exit\n");
for(int i=0;i<9;i++)
{
    p=create_node();
    read(p);
    head=insert_end(head,p);
}
    display(head);

}
