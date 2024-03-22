# include<stdio.h>
int sum(long int n)
{
int s=0,r;
while(n!=0)
{
r=n%10;
s=s+r;
n=n/10;
}
return s;
}
int main()
{
int s;
long int n;
scanf("%d",&n);
s=sum(n);
printf("%d",s);
return 0;

}
