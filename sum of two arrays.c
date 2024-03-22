# include<stdio.h>
void read(float a[7])
{
    printf("ENTER ARRAY\n");
    for(int i=0;i<7;i++)
    {
    scanf("%f",&a[i]);
    }
    return;
}

void display(float a[7])
{
    for(int i=0;i<7;i++)
    {
    printf("%0.2f\t",a[i]);
    }
    return;
}

void sum(float a[7],float b[7],float c[7])
{
    for(int i=0;i<7;i++)
    {
    c[i]=a[i]+b[i];
    }
    return;
}

int main()
{
    float a[7],b[7],c[7];
    read(a);
    read(b);
    printf("\na[7]=\n");
    display(a);
    printf("\nb[7]=\n");
    display(b);
    sum(a,b,c);
    printf("\nc[7]=\n");
    display(c);
    return 0;
}
