//C PROGRAM TO FIND WORKING EFFICIENCY
# include<stdio.h>
void eff(float hrs)
{
if(hrs>=2 && hrs<=3)
printf("HIGHLY EFFICIENT\n");
else if(hrs>3 && hrs<=4)
printf("NEEDS IMPROVEMENT\n");
else if(hrs>4 && hrs<=5)
printf("REQIRES TRAINING\n");
else if(hrs>5)
printf("LEAVE COMPANY\n");

return 0;
}
int main()
{
float hrs;
printf("ENTER HOURS\n");
scanf("%f",&hrs);
eff(hrs);
return 0;

}
