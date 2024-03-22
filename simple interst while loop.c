# include<stdio.h>
void simple_interest(int n)
{
float p,t,r;
int i=1;
while(i<=n)
{
printf("ENTER PRINCIPAL AMT,RATE OF INTEREST,TIME\n");
scanf("%f %f %f",&p,&r,&t);
printf("%0.2f\n\n",(p*t*r)/100);
i++;
}
return;
}
int main()
{
int n;
printf("ENTER NUMBER OF CUSTOMERS:");
scanf("%d",&n);
simple_interest(n);
return 0;
}
