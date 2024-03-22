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

void display_row(int a[3],int rows)
{
    for(int i=0;i<rows;i++)
        printf("%d",a[i]);
    return;

}

int sum(int a[10][10],int rows,int cols)
{
    int s=0;
    for(int i=0;i<rows;i++)
    {
        s=0;
        for(int j=0;j<cols;j++)
        {
            s=s+a[i][j];

        }
        //printf("SUM OF %d row =%d\n",i+1,s);
    }
    return s;
}

void sum_column(int a[10][10],int rows,int cols)
{
    int s=0;
    for(int j=0;j<cols;j++)
    {
        s=0;
        for(int i=0;i<rows;i++)
            s=s+a[i][j];
     printf("SUM OF %d COLUMN=%d\n",j+1,s);
    }

    return;
}



int main()
{
    int a[10][10],rows,cols,s;
    printf("ENTRT NUMBER OF ROWS AND COLOUMNS\n");
    scanf("%d %d",&rows,&cols);
    read(a,rows,cols);
    display(a,rows,cols);
    s=sum(a,rows,cols);
    printf("\nSUM=%d\n",s);
    sum_column(a,rows,cols);



    return 0;
}
