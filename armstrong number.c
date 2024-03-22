# include<stdio.h>
# include<math.h>
void isarmstrong(int num,int c)
{
    int m=num;
    int s=0;
    while(m!=0)
    {
        int r=m%10;
      s+=(pow(r,c));
      m=m/10;
    }
    if(s==num)
   printf("IT IS A ARMSTRONG NUMBER\n");
    else
     printf("IT IS not A ARMSTRONG NUMBER\n");
return;
}

int reverse_num(int num)
{
    int reverse=0,r;
    while(num!=0){
    r=num%10;
    reverse=(reverse*10)+r;
    num=num/10;
    }
    return reverse;
}


int count_digits(int num)
{
    int c=0;
    while(num!=0)
    {
        num=num/10;
    c++;
    }
    return c;
}

int main()
{
int num,c,reverse;
printf("enter num\n");
scanf("%d",&num);
c=count_digits(num);
//printf("count=%d",c);
isarmstrong(num,c);
reverse=reverse_num(num);
printf("\n\nReverse is %d",reverse);
}
