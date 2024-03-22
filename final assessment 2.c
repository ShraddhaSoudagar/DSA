#include<stdio.h>
#include<math.h>
float series_sum(int n)
{
    int i;
float sum1=0,j;
for(i=0,j=1.0;i<n;i++,j++)
sum1+=(pow(-1,i))*(1/j);
return sum1;
}
int main()
{
int n;
float sum1,sum2,sum3,avg;
scanf("%d",&n);
sum1=series_sum(n);
sum2=series_sum(n+1);
sum3=series_sum(n+2);
avg=(sum1+sum2+sum3)/3;
printf("avg=%f",avg);
}
