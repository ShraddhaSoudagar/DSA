#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct drdo
{
    char name[20];
    int gate_year;
    int gate_score;
    int age;
    char degree[20];
    struct drdo *next;
    struct drdo *prev;

}node;

node*create_node()
{
    node* t;
    t=(node*)malloc(sizeof(node));
    if(t==NULL)
    printf("INSUFFICIENT MEMORY\n");

   t->next=t;
   t->prev=t;
    return t;
}

void read(node*t)
{

printf("ENTER DETAILS\n");
scanf("%s%d%d%d%s",t->name,&t->gate_year,&t->gate_score,&t->age,t->degree);
}

node *insert_end(node*head,node *t)
{
    node*cur=head;
    if(head==NULL)
    head=t;
    else
    {
        t->next=head;
        t->prev=head->prev;
        head->prev=t;
        t->prev->next=t;
    }
return head;
}

int first_round(node *t)
{
    if(strcmp(t->degree,"be")==0 || strcmp(t->degree,"btech")==0)
    {
        if(t->gate_score>=80)
        {
            if(t->gate_year==2021 || t->gate_year==2022)
            {
                if(t->age<=28)
                {
                   return 1;
                }
            }
        }
    }
  return 0;
}

void display(node *head)
{
if(head==NULL)
printf("empty list\n");
else
{
    node *cur=head;
    do
    {
        printf("%s %d %d %d %s\n",cur->name,cur->gate_year,cur->gate_score,cur->age,cur->degree);
        cur=cur->next;
    }  while(cur!=head);
}
return;
}


int second_round(node *t)
{

    if(t->gate_score>94)
        return 1;
    return 0;
}



void final(node *head,int x)
{
node *cur=head;
for(int i=1;i<=(2*x);i++)
{
printf("%s %d %d %d %s\n",cur->name,cur->gate_year,cur->gate_score,cur->age,cur->degree);
cur=cur->next;
}
}

int main()
{
node *t=NULL;
node *head=NULL;
int n,x;
printf("Enter number of applications\n");
scanf("%d",&n);
for(int i=1;i<=n;i++)
{
    t=create_node();
    read(t);
    head=insert_end(head,t);
}
printf("APPLICANTS\n");
display(head);
node *cur=head;
while(cur->next!=head)
{
    //cur=head;
    if(first_round(cur)==0)
    {

        cur->next->prev=cur->prev;
                    cur->prev->next=cur->next;
                   // head=head->next;
                    free(cur);
    }
    else if(first_round(cur)==1)
    {
        if(second_round(cur)==0)
        {
            cur->next->prev=cur->prev;
                    cur->prev->next=cur->next;
                    //cur=cur->next;
                    free(cur);
        }
    }
    else
        cur=cur->next;
}
printf("APPLICATIONS SELECTED ARE\n");
display(head);
return 0;
}
