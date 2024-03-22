# include<stdio.h>
void read(int a[10],int n)
{
for(int i=0;i<n;i++)
scanf("%d",&a[i]);
return;
}

void display(int a[10],int na)
{
for(int i=0;i<na;i++)
printf("%d ",a[i]);
return;
}

void find_sum(int a[10],int na,int b[10],int nb)
{
//int b[10];
for(int i=0;i<na;i++)
{
     int s=0;
    for(int j=0;j<na;j++)
    {
    if(i!=j)
    s+=a[j];
    }
    b[i]=s;

}
return;
}
int main()
{
int a[10],b[10],na,nb;
scanf("%d %d",&na,&nb);
printf("Enter the array elements\n");
read(a,na);
display(a,na);
find_sum(a,na,b,nb);
printf("\noutput\n");
display(b,nb);
return 0;
}
