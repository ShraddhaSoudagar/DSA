# include<stdio.h>
void display(int n)
{
int i=1;
while(i<=n)
{
printf("%d\n",i);
//printf("\n");
i++;
}
return;
}
int main()
{
int n;
scanf("%d",&n);
display(n);
return 0;

}
