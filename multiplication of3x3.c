# include<stdio.h>
void read(int a[5][5],int n)
{
    printf("ENTER THE ELEMENTS OF THE MATRIX\n");
for(int i=0;i<n;i++)
{
    for(int j=0;j<n;j++)
    scanf("%d",&a[i][j]);
}
return;
}

void display(int a[5][5],int n)
{
for(int i=0;i<n;i++)
{
    for(int j=0;j<n;j++)
    printf("%d ",a[i][j]);
    printf("\n");
}
return;
}

void multiply(int a[5][5],int b[5][5],int c[5][5],int n)
{
for(int i=0;i<n;i++)
{
    for(int j=0;j<n;j++)
    {
        c[i][j]=0;
        for(int k=0;k<n;k++)
        {
        c[i][j]+=a[i][k]*b[k][j];
        }
        }
}
return;
}

int main()
{
int a[5][5],b[5][5],c[5][5],n;
scanf("%d",&n);
read(a,n);
read(b,n);
printf("MATRIX A\n");
display(a,n);
printf("MATRIX B\n");
display(b,n);
multiply(a,b,c,n);
printf("multiplied matrix\n");
display(c,n);
return 0;
}
