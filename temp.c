/*program to check weather condition*/;

# include<stdio.h>
int main()
{
    float temp_f,temp_c;
    printf("ENTER THE TEMPERATURE IN FAHRENHEIT:");
    scanf("%f",&temp_f);
    temp_c=(5.0/9)*(temp_f-32);
    if(temp_c<0)
        printf("FREEZING");
    else if(temp_c>=0 && temp_c<10)
        printf("VERY COLD");
    else if(temp_c>=10 && temp_c<20)
        printf("COLD");
    else if(temp_c>=20 && temp_c<30)
        printf("NORMAL");
    else if(temp_c>=30 && temp_c<40)
        printf("HOT");
    else if(temp_c>=40 )
    printf("VERY HOT");

    return 0;






}
