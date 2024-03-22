# include<stdio.h>
void read(int a[10][10],int rows,int cols)
{
    printf("enter elements\n");
    for(int i=0;i<rows;i++)
        for(int j=0;j<cols;j++)
            scanf("%d",&a[i][j]);
return;
}

void display(int a[10][10],int rows,int cols)
{
    printf("ARRAY\n");
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
        printf("%3d",a[i][j]);
        }
printf("\n");
}
}

int sum_diagonal(int a[10][10],int rows)
{
int s=0;
for(int i=0;i<rows;i++)
{
    //for(int j=0;j!=cols;j++)

    s=s+a[i][i];
}

return s;
}

int sec_diagonal(int a[10][10],int rows,int cols)
{
int s2=0;
for(int i=0;i<rows;i++)
{
    for(int j=cols-1;j>0;j--)
    s2=s2+a[i][j];
}

return s2;
}


int main()
{
    int a[10][10],rows,cols,s,s2;
    printf("ENTRT NUMBER OF ROWS AND COLOUMNS\n");
    scanf("%d %d",&rows,&cols);
        read(a,rows,cols);
    display(a,rows,cols);
    if(rows==cols)
    {
    s=sum_diagonal(a,rows);
    printf("DIAGONAL SUM=%d\n",s);
    s2=sec_diagonal(a,rows,cols);
    printf("SECONDARY DIAGONAL SUM=%d",s2);
    }
    else
        printf("NOT A SQUARE MATRIX");



    return 0;
}
