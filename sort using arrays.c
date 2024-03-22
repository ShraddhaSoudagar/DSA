# include<stdio.h>
void read(int h[10],int n)
{
printf("enter height of the n number of student\n");
for(int i=0;i<n;i++)
{
scanf("%d",&h[i]);
}
return;
}

void display(int h[10],int n)
{
for(int i=0;i<n;i++)
{
printf("%d\t",h[i]);
}
return;
}

void sort(int h[10],int n)
{
int temp;
for(int i=1;i<=n-1;i++)
{
    for(int j=0;j<=n-1-i;j++)
    {

    if(h[j]>h[j+1])
{
temp=h[j];
h[j]=h[j+1];
h[j+1]=temp;
}
    }
//printf("\n%d\t",h[i]);


}
return;
}

int main()
{
int h[10],n;
printf("enter n\n");
scanf("%d",&n);
read(h,n);
display(h,n);
sort(h,n);
printf("\nSORTED VALUES\n");
display(h,n);
return 0;
}
