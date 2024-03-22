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
                while(cur->next!=NULL){
                cur=cur->next;}
                cur->next=p1;
        }
return head;
}

int count(node *head)
{
    node *cur=head;int c=0;
    while(cur!=NULL)
    {
        c++;
        cur=cur->next;
    }
    printf("%d",c);
    return c;
}


int main()
{
int opt,c;
node *p,*head;
//head=p;
printf("1.Insert front\n2.Display\n3.INSERT END\n4.COUNT\n5.Exit\n");

while(1)
{
    printf("Enter option\n");
    scanf("%d",&opt);
    switch(opt)
    {
        case 1:p=create_node();
                read(p);

            //p1=create_node();
                //read(p1);
                head=insert_front(head,p);
                break;
        case 2:display(head);
                break;
        case 3:p=create_node();
                read(p);
                head=insert_end(head,p);
                break;
        case 4:c=count(head);
                 printf("count=%d",c);
                 break;
        case 5:exit(0);

    }
}
return 0;
}
