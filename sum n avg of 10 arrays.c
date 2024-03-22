# include<stdio.h>
int main()
{
float avg;
int i,marks[10],sum=0;
for(i=0;i<10;i++)
{
scanf("%d",&marks[i]);
sum=sum+marks[i];
}

for(i=0;i<10;i++)
printf("%3d\n",marks[i]);
printf("%d\n",sum);
avg=sum/10.0;
printf("\n%d",avg);
for(i=0;i<10;i++)
{
    if(marks[i]<avg)
    printf("\n%d=below avg\n",marks[i]);
//        count++;

}
return 0;


}
