# include<stdio.h>
int max(int a,int b)
{
return(a>b ? a:b);
}
int min(int a,int b)
{
return(a<b ? a:b);
}
int main()
{
int a,b;
printf("ENTER TWO NUMBERS\n");
scanf("%d %d",&a,&b);
printf("MAXIMUM=%d\nMINIMUM=%d\n",a>b ?a:b,a<b ?a:b);
return 0;

}
