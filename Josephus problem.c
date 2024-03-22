#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct people
{
    char name[20];
    int d;
    struct people *next;
}node;

node *create_node()
{
node *t;
t=(node *)malloc(sizeof(node));
if(t==NULL)
printf("INSUFFICIENT MEMORY\n");
t->next=t;
return t;
}

void read(node *t)
{
    printf("ENTER DETAILS\n");
    scanf("%s %d",t->name,&t->d);
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

 /*void display(node *head)
{
 node *cur=head;
 if(head==NULL)
        printf("empty list\n");
 else
 {
     do
     {
         printf("%s %d\n",cur->name,cur->d);
         cur=cur->next;
     }while(cur!=head);
 }
 return;
}
*/
 void delete_in_order(node *head,int n)
 {
 node *cur=head,*prev=NULL;
 int flag;
 node *start;
 for(int i=1;i<n;i++)
 {
    prev=cur;
    cur=cur->next;
 }
 flag=cur->d;
 start=cur->next;
 prev->next=cur->next;
 printf("%s %d\n",cur->name,cur->d);
 free(cur);
 cur=NULL;
 while(start->next!=start)
 {
    cur=start;
    for(int j=1;j<flag;j++)
    {
        prev=cur;
        cur=cur->next;
    }
    flag=cur->d;
    start=cur->next;
    prev->next=cur->next;
   printf("%s %d\n",cur->name,cur->d);
   free(cur);
}
printf("The last person in the circle is\n");
printf("%s %d\n",start->name,start->d);
return;
}

int main()
{
node *t=NULL;
node *head=NULL;
int n;//initial count
int num;//number of people
printf("Enter number of people in the circle\n");
scanf("%d",&num);
for(int i=1;i<=num;i++)
{
 t=create_node();
 read(t);
head=insert_end(head,t);
}
//display(head);
printf("Enter the initial count\n");
scanf("%d",&n);
printf("The order in which people are eliminated is\n");
delete_in_order(head,n);
return 0;
}

