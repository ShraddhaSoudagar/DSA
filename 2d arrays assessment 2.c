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
    printf("\t\t%2d",a[i][j]);
    printf("\n");
}
return;
}

int isprime(int num)
{
    for(int i=2;i<=num/2;i++)
    {
        if(num%i==0)
        return 0;
    }
  return 1;
}

void replace_upper(int a[5][5],int n)
{
    for(int i=0;i<n;i++)
    {//outer for
        for(int j=0;j<n;j++)
        {//inner for
        if(j>i)
            {
            if(isprime(a[i][j])==1)
            break;
            else if(isprime(a[i][j])==0)
            {
                while(isprime(a[i][j])==0)
                a[i][j]++;

            }
            }//if
            }//inner for
            }//outer for


return;
}

void replace_lower(int a[5][5],int n)
{

    for(int j=0;j<n;j++)
    {//outer for

        for(int i=0;i<n;i++)
        {//inner for
        if(j<i)
            {
            if(isprime(a[i][j])==1)
            break;
            else if(isprime(a[i][j])==0)
            {
                while(isprime(a[i][j])==0)
                a[i][j]++;

            }
            }//if
            }//inner for
            }//outer for


return;
}

int main()
{
int a[5][5],n;
printf("ENTER THE SIZE OF THE SQUARE MATRIX\n ");
scanf("%d",&n);
read(a,n);
printf("\tMATRIX ENTERED\n");
display(a,n);
//isprime(num);
replace_upper(a,n);
replace_lower(a,n);
printf("UPDATED MATRIX\n");
display(a,n);
return 0;
}
