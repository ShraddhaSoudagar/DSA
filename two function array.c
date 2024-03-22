# include<stdio.h>
void read(int x[10])
{
for(int i=0;i<10;i++)
scanf("%d",&x[i]);
return 0;
}
void display(int x[10])
{
for(int i=0;i<10;i++)
printf("%d",x[i]);
return 0;
}
int main()
{
int x[10];
//printf("enter n");
//scanf("%d",&n);
read(x[10]);
display(x[10]);
return 0;
}
