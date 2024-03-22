# include<stdio.h>
typedef struct
{
int hh;
int mm;
}TIME;

void read(TIME *ptr)
    {
    scanf("%d %d",&ptr->hh,&ptr->mm);
    return;
    }

void display(TIME *ptr)
    {
    printf("%d %d",ptr->hh,ptr->mm);
    return ;
    }

void blast_time(TIME *lt,TIME *tt)
    {
    TIME bt;
    bt.hh=lt->hh+tt->hh;
    bt.mm=lt->mm+tt->mm;
    if(bt.mm>60)
    {
    bt.mm-=60;
    bt.hh++;
    }
    //if(bt.hh>24)
    //bt.hh-=24;
    return bt;
    }
int main()
 {
 TIME lt,tt;
TIME *p1,*p2;
 p1=&lt;
 printf("ENTER LAUNCH TIME\n");
 read(p1);
 p2=&tt;
 printf("ENTER TRAVEL TIME\n");
 read(p2);
 blast_time(p1,p2);
  //display(p1);
  //display(p2);

return 0;
}
