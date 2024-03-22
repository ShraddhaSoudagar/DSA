# include<stdio.h>
int main()
{
int a,b,c;
printf("ENTER VALUE OF THREE SIDES OF THE TRIANGLE a,b,c:");
scanf("%d %d %d",&a,&b,&c);

int angle;
scanf("%d",&angle);

if(a==b && b==c && c==a && angle!=90)
printf("THE TRIANGLE IS EQILATERAL");
else if(a==b && b==c || c==a && angle!=90)
printf("THE TRIANGLE IS ISOCELES");
else if(a!=b && b!=c && c!=a && angle!=90)
printf("THE TRIANGLE IS SCALENE");
else if(a*a==b*b+c*c && angle==90)
printf("THE TRIANGLE IS RIGHT ANGLED");
return 0;


}
