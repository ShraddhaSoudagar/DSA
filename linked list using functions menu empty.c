#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct student
{
    char name[20];
    int usn;
    struct student *next;
}node;

node *create_node()
{
    node *temp;
    temp=(node *)malloc(sizeof(node));
    if(temp==NULL)
    {
    printf("INSUFFICIENT MEMORY\n");
    return NULL;
    }
    temp->next=NULL;
    return temp;
}

node *read(node *t)
{
printf("enter student details\n");
scanf("%s %d",t->name,&t->usn);
return t;
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
        printf("\n%s %d",cur->name,cur->usn);
        cur=cur->next;
    }
}
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
                cur =cur->next;
                }
                cur->next =p1;
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
    return c;
}

int search(node *head,char n[20])
{
    if(head==NULL)
    return 0;
    else
    {
        node *cur=head;
        while(cur!=NULL)
        {
        if(strcmp(cur->name,n)==0)
            return 1;
            cur=cur->next;

        }

    }
    return 0;
}

node *insert_specific(node *head,node *t1,int c,int pos)
{
    node *cur=head;
    if(head==NULL)
        head=t1;
    else if(pos==1)
    head=insert_front(head,t1);
    else if(pos==c+1)

       head=insert_end(head,t1);
    else

        for(int i=1;i<pos-1;i++)
    {
        c=count(head);
        cur=cur->next;
        t1->next=cur->next;
        cur->next=t1;
    }
return head;
}

node *insert_name(node *head,node *t,char key_name[20])
{
    if(head==NULL)
    printf("EMPTY LIST\n");
    else if(head->next==NULL)
    {
        if(strcmp(head->name,key_name)==0)
            head->next=t;
        else
            printf("Name not found\n");
    }//single node
    else
    {
        node *cur=head;
        while(cur->next!=NULL)
        {
            if(strcmp(cur->name,key_name)==0)
            {
                t->next=cur->next;
                cur->next=t;
                break;

            }
            else
                cur=cur->next;
        }
        if(strcmp(cur->name,key_name)==0)
            cur->next=t;
        else
        printf("Name not found\n");
    }//multiple node
   return head;
}//
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
       node *prev=NULL;
       while(cur->next!=NULL)
       {
           prev=cur;
           cur=cur->next;
       }
       prev->next=NULL;
       free(cur);
    }
    return head;
}

node *delete_specific(node *head,int p,int c)
{
    if(head==NULL)
        printf("EMPTY LIST\n");
    else if(head->next==NULL && p==1)
    {
        free(head);
        head=NULL;
    }
    else
    {
        node *cur=head,*prev=NULL;
       // if(p==1)
        //    head=delete_front(head);
        //else if(p==c)
          //  head=delete_end(head);
        //else
        for(int i=1;i<p;i++)
        {
            prev=cur;
            cur=cur->next;
        }
        prev->next=cur->next;
        free(cur);
        cur=NULL;

    }
    return head;
}

node *delete_name(node *head,char del_key[20])
{
    node *cur=head,*prev=NULL;
    if(head==NULL)
    printf("EMPTY LIST\n");
    else if(head->next==NULL )
            {
                if( strcmp(head->name,del_key)==0){

                    free(head);
                    head=NULL;
                    return head;
                }
                else
                    printf("NAME NOT FOUND\n");
            }
        else if(strcmp(cur->name,del_key)==0)
        {
            head=head->next;
            free(cur);
            return head;
        }
        else
        {
            while(cur!=NULL && strcmp(cur->name,del_key)!=0)
            {
                prev=cur;
                cur=cur->next;
            }
            if(cur!=NULL)
            {
                prev->next=cur->next;
                free(cur);
            }
            else
                printf("Name not found\n");
            return head;
        }
return head;
}

node *insert_sort(node *head,node *t)
{
    node *cur=head,*prev=NULL;
    if(head==NULL)
        head=t;
    else if(head->next==NULL)
    {
        if(head->usn>t->usn)
            head=insert_front(head,t);
        else
            head=insert_end(head,t);
    }
    else if(head->usn > t->usn)
    {
        t->next=head;
        head=t;
    }
    else
    {
      while(cur!=NULL && cur->usn<t->usn)
      {
          prev=cur;
          cur=cur->next;
      }
      prev->next=t;
      t->next=cur;
        return head;
    }
 return head;
}

/*node *insert_sort(node *head,node *t)
{
    node *cur=head;
    if(head==NULL)
        head=t;
    else if(head->next==NULL)
    {
        if(head->usn>t->usn)
            head=insert_front(head,t);
        else
            head=insert_end(head,t);
    }
    else if(head->usn > t->usn)
    {
        t->next=head;
        head=t;
    }
    else
    {
      while(cur!=NULL && cur->next->usn<t->usn)
          cur=cur->next;
      t->next=cur->next;
      cur->next=t;

    }
    if(cur->next==NULL)
    {
        cur->next=t;
        t->next=NULL;
    }
 return head;
}*/

// function to find the previous node of the node to be deleted
node *find_previous(node *head, int key)
{
    node *cur = head;
    while(cur->next!=head)
    {
        if(cur->next->usn == key)
            return cur;

        cur=cur->next;
    }
    return NULL;
}
// function to delete all occurrences of the key element
node *find_delete(node *head, int key)
{

    if(head == NULL)
    {
        printf("Empty list\n");
        return 0;
    }
    // for single node
    if(head->next == head)
    {
        if(head->usn == key)
        {
            free(head);
            head=NULL;
        }
        else
           printf("Not found\n");
        return head;
    }
    else
   { //more than one node in list
    node *cur=head;
    while(cur->next!=NULL)
    {
      if(head->usn==key)
      {
        node *temp=head;
        node *cur =head;
        while(cur->next!=NULL)
            cur=cur->next;

       // cur->next = head->next;
        head=head->next;
        free(temp);
        temp =NULL;
        cur=head;
       }
       else
       {
        node *tag, *temp;
        tag=find_previous(head,key);
        if(tag==NULL)
        {
            printf("Not found\n");
            return head;
        }
     temp=tag->next->next;
     free(tag->next);
     tag->next=temp;
     }

     cur=cur->next;
    }//end of while
   }
    return head;
   }

node *merge_lists(node *head1,node *head2)
{
   node *head3=NULL,*tail=head3;
   head3=create_node();
       if(head1->usn > head2->usn)
       {
           head3=tail=head2;
           head2=head2->next;
           tail->next=NULL;
       }
       else
       {
         head3=tail=head1;
           head1=head1->next;
           tail->next=NULL;
       }
while(head1!=NULL && head2!=NULL)
{
    if(head1->usn < head2->usn)
    {
        tail->next=head1;
        tail=head1;
        head1=head1->next;
        tail->next=NULL;

    }

    else
    {

        tail->next=head2;
        tail=head2;
        head2=head2->next;
        tail->next=NULL;
    }
}
if(head1!=NULL)
    tail->next=head1;
else
    tail->next=head2;
    return head3;
}

int main()
{
    node *head=NULL,*head1=NULL,*head2=NULL,*head3=NULL;
node *t=NULL;
char n[20];
int opt,c,pos,p,key,i,j;
char key_name[20],del_key[20];

//t=create_node();
  //              read(t);
    //            head=t;

printf("1.Insert front\n2.Display\n3.INSERT END\n4.Count\n5.Search\n6.INSERT AT SPECIFIC POSITION\n7.INSERT WRT NAME\n8.DELETE front\n9.DELETE END\n10.DELETE SPECIFIC\n11.DELETE WRT NAME\n12.SORT INSERTING\n13.MERGE TWO LISTS\n14.Exit\n");
while (1)
{
    printf("\n\nenter option\n");
    scanf("%d",&opt);

    switch(opt)
    {
        case 1: t=create_node(t);
                t=read(t);
                head=insert_front(head,t);
                break;
        case 2:display(head);
                break;
        case 3:t=create_node(t);
                t=read(t);
                head=insert_end(head,t);
                break;
         case 4:c=count(head);
                    printf("\ncount=%d",c);
                    break;
         case 5:printf("enter name to be searched\n");
                scanf("%s",n);
                if(search(head,n)==1)
                            printf("\nSuccesfull\n");
                else
                    printf("Not found");
                    break;
         case 6:printf("Enter the position at which node should be inserted\n");
                scanf("%d",&pos);
                c=count(head);
                if(pos>0 && pos<=c+1)
                {
                    node *t1=NULL;
                    t1=create_node();
                    read(t1);
                  head=insert_specific(head,t1,c,pos);
                }
                 else
                 printf("invalid position\n");
                 break;
           case 7: printf("Enter the name to be searched to insert new node\n");
                    scanf("%s",key_name);

                    t=create_node();
                    read(t);
                    head=insert_name(head,t,key_name);
                    break;
            case 8:head=delete_front(head);
                     break;
            case 9:head=delete_end(head);
                    break;
            case 10:printf("ENTER the position of the node to be deleted\n");
                        scanf("%d",&p);
                        c=count(head);
                        if(p>0 && p<=c)
                           head=delete_specific(head,p,c);
                        else
                            printf("Invalid position\n");
                        break;
            case 11:printf("Enter the name of the node to be deleted\n") ;
                        scanf("%s",del_key);
                        head=delete_name(head,del_key);
                        break;
             case 12:t=create_node();
                            read(t);
                        head=insert_sort(head,t);
                        break;
            case 13:printf("Enter the name of the node to be deleted\n") ;
                        scanf("%s",del_key);
                        head=find_delete(head,key);
                        break;
              case 14:for( i=1;i<=2;i++)
                        {
                            t=create_node();
                            read(t);
                            head1=insert_sort(head1,t);
                        }
                        for( j=1;j<=2;j++)
                        {
                            t=create_node();
                            read(t);
                            head2=insert_sort(head2,t);
                        }
                        head3=merge_lists(head1,head2);
                        display(head3);
                        break;
         case 15:exit(0);
    }//end of switch

}//end of while

        return 0;
}

