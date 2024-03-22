//c program to find temp in celsius
# include<stdio.h>
float temp_c(float temp_f)
{


return 5.0/9*(temp_f-32);
}
void weather(float c)
{
    if(c<0)
        printf("FREEZING\n");
   else if(c>=0 && c<10)
        printf("VERY COLD\n");
    else if(c>=10 && c<20)
        printf("COLD\n");
    else if(c>=20 && c<30)
        printf("NORMAL\n");
    else if(c>=30 && c<40)
        printf("HOT\n");
    else if(c>=40)
        printf("VERY HOT\n");

}
int main()
{
float temp_f,c;
scanf("%f",&temp_f);
c=temp_c(temp_f);
printf("TEMPERATURE IN CELSIUS=%0.2f\n",c);
weather(c);
return 0;
}
