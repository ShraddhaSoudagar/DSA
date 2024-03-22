# include<stdio.h>
# include<string.h>
# include<stdlib.h>
typedef struct player
{
    char name[20];
    char team[20];
    int runs;
    int rank;
    struct player *next;
}node;

void display(node *p1)
{
    node *cur;
    cur=p1;
    while(cur!=NULL)
    {
      printf("\n%s %s %d %d\n",cur->name,cur->team,cur->runs,cur->rank);
        cur=cur->next;
    }
    return;
}

int main()
{
node *p1,*p2;
p1=(node*)malloc(sizeof(node));
p1->next=NULL;
p2=(node *)malloc(sizeof(node));
p2->next=NULL;
scanf("%s %s %d %d",p1->name,p1->team,&p1->runs,&p1->rank);
scanf("%s %s %d %d",p2->name,p2->team,&p2->runs,&p2->rank);
p1->next=p2;
p2->next=NULL;
display(p1);
//printf("%s %s %d %d\n\n",p2->name,p2->team,p2->runs,p2->rank);
return 0;
}
