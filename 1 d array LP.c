# include<stdio.h>
void read(long int data[10],int n)
{
    printf("ENTER VALUES\n");
for(int i=0;i<n;i++)
scanf("%d",&data[i]);
return;
}

void display(long int data[10],int n)
{
    printf("DISPLAY\n");
for(int i=0;i<n;i++)
printf("%3d",data[i]);
return;
}

void sort(long int data[10],int n)
{
int t;
for(int i=0;i<n-1;i++)
{
    for(int j=0;j<n-1-i;j++)
    {
    if(data[j]>data[j+1])
    {
        t=data[j];
        data[j]=data[j+1];
        data[j+1]=t;

    }
    }

}
return ;
}

void search(long int data[10],int n)
{
    long int key;
    printf("\nENTER KEY\n");
    scanf("%d",&key);
for(int i=0;i<n;i++)
{
if(data[i]==key)
printf("\nKey found");
else
    printf("\nKey not found");
}
}

int main()
{
long int data[10];
int n;
printf("ENTER NUMBER OF YEARS\n");
scanf("%d",&n);
read(data,n);
display(data,n);
sort(data,n);
printf("\nSORTED VALUES\n");
display(data,n);
search(data,n);
return 0;
}
