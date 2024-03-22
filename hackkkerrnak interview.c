#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
typedef struct student
{
    char name[20];
    char clg[20];
    char ap[10];
    int wtm;
    int ttm;
    struct student *next;
}node;
node *create_node()
{
    node *t;
    t=(node*)malloc(sizeof(node));
    if(t==NULL)
        printf("INSUFFICIENT MEMORY\n");
    t->next=NULL;
    return t;
}
void read(node *t)
{
    scanf("%s %s %s %d %d",t->name,t->clg,t->ap,&t->wtm,&t->ttm);
    return;
}
node *insert_end(node *head,node *t)
{
    if(head==NULL)
        head=t;
    else
    {
        node *cur=head;
        while(cur->next!=NULL)
            cur=cur->next;
        cur->next=t;
        t->next=NULL;
    }
    return head;
}
void display(node *head)
{
    node *cur=head;
    if(head==NULL)
        printf("EMPTY LIST\n");
    else
    {
        while(cur!=NULL)
        {
          printf("%s %s %s %d %d\n",cur->name,cur->clg,cur->ap,cur->wtm,cur->ttm);
            cur=cur->next;
        }
    }
    return;
}
node *deletelowest(node *head,int n)
{
    node *lowscore=head,*cur=head;
    int min=head->wtm;
    if(head==NULL)
        printf("EMPTY LIST\n");
    else {
    for(int i=1;i<=n;i++)
    {
        if(cur->wtm<min)
        {   min=cur->wtm;
            lowscore=cur;
        }
        cur=cur->next;
    }
    if(lowscore==head)
        head=head->next;
    else
    {
        node *cur=head;
        while(cur->next!=lowscore)
            cur=cur->next;
       cur->next=lowscore->next;
     }
     free(lowscore);
    }
   return head;
}
node *deletename(node *head,char key_name[20])
{
    node *cur=head,*prev=NULL;
    if(head==NULL)
      printf("EMPTY LIST\n");
    else if(head->next==NULL)
    {
        if(strcmp(head->name,key_name)==0)
            {free(head);
            head=NULL;
        }
        else
            printf("NAME NOT FOUND\n");
     }
    else if(strcmp(head->name,key_name)==0)
    {
        head=head->next;
        free(cur);
        cur=NULL;
    }
    else
    {
        while(cur!=NULL && strcmp(cur->name,key_name)!=0)
        {
            prev=cur;
            cur=cur->next;
        }
        if(cur!=NULL)
        {
            prev->next=cur->next;
            free(cur);
            cur=NULL;
        }
        else
            printf("NAME NOT FOUND\n");
}
 return head;
}
void highsalary(node *head,int n)
{
    node *cur=head,*max=NULL;
    max->ttm=0;
    if(head==NULL)
        printf("empty list\n");
    else{
    for(int i=1;i<=n;i++)
    {
        if(cur->ttm>max->ttm)
        {  max->ttm=cur->ttm;
         max=cur;
        }
        cur=cur->next;
    }
    printf("%s %s %s %d %d\n",max->name,max->clg,max->ap,max->wtm,max->ttm);    }
    return;
}
int main() {
node *t=NULL,*head=NULL;
char key_name[20];
    int n;
    scanf("%d",&n);
    if(n>=5)
    {
        for(int i=1;i<=n;i++)
        {
            t=create_node();
            read(t);
            head=insert_end(head,t);
        }
        scanf("%s",key_name);
        head=deletelowest(head,n);
        head=deletename(head,key_name);
        printf("Final list is:");
        display(head);
        printf("\n");
        printf("Selected candidate is:\n");
        highsalary(head,n);
    }
    else
        printf("Invalid input\n");
return 0;
}
