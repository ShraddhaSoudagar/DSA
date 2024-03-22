# include<stdio.h>
void read(int *p,int n)
{
for(int i=0;i<n;i++)
{
scanf("%d",p);
p++;
}
return ;
}

void display(int *p,int n)
{
    for(int i=0;i<n;i++)
    {
    printf("%d  ",*p);
    p++;
    }
return;
}

int sum(int *p,int n)
{
    int s=0;
    for(int i=0;i<n;i++)
    {
        s+=*p;
        p++;
    }
    return s;
}

int *maximum(int *p,int n)
{
  int max=0,*q=p;
    for(int i=0;i<n;i++)
    {
        if(*p>max)
        {
            max=*p;
            q=p;
        }
        p++;
    }
return q;

}

int main()
{
int a[10],n,*p,s,q;
printf("ENTER n\n");
scanf("%d",&n);
p=&a[0];
printf("ENTER ELEMENTS\n");
read(p,n);
printf("\n%d\n",&a[2]);
display(a,n);
s=sum(p,n);
printf("\n\nSUM=%d",s);
q=maximum(p,n);
printf("\n\nMAXIMUM=%d\n",q);
return 0;
}
