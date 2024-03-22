#include<stdio.h>
void calculator(int a,int b,int *sum,int *diff,int *prod,float *quot,float *rem)
{
*sum=a+b;
*diff=a-b;
*prod=a*b;
*quot=a/b;
*rem=a%b;
return;
}

int main()
{
float a,b,sum,diff,prod;
float quot,rem;
printf("ENTER VALUES OF a AND b\n");
scanf("%d %d",&a,&b);
calculator(a,b,&sum,&diff,&prod,&quot,&rem);
printf("\nSUM=%d\nDIFFERENCE=%d\nPRODUCT=%d\nQUOTIENT=%0.2f\nREMINDER=%0.2f\n",sum,diff,prod,quot,rem);
return 0;

}
