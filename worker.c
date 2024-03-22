/*program to check efficiency of the worker*/;
# include<stdio.h>
int main()
{
float time;
printf("ENTER THE TIME TAKEN:");
scanf("%f",&time);
if(time>=2 && time<3)
printf("WORKER IS HIGHLY EFFICIENT");
else if(time>=3 && time<4)
printf("IMPROVE SPEED");
else if(time>=4 && time<=5)
printf("REQUIRES TRAINING");
else
printf("LEAVE THE COMPANY");
return 0;




}
