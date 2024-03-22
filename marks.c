# include<stdio.h>
int main()
{
 int m1,m2,m3,m4,m5,total;
 float percentage;
 printf("ENTER MARKS OF FIVE SUBJECTS:");
 scanf("%d %d %d %d %d",&m1,&m2,&m3,&m4,&m5);
 total=m1+m2+m3+m4+m5;
 percentage=(total/500)*100;
 printf("TOTAL=%d\nPERCENTAGE=%0.2f",total,percentage);
 getch();


}
