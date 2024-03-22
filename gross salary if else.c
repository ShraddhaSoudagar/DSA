# include<stdio.h>
int main()
{
float bs,hra,da,gs;
printf("ENTER BASIC SALARY:");
scanf("%f",&bs);
if(bs<1500.0)
{
    hra=0.1*bs;
    da=0.9*bs;
    gs=bs+hra+da;
   // printf("GROSS SALARY=%0.2f",gs);
}
else
{
    hra=500;
    da=0.98*bs;
    gs=bs+hra+da;
   // printf("GROSS SALARY=%0.2f",gs);

}
printf("GROSS SALARY=%0.2f",gs);
return 0;
}
