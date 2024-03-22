# include<stdio.h>
void read(int a[10],int n)
{
    printf("ENTER THE ELEMENTS OF THE MATRIX\n");
for(int i=0;i<n;i++)

    scanf("%d",&a[i]);

return;
}

void display(int a[10],int n)
{
for(int i=0;i<n;i++)
{

    printf("\t\t%2d",a[i]);
    printf("\n");
}
return;
}

int duplicate(int a[10],int n,int dup[10])
{
    int c=0;
for(int i=0;i<n;i++)
{

    for(int j=i+1;j<n;j++)
    {
    if(a[i]==a[j])
    {
        dup[c++]=a[i];
        break;
    }
        }

}
//printf("count=%d\n",c);
return c;
}

int main()
{
int a[10],n,dup[10],c;
scanf("%d",&n);
read(a,n);
c=duplicate(a,n,dup);
if(c>0)
{
    printf("DUPLICATE ELEMENTS ARE\n");
    duplicate(a,n,dup);
    display(dup,c);
}

return 0;
}
