# include<stdio.h>
void read(int votes[5][4])
{
    printf("ENTER VOTES\n");
for(int i=0;i<5;i++)
{
for(int j=0;j<4;j++)
scanf("%d",&votes[i][j]);
}
return;
}

void sum_percentage(int votes[5][4])
{

int sum[4]={0};
float per[4];
for(int j=0;j<4;j++)
{
for(int i=0;i<5;i++)
    sum[j]=sum[j]+votes[i][j];
printf("Candidate sum=%d\n",sum[j]);
}
}
//for(int m=0;m<5;m++)
//{
//for(int n=0;n<4;n++)
//s=s+votes[m][n];
//}
//printf("sum=%d",sum);a
void per(int votes[5][4],int s,int sum[4])
{
for(int k=0;k<4;k++)
{

per[k]=(sum[k]/s)*100;
printf("Candidate percentage=%0.2f\n",per[k]);
}
return;

}

int sum_all(int votes[5][4])
{
    int s=0;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<4;j++)
            s=s+votes[i][j];
    }
    return s;
}



int main()
{
int votes[5][4],s;
read(votes);
s=sum_all(votes);
sum_percentage(votes);
per(votes,s,sum)
return 0;
}
