# include<stdio.h>
# include<stdlib.h>
# include<string.h>
typedef struct music
{
    char name[20];
    char singer[20];
    int time;
    struct music *prev;
    struct music *next;
}node;
node *create_node()
{
    node *t;
    t=(node *)malloc(sizeof(node));
    if(t==NULL)
    printf("INSUFFICIENT MEMORY\n");
    t->prev=NULL;
    t->next=NULL;
return t;
}

void read(node *t)
{
printf("ENTER THE DETAILS\n");
scanf("%s %s %d",t->name,t->singer,&t->time);
return;
}

node *insert_front(node *head,node *t)
{
if(head==NULL)
head=t;
else
{
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
    node *cur=head;
    while(cur->next!=NULL)
        cur=cur->next;
    cur->next=t;
   t->prev=cur;
    t->next=NULL;
}
return head;
}



void display(node *head)
{
if(head==NULL)
printf("empty list\n");
else
{
    node *cur=head;
    while(cur!=NULL)
    {
    printf("%s  %s %d\n",cur->name,cur->singer,cur->time);
    cur=cur->next;
    }
}
return;
}
node *insert_name(node *head,node *t,char key_song[20])
{
    if(head==NULL)
        printf("EMPTY LIST\n");
    else if(head->next==NULL)
    {
        if(strcmp(head->name,key_song)==0)
        {
            head->next=t;
            t->prev=head;
            t->next=NULL;
            return head;
        }
        else
            printf("Song not found\n");
    }
    else
    {
        node *cur=head;
        while(cur->next!=NULL && strcmp(cur->name,key_song)!=0)
            cur=cur->next;
        if(cur->next!=NULL)
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
                    t->next=NULL;
                    return head;
                }
                else
                    printf("SONG NOT FOUND\n");

            }
              }
return head;
}

int count(node *head)
{
    int c=0;
    while(head!=NULL)
     {c++;
    head=head->next;
     }
    return c;
}

node *insert_specific(node *head,node *t,int c,int pos)
{
    if(head==NULL)
        printf("Empty list\n");
    else if(head->next==NULL || pos==1)
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
    else if(pos==c+1)
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

void search_and_play(node *head,char key_song[20])
{
    if(head==NULL)
        printf("NO SONGS TO PLAY\n");
    else
    {
        node *cur=head;
        while(cur!=NULL && strcmp(cur->name,key_song)!=0)
            cur=cur->next;
        if(cur!=NULL)
         printf("%s  %s \n",cur->name,cur->singer);
        else
        printf("SONG NOT FOUND\n");
    }
}

void previous_next(node *head,char key_song[20])
{
    if(head->next==NULL)
        printf("No previous and next song to play next songs to play\n");
    else if(strcmp(head->name,key_song)==0)
      {
        printf("NEXT SONG IS %s\n",head->next->name);
        printf("No previous song to play\n ");
      }
      else
      {
          node *cur=head->next;
          while(cur->next!=NULL && strcmp(cur->name,key_song)!=0)
            cur=cur->next;
          if(cur->next!=NULL)
          {
              printf("The next song is %s\n",cur->next->name);
              printf("The previous song is %s\n",cur->prev->name);
         }
         else
            if(strcmp(cur->name,key_song)==0)
         {
             printf("The previos node is %s\n",cur->prev->name);
             printf("No next song to play\n");
         }
            else
                printf("Song not found\n");
          }
}

node *delete_front(node *head)
{
    if(head==NULL)
        printf("EMPTY LIST\n");
    else if(head->next==NULL)
    {
        free(head);
        head=NULL;
    }
    else
    {
        node *cur=head;
        head=head->next;
        head->prev=NULL;
        free(cur);
        //cur=NULL;
    }
    return head;
}

node *delete_end(node *head)
{
    if(head==NULL)
        printf("EMPTY LIST\n");
    else if(head->next==NULL)
    {
        free(head);
        head=NULL;
    }
    else
    {
       node *cur=head;
       while(cur->next!=NULL)
           cur=cur->next;
       cur->prev->next=NULL;
       free(cur);
    }
    return head;
}

node *delete_specific(node *head,int pos,int c)
{
    if(head==NULL)
        printf("EMPTY LIST\n");
    else if(head->next==NULL && pos==1)
    {
        free(head);
        head=NULL;
    }
    else if(pos==1)
        head=delete_front(head);
    else if(pos==c)
        head=delete_end(head);
    else
    {
        node *cur=head;
        for(int i=1;i<pos;i++)
            cur=cur->next;
        cur->prev->next=cur->next;
        cur->next->prev=cur->prev;
        free(cur);
        cur=NULL;
    }
    return head;
}
node *delete_reverse(node *head,int pos,int c)
{
    if(pos==1)
        head=delete_end(head);
    else if(pos==c)
        head=delete_front(head);
    else
    {
        node *cur=head;
        while(cur->next!=NULL)
            cur=cur->next;
        for(int i=1;i<pos;i++)
            cur=cur->prev;
         cur->prev->next=cur->next;
        cur->next->prev=cur->prev;
        free(cur);
        cur=NULL;
    }
    return head;
}

node *search_delete(node *head,char key_song[20])
{
    node *cur=head;
    if(head==NULL)
    printf("EMPTY LIST\n");
    else if(head->next==NULL )
            {
                if( strcmp(head->name,key_song)==0){

                    free(head);
                    head=NULL;
                    return head;
                }
                else
                    printf("SONG NOT FOUND\n");
            }
        else if(strcmp(cur->name,key_song)==0)
        {
            head=head->next;
            head->prev=NULL;
            free(cur);
            return head;
        }
        else
        {
            while(cur->next!=NULL && strcmp(cur->name,key_song)!=0)
            {
                cur=cur->next;
            }
            if(cur->next!=NULL)
            {
                cur->prev->next=cur->next;
                cur->next->prev=cur->prev;
                free(cur);
            }
            else {
                if(strcmp(cur->name,key_song)==0)
                {
                    cur->prev->next=NULL;
                    free(cur);
                }
                else
                printf("song not found\n");
            return head;
            }
}
return head;
}

node *maximum_playtime(node *head)
{
    if(head==NULL)
        printf("NO SONGS\n");
    else
    {
        node *cur=head,*max_time=head;int max=head->time;
        while(cur!=NULL)
        {
            if(cur->time>max)
            {
                max=cur->time;
                max_time=cur;
            }
            cur=cur->next;
        }
            if(max_time==head){
                    head=head->next;
                    head->prev=NULL;
                }
            else
            {
                max_time->next->prev=max_time->prev;
                max_time->prev->next=max_time->next;
            }
            free(max_time);
            max_time=NULL;
            }
            return head;

}
/*node* maximum_playtime(node* head) {
    if (head == NULL) {
        printf("NO SONGS\n");
        return NULL;
    } else {
        node* cur = head;
        node* max_time = head;
        int max = head->time;

        while (cur != NULL) {
            if (cur->time > max) {
                max = cur->time;
                max_time = cur;
            }
            cur = cur->next;
        }

        if (max_time == head) {
            head = head->next;
                head->prev = NULL;
            free(max_time);
            max_time = NULL;
        } else {
            if (max_time->next != NULL) {
                max_time->next->prev = max_time->prev;
            }
            if (max_time->prev != NULL) {
                max_time->prev->next = max_time->next;
            }
            free(max_time);
            max_time = NULL;
        }
    }
    return head;
}*/

int main()
{
node *t=NULL,*head=NULL,*max=NULL;
char key_song[20];
int opt,pos,c;
printf("1.INSERT FRONT\n2.DISPLAY\n3.INSERT END\n4.COUNT NO OF SONGS\n5.INSERT A SONG AT SPECIFIC POSITION\n6.SEARCH FOR A SONG AND INSERT\n7.SEARCH AND PLAY\n8.PLAY PREVIOUS AND NEXT SONG\n9.DELETE FRONT\n10.DELETE END\n11.DELETE AT SPECIFIC POSITION \n12.DELETE AT SPECIFIC POSITION IN THE REVERSE DIRECTION\n13.SEARCH FOR A SONG AND DELETE\n14.MAXIMUM PLAYTIME\n15.EXIT\n");
while(1)
{
    printf("enter option\n");
    scanf("%d",&opt);
    switch(opt)
    {
      case 1: t=create_node();
        read(t);
        head=insert_front(head,t);
        break;
      case 2:display(head);
        break;
      case 3:t=create_node();
            read(t);
            head=insert_end(head,t);
        break;
       case 4:c=count(head);
              printf("COUNT=%d\n",c);
                break;
        case 5:printf("Enter the position at which the node has to be inserted\n");
                scanf("%d",&pos);
                if(pos>=1 && pos<=c+1)
                {
                    t=create_node();
                    read(t);
                    c=count(head);
                    head=insert_specific(head,t,c,pos);
                }
                else
                    printf("INVALID INPUT\n");
                break;
        case 6:if(head!=NULL){
            printf("Enter the name of the song after which node has to be inserted\n");
                scanf("%s",key_song);
                t=create_node();
                read(t);
                head=insert_name(head,t,key_song);
                }
                else
                    printf("EMPTY LIST\n");
                break;
        case 7:if(head!=NULL)
            {
                printf("Enter the song to be played\n");
                scanf("%s",key_song);
                printf("PLAYING THE SONG\n");
            search_and_play(head,key_song);
            }
        else
            printf("EMPTY LIST\n");
        break;
        case 8:if(head!=NULL)
                {
                    if(head->next!=NULL){
                   printf("Enter the song whose previous and next is to be played\n");
                    scanf("%s",key_song);
                    previous_next(head,key_song);
                    }
                    else
                    printf("No previous and next song to play next songs to play\n");
                }
                else
                    printf("Empty song list\n");
                break;
        case 9:head=delete_front(head);
                break;
        case 10:head=delete_end(head);
                break;
        case 11:if(head!=NULL)
            {
                c=count(head);
                printf("Enter the position to be deleted\n");
                scanf("%d",&pos);
                if(pos>0 && pos<=c)
                head=delete_specific(head,pos,c);
                else
                    printf("Invalid input\n");
            }
                else
                    printf("EMPTY LIST\n");
                break;
        case 12:if(head!=NULL)
                {
                   c=count(head);
                printf("Enter the position to be deleted in the reverse direction\n");
                scanf("%d",&pos);
                if(pos>0 && pos<=c)
                head=delete_reverse(head,pos,c);
                else
                    printf("Invalid input\n");
                }
                break;
        case 13:if(head!=NULL)
                {
                    printf("Enter the name of the song  to be deleted\n");
                scanf("%s",key_song);
                head=search_delete(head,key_song);
                }
                else
                    printf("EMPTY LIST\n");
                break;

        case 14:head=maximum_playtime(head);
                //printf("SONG with maximum playtime is %s\n",max->name);
                break;
        case 15:exit(0);
    }//end of switch
}//end of while
return 0;

}

