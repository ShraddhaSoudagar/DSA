# include<stdio.h>
int sum(int a,int b)
{
return (a+b);
}
int diff(int a,int b)
{
return (a-b);
}
int prod(int a,int b)
{
return (a*b);
}
int quo(int a,int b)
{
return (a/b);
}
int rem(int a,int b)
{
return (a%b);
}
int main()
{
int a,b,s,d,p,q,r;
printf("ENTER TWO NUMBERS\n");
scanf("%d %d",&a,&b);
s=sum(a,b);
d=diff(a,b);
p=prod(a,b);
q=quo(a,b);
r=rem(a,b);
printf("SUM=%d\nDIFFERENCE=%d\nPRODUCT=%d\nQUOTIENT=%d\nREMAINDER=%d\n",s,d,p,q,r);
return 0;
}
