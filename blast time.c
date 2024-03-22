# include<stdio.h>
typedef struct
{
int hh;
int mm;
}TIME;

TIME read(TIME lt)
    {
    scanf("%d %d",&lt.hh,&lt.mm);
    return lt;
    }

void display(TIME lt)
    {
    printf("%d %d",lt.hh,lt.mm);
    return ;
    }
TIME blast_time(TIME lt,TIME tt)
    {
    TIME bt;
    bt.hh=lt.hh+tt.hh;
    bt.mm=lt.mm+tt.mm;
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
 TIME lt,tt,bt;
 printf("ENTER LAUNCH TIME\n");
 lt=read(lt);
 printf("ENTER TRAVEL TIME\n");
 tt=read(tt);
 bt=blast_time(lt,tt);
 printf("BLAST TIME\n");
 display(bt);
 return 0;
 }

