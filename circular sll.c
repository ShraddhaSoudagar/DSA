# include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct student
{
    char name[20];
    int no;
    struct student *next;
}node;

node *create_node()
{
node *t;
t=(node *)malloc(sizeof(node));
if(t==NULL)
printf("INSUFFICIENT MEMORY\n");
t->next=t;
return;
}

void read(node *t)
{
    printf("ENTER DETAILS\n");
    scanf("%s %d",t->name,&t->no);
    return;
}

node *insert_front(node *head,node *t)
{   node *cur=head;
if(head==NULL)
head=t;
else
{
    while(cur->next!=head)
        cur=cur->next;
        cur->next=t;
        t->next=head;
        head=t;

}
return head;
}

/*void display(node *head)
{
node *cur=head;
while(cur->next!=head)
{
printf("%s %d\n",cur->name,cur->no);
cur=cur->next;
}
printf("%s %d\n",cur->name,cur->no);
return;
}*/
void display(node *head)
{
 node *cur=head;
 if(head==NULL)
        printf("empty list\n");
 else
 {
     do
     {
         printf("%s %d\n",cur->name,cur->no);
         cur=cur->next;
     }while(cur!=head);
 }
 return;
}

node *insert_end(node *head,node *t)
{
    node *cur=head;
    if(head==NULL)
        head=t;
    else
    {
        while(cur->next!=head)
            cur=cur->next;
        cur->next=t;
        t->next=head;
    }
 return head;
 }

int count(node *head)
{
    node *cur=head;int c=0;
    if(head==NULL)
        return 0;
    else {
    while(cur->next!=head)
    {
        c++;
        cur=cur->next;
    }
    c++;
    }
    return c;
}

node *insert_specific(node *head,node *t,int c,int pos)
{
    node *cur=head;
    if(head=NULL)
        head=t;
    else if(head->next=head){
     if(pos==1)
    head=insert_front(head,t);
    else
        head=insert_end(head,t);
    }
    else if(pos==c+1)
    head=insert_end(head,t);
    else{
    for(int i=1;i<pos-1;i++)
    cur=cur->next;
        t->next=cur->next;
        cur->next=t;
        }
return head;
}
node *delete_front(node *head)
{
    node *cur=head;
    if(head==NULL)
        printf("EMPTY LIST\n");
    else if(head->next==head)
    {
        free(head);
        head=NULL;
    }
    else
    {
        while(cur->next!=head)
            cur=cur->next;
        head=head->next;
        cur->next=head;
    }
    return head;
}

node *delete_end(node *head)
{
    node *cur=head,*prev=NULL;
    if(head==NULL)
        printf("EMPTY LIST\n");
    else if(head->next==head)
    {
        free(head);
        head=NULL;
    }
    else
    {
        while(cur->next!=head)
        {
            prev=cur;
            cur=cur->next;
        }
        prev->next=head;

        free(cur);
        cur=NULL;
    }
    return head;
}

node *delete_specific(node *head,int pos,int n)
{
    node *cur=head,*prev=NULL;
    if(head==NULL)
        printf("EMPTY LIST\n");
    else if(head->next==head)
    {
        free(head);
        head=NULL;
    }
    else
    {
        if(pos==1)
            head=delete_front(head);
        else if(pos==n)
            head=delete_end(head);
        else {
        for(int i=1;i<pos;i++)
        {
            prev=cur;
            cur=cur->next;
        }
        prev->next=cur->next;
        free(cur);
        cur=NULL;
        }
    }
    return head;
}

node *delete_wrt_name(node *head,char key_name[20])
{
    node *cur=head,*prev=NULL;
    if(head==NULL)
        printf("EMPTY LIST\n");
    else if(head->next==head)
    {
        if(strcmp(head->name,key_name)==0)
        {
            free(head);
            head=NULL;
            }
        else
            printf("Name not found\n");
    }
    else if(strcmp(head->name,key_name)==0)
    {
        node *temp=head;
        while(cur->next!=head)
            cur=cur->next;
        head=head->next;
        cur->next=head;
        free(temp);
       temp=NULL;
       return head;
    }
    else
    {
        while(cur->next!=head && strcmp(cur->name,key_name)!=0)
        {
            prev=cur;
            cur=cur->next;
        }
        //prev->next=cur->next;
        //free(cur);
        //cur=NULL;
        if(cur->next!=head)
        {
            prev->next=cur->next;
            free(cur);
            cur=NULL;
            }
            else{
                if(cur->next==head && strcmp(cur->name,key_name)!=0)
                printf("NAME NOT FOUND\n");
                else
                {
                  prev->next=cur->next;
                free(cur);
                cur=NULL;
                }
            }
        //if(cur->next==head && strcmp(cur->name,key_name)!=0){
       // printf("NAME NOT FOUND\n");
       // return head;}

    }
return head;
}

int main()
{
node *t=NULL;
node *head=NULL;
int n,pos,c;
char key_name[20];
printf("ENTER THE NUMBER OF STUDENTS\n");
scanf("%d",&n);
for (int i=1;i<=n;i++)
{
t=create_node();
read(t);
head=insert_end(head,t);
//head=insert_front(head,t);
}
c=count(head);
//printf("count%d\n",c);
//printf("before inserting\n");
//display(head);
//printf("ENTER THE POSITION AT WHICH THE NODE HAS TO BE INSERTED\n");
//scanf("%d",&pos);
//if(pos>0 && pos<=c+1){
//t=create_node();
//read(t);
//head=insert_specific(head,t,c,pos);
//head=delete_front(head);
//head=delete_end(head);
//
//display(head);
/*printf("ENTER THE POSITION AT WHICH THE NODE HAS TO BE DELETED\n");
scanf("%d",&pos);
if(pos>0 && pos<=n)
{
    head=delete_specific(head,pos,n);
    printf("after deleting\n");
display(head);
}

//}
else
   printf("INVALID INPUT\n");
   */
 printf("ENTER THE Name of the node TO BE DELETED\n");
scanf("%s",key_name);
head=delete_wrt_name(head,key_name);
  display(head);
return 0;
}
