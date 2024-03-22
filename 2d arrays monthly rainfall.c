# include<stdio.h>
# include<string.h>
void read(float r[2][12])
{
for(int i=0;i<2;i++)
{
for(int j=0;j<12;j++)
scanf("%f",&r[i][j]);
}
return;
}

void display(float r[2][12])
{
printf("\t\t\tTable of monthly rainfall\n");
for(int i=0;i<2;i++)
{
for(int j=0;j<12;j++)
printf("%0.2f\t",r[i][j]);

printf("\n");
}
return;
}

void statistics(float r[2][12])
{
float sum[2]={0},avg[2];
for(int i=0;i<2;i++)
{
for(int j=0;j<12;j++)
sum[i]=sum[i]+r[i][j];
}
printf("Total rainfall this year:  %0.2f\n",sum[0]);
printf("Total rainfall last year:  %0.2f\n",sum[1]);

for(int k=0;k<2;k++)
{
//for(int l=0;l<12;l++)
avg[k]=sum[k]/12;
}
printf("AVERAGE:  %0.2f\n",avg[0]);
printf("AVERAGE:  %0.2f\n",avg[1]);
return;
}

int main()
{
float r[2][12];
read(r);
display(r);
statistics(r);
return 0;
}
