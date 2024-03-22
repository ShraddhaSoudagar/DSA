/*C program to calculate cost for soap can labels*/;
# include<stdio.h>
# define PI 3.142
int main()
{
float d=3.5,h=5.0,r,area,cost;
r=d/2;
area=2.0*PI*r*h*1000;
cost=area*10;
printf("TOTAL COST=%0.2f",cost);
return 0;


}
