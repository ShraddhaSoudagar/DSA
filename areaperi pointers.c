# include<stdio.h>
# define PI 3.142
void areaperi(int r,float *area,float *peri)
{
*area=PI*r*r;
*peri=2*PI*r;
return 0;
}

int main()
{
int r;
float area,peri;
printf("ENTER RADIUS OF CIRCLE\n");
scanf("%d",&r);
areaperi(r,&area,&peri);
printf("AREA=%0.2f\nPERIMETER=%0.2f\n",area,peri);
return 0;
}
