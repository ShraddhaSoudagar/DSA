/*#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
typedef struct
{
    int trans_id;
    char user_name[20];
    char user_id[20];
    int amt;
    char ben_id[20];
    int dated;
    int datem;
    int datey;
    int timeh;
    int timem;
    int times;
}transaction;

void read(transaction t[20],int n)
{
    for(int i=0;i<n;i++)
        scanf("%d %s %s %d %s %d %d %d %d %d %d",&t[i].trans_id,t[i].user_name,t[i].user_id,&t[i].amt,t[i].ben_id,&t[i].dated,&t[i].datem,&t[i].datey,&t[i].timeh,&t[i].timem,&t[i].times);
    return;
}

void display(transaction t[20],int n)
{
    for(int i=0;i<n;i++)
        printf("%d %s %s %d %s %d-%d-%d  %d-%d-%d\n",t[i].trans_id,t[i].user_name,t[i].user_id,t[i].amt,t[i].ben_id,t[i].dated,t[i].datem,t[i].datey,t[i].timeh,t[i].timem,t[i].times);
 return;
}

int search(transaction t[20],int n,int key_id)
{
    for(int i=0;i<n;i++)
    {
      if(key_id==t[i].trans_id){
          printf("\n%d %s %s %d %s %d-%d-%d  %d-%d-%d\n",t[i].trans_id,t[i].user_name,t[i].user_id,t[i].amt,t[i].ben_id,t[i].dated,t[i].datem,t[i].datey,t[i].timeh,t[i].timem,t[i].times);
         return 1;
      }
}
    return 0;
}

void sort(transaction t[20],int n)
{
    transaction temp;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
           if(strcmp(t[j].user_name,t[j+1].user_name)>0)
           {
               temp=t[j];
               t[j]=t[j+1];
               t[j+1]=temp;
           }


        }

    }

   return;
}

int main() {
transaction t[20];
    int n,key_id;
    scanf("%d",&n);
    if(n>=3)
    {
        read(t,n);
        scanf("%d",&key_id);
        display(t,n);
        //search(t,n,key_id);
     if(search(t,n,key_id)==0)
           printf("\nNo transaction with transaction id %d.",key_id);
     sort(t,n);
     printf("\n\n");
     display(t,n);

    }
    else
        printf("Invalid input");
     return 0;
}*/
//using pointers
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
typedef struct
{
    int trans_id;
    char user_name[20];
    char user_id[20];
    int amt;
    char ben_id[20];
    int dated;
    int datem;
    int datey;
    int timeh;
    int timem;
    int times;
}transaction;

void read(transaction *t,int n)
{
    for(int i=0;i<n;i++){
        scanf("%d %s %s %d %s %d %d %d %d %d %d",&t->trans_id,t->user_name,t->user_id,&t->amt,t->ben_id,&t->dated,&t->datem,&t->datey,&t->timeh,&t->timem,&t->times);
        t++;
    }
    return;
}

void display(transaction *t,int n)
{
    for(int i=0;i<n;i++){
       printf("%d %s %s %d %s %d-%d-%d %d:%d:%d\n",t->trans_id,t->user_name,t->user_id,t->amt,t->ben_id,t->dated,t->datem,t->datey,t->timeh,t->timem,t->times);
    t++;
    }
 return;
}

int search(transaction *t,int n,int key_id)
{
    for(int i=0;i<n;i++)
    {
      if(t->trans_id==key_id){
            //printf("\n\n\n%d",key_id);
             printf("\n%d %s %s %d %s %d-%d-%d %d:%d:%d\n",t->trans_id,t->user_name,t->user_id,t->amt,t->ben_id,t->dated,t->datem,t->datey,t->timeh,t->timem,t->times);

         return 1;}
    else
         t++;
       }

     return 0;
}

void sort(transaction *t,int n)
{
   transaction temp;transaction*a;
    a=t;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(t->trans_id > (t+1)->trans_id){

               temp=*t;
               *t=*(t+1);
               *(t+1)=temp;

        }
         t++;
        }
       t=a;
    }


}

int main()
{
transaction *t;
    int n,key_id;
    scanf("%d",&n);
    t=(transaction *)malloc(n*sizeof(transaction));
    if(n>=3)
    {
        read(t,n);
        scanf("%d",&key_id);
        display(t,n);
       //s=search(t,n,key_id);
        if(search(t,n,key_id)==0)

           printf("\nNo transaction with transaction id %d.",key_id);
           sort(t,n);
           printf("\n\n");
           display(t,n);

    }
    else
        printf("Invalid input");
     return 0;
}
