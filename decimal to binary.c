# include<stdio.h>
int main()
{
int r,b=0,place=1;
long int n;
scanf("%d",&n);
while(n!=0)
{
r=n%2;
b=b+(r*place);
place=place*10;
n=n/2;
}
printf("%d\n",b);
return 0;


}
