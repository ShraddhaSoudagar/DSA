#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct music
{
    char name[20];
    char singer[20];
    struct music *prev;
    struct music *next;
}node;
node *create_node()
{
    node *t;
    t=(node *)malloc(sizeof(node));
    if(t==NULL)
    printf("INSUFFICIENT MEMORY\n");
    t->prev=t;
    t->next=t;
return t;
}

void read(node *t)
{
printf("ENTER THE DETAILS\n");
scanf("%s %s",t->name,t->singer);
return;
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
          printf("%s  %s \n",cur->name,cur->singer);
        cur=cur->next;
    }while(cur!=head);

}
return;
}

node *insert_front(node *head,node *t)
{
if(head==NULL)
head=t;
else
{
head->prev->next=t;
t->prev=head->prev;
t->next=head;
head->prev=t;
head=t;
}
return head;
}

node *insert_end(node *head,node *t)
{
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

node *insert_specific(node *head,node *t,int n,int pos)
{
    if(head==NULL)
        printf("Empty list\n");
    else if(head->next==head || pos==1)
    {
        if(pos==1)
           {
            head=insert_front(head,t);
        return head;
           }
        else if(pos==2){
            head=insert_end(head,t);
            return head;
        }
    }
    else if(pos==n+1)
    {
        head=insert_end(head,t);
        return head;
    }
    else
    {
        node *cur=head;
        for(int i=1;i<pos-1;i++)
            cur=cur->next;
        t->next=cur->next;
        cur->next->prev=t;
        cur->next=t;
        t->prev=cur;
        return head;
    }
}

node *insert_name(node *head,node *t,char key_song[20])
{
    if(head==NULL)
        printf("EMPTY LIST\n");
    else if(head->next==head)
    {
        if(strcmp(head->name,key_song)==0)
        {
            head->next=t;
            t->prev=head;
            t->next=head;
            head->prev=t;
            return head;
        }
        else
            printf("Song not found\n");
    }
    else
    {
        node *cur=head;
        while(cur->next!=head && strcmp(cur->name,key_song)!=0)
            cur=cur->next;
        if(cur->next!=head)
        {
            t->next=cur->next;
            cur->next->prev=t;
            cur->next=t;
            t->prev=cur;
            return head;
        }
        else
            {
                if(strcmp(cur->name,key_song)==0)
                {
                    cur->next=t;
                    t->prev=cur;
                    t->next=head;
                    head->prev=t;
                    return head;
                }
                else
                    printf("SONG NOT FOUND\n");

            }
              }
return head;
}

node *insert_specific_reverse(node *head,node *t,int n,int pos)
{
    if(head==NULL)
        printf("Empty list\n");
    else if(head->next==head || pos==1)
    {
        if(pos==1)
           {
            head=insert_end(head,t);
        return head;
           }
        else if(pos==2){
            head=insert_front(head,t);
            return head;
        }
    }
    else if(pos==n+1)
    {
        head=insert_front(head,t);
        return head;
    }
    else
    {
        node *cur=head->prev;
        for(int i=1;i<pos-1;i++)
            cur=cur->prev;
        t->prev=cur->prev;
        t->next=cur;
        cur->prev->next=t;
        cur->prev=t;
        return head;
    }
}



void search_and_play(node *head,char key_song[20])
{
    if(head==NULL)
        printf("NO SONGS TO PLAY\n");
    else
    {
        node *cur=head;
        do
        {
            cur=cur->next;
        }while(cur!=head && strcmp(cur->name,key_song)!=0);

        if(cur->next!=head)
         printf("%s  %s \n",cur->name,cur->singer);
        else
        {
            if(strcmp(cur->name,key_song)==0)
            printf("%s  %s \n",cur->name,cur->singer);
            else
                 printf("SONG NOT FOUND\n");
        }
       }
}

void previous_next(node *head,char key_song[20])
{
    if(head==NULL)
        printf("NO SONGS TO PLAY\n");
    else if(head->next==head)
        printf("No previous and next song to play next songs to play\n");
    else if(strcmp(head->name,key_song)==0)
      {
        printf("NEXT SONG IS %s\n",head->next->name);
        printf("PREVIOUS SONG IS %s\n ",head->prev->name);
      }
      else
      {
          node *cur=head->next;
          while(cur->next!=head && strcmp(cur->name,key_song)!=0)
            cur=cur->next;
          if(cur->next!=head)
          {
              printf("The next song is %s\n",cur->next->name);
              printf("The previous song is %s\n",cur->prev->name);
         }
         else
            if(strcmp(cur->name,key_song)==0)
         {
             printf("The previos song is %s\n",cur->prev->name);
             printf("The next song is %s\n",cur->next->name);
         }
            else
                printf("Song not found\n");
          }
}



int main()
{
node *t=NULL;
node *head=NULL;
int pos,n;
char key_song[20];
printf("ENTER NO OF SONGS\n");
scanf("%d",&n);
if(n>0)
{
for(int i=1;i<=n;i++)
{
t=create_node();
read(t);
//head=insert_front(head,t);
head=insert_end(head,t);
}
display(head);

printf("ENTER THE POSITION AT WHICH NODE HAS TO BE INSERTED\n");
scanf("%d",&pos);
if(pos>0 && pos<=n+1)
{
    t=create_node();
    read(t);
//head=insert_specific(head,t,n,pos);
head=insert_specific_reverse(head,t,n,pos);
}
else
    printf("INVALID INPUT\n");
display(head);
/*printf("ENTER THE NAME AFTER WHICH NODE HAS TO BE INSERTED\n");
scanf("%s",key_song);
t=create_node();
read(t);
head=insert_name(head,t,key_song);
//display(head);
printf("ENTER THE NAME OF THE SONG TO BE SEARCHED\n");
scanf("%s",key_song);
search_and_play(head,key_song);
printf("ENTER THE NAME OF THE SONG WHOSE PREVIOUS AND NEXT SONG IS TO BE PLAYED\n");
scanf("%s",key_song);
previous_next(head,key_song);*/

}
else
   printf("INVALID INPUT\n");
return 0;
}
