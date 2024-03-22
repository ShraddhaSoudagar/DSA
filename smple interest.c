#include<stdio.h>
# include<conio.h>
# include<math.h>
# include<float.h>
void main()
{
float i,principal,rate,time;
printf("ENTER PRINCIPAL AMT:\nRATE OF INTEREST:\nTIME:");
scanf("%f %f %f",&principal,&rate,&time);
i=(principal*time*rate)/100.0;
printf("SIMPLE INTEREST=%0.2f",i);
getch();


}
