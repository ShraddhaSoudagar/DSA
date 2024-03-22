# include<stdio.h>
void read()
{
int x[10];
for(int i=0;i<5;i++)
scanf("%d",&x[i]);
for(int i=0;i<5;i++)
printf("%5d",x[i]);

return;

}
int main()
{
read();
return 0;

}
