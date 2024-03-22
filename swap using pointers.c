# include<stdio.h>
void swap(int *x,int *y)
{
int temp;
temp=*x;
*x=*y;
*y=temp;
return;
}

int main()
{
int a,b;
scanf("%d %d",&a,&b);
printf("Before swapping a=%d\nb=%d\n",a,b);
swap(&a,&b);
printf("After swapping a=%d\nb=%d",a,b);
return 0;

}
