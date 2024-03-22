# include<stdio.h>
# define PI 3.142
int main()
{
float r,area;
float *ptr1;
printf("Enter radius of the circle:\n");
scanf("%f",&r);
ptr1=&r;
area=PI*(*ptr1)*(*ptr1);
printf("AREA=%0.2f",area);
return 0;
}
