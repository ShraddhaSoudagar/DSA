//MODULAR PROGRAM TO FIND ADDITION OF TWO NUMBERS
# include<stdio.h>
int sum(int x,int y); //func prototype
//func definition
int sum(int x,int y)
{
int s;
s=x+y;
return s;
}
int main()
{
int x,y,s;
printf("ENTER TWO NUMBERS\n");
scanf("%d%d",&x,&y);
s=sum(x,y);    //func call
printf("SUM=%d\n\n",s);
return 0;
}
