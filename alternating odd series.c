# include<stdio.h>
# include<math.h>
int sum(int n)
{
int i,j,s=0;
for(i=0,j=1;i<n;i++,j=j+2)
{
s+=(pow(-1,i))*j;
}
return s;
}
int main()
{
int n,s;
scanf("%d",&n);
s=sum(n);
printf("sum=%d",s);
return 0;
}
