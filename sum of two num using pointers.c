# include<stdio.h>
int sum(x,y )
int x,y;
{
    int s;
   s=x+y;
   printf("%d",s);
    return s;
}

int main()
{
int a,b,s;
int *ptr1,*ptr2;
printf("Enter two numbers a and b:\n");
scanf("%d %d",&a,&b);
ptr1=&a;
ptr2=&b;
s=sum(*ptr1,*ptr2);
printf("SUM=%d",s);
return 0;
}
