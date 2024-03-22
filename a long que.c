# include<stdio.h>

void read(int a[100],int n)
{
for(int i=0;i<n;i++)
scanf("%d",&a[i]);
return ;
}

void display(int a[100],int n)
{
for(int i=0;i<n;i++)
printf("%d\t",a[i]);
return;
}

int maximun(int a[100],int n)
{
int max=a[0],c=0;
for(int i=1;i<n;i++)
{
if(a[i]>max)
max=a[i];
c++;
}
return c;
}

int reverse(int a[100],int c,int n)
{
    int i,j,temp=0;
    for(i=0,j=c-2-i;i<(c-1)/2;i++,j--)
    {
        temp=a[j];
        a[j]=a[i];
        a[i]=temp;
    }
    return;
}

int main()
{
int a[100],c,n;
scanf("%d",&n);
read(a,n);
c=maximun(a,n);
reverse(a,c,n);
display(a,n);

//printf("c=%d",c);
return 0;
}

