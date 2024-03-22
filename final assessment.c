/*C PROGRAM TO FIND AVERAGE OF SUM OF SERIES OF FIRST N,N+1,N+2 TERMS*/
#include<stdio.h>
#include<math.h>
float series_sum1(int n)
{
    int i;
float sum1=0,j;
for(i=0,j=1.0;i<n;i++,j++)
sum1+=(pow(-1,i))*(1/j);
return sum1;
}

float series_sum2(int n)
{
    int i;
float sum2=0,j;
for( i=0,j=1.0;i<n+1;i++,j++)
sum2+=(pow(-1,i))*(1/j);
return sum2;
}

float series_sum3(int n)
{
    int i;
float sum3=0,j;
for(i=0,j=1.0;i<n+2;i++,j++)
sum3+=(pow(-1,i))*(1/j);
return sum3;
}

int main()
{
int n;
float sum1,sum2,sum3,avg;
printf("enter n\n");
scanf("%d",&n);
if(n>1)
{
sum1=series_sum1(n);
sum2=series_sum2(n);
sum3=series_sum3(n);
printf("Sum of first %d terms = %0.4f\n",n,sum1);
printf("Sum of first %d terms = %0.4f\n",n+1,sum2);
printf("Sum of first %d terms = %0.4f\n",n+2,sum3);
avg=(sum1+sum2+sum3)/3;
printf("AVERAGE=%0.4f\n",avg);

}
else
printf("Invalid input");
return 0;
}
