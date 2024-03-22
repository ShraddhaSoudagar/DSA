# include<stdio.h>
int main()
{
float petrol_price,mileage=14.00,amt=1066.64,distance,petrol_litres;
printf("enter petrol price:");
scanf("%f",&petrol_price);
petrol_litres=amt/petrol_price;
distance=petrol_litres*mileage;
printf("distance=%0.2f",distance);
getch();









}
