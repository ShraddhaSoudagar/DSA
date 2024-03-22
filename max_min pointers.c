# include<stdio.h>
void maximum_minimum(int a,int b,int *max,int *min)
{
if(a>b)
{
*max=a;
*min=b;
}
else
{
*min=a;
*max=b;
}
return;
}

int main()
{
int a,b,max,min;
scanf("%d %d",&a,&b);
printf("NUMBERS=%d and %d\n",a,b);
maximum_minimum(a,b,&max,&min);
printf("Maximum=%d\nMinimum=%d\n",max,min);
return 0;
}
