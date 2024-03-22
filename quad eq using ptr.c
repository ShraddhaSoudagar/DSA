# include<stdio.h>
# include<math.h>
void quad_eq(float a,float b,float c,float *q)
{
float d;
d=b*b-(4.0*a*c);
*q=-b+sqrt(d)/2.0*a;

return;
}

int main()
{
float x,y,z,q;
scanf("%f %f %f",&x,&y,&z);
quad_eq(x,y,z,&q);
printf("QUADRATIC EQUATION=%0.2f",q);

return 0;
}
