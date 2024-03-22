# include<stdio.h>
# include<math.h>
# include<float.h>
# define basic_salary 1500.0
//BS-basic_salary;
int main()
{
int no_of_comp_sold;
float price,bonus_amt,commission,gross_salary;
printf("ENTER THE VALUE OF ONE COMPUTER:");
scanf("%f",&price);
printf("ENTER THE NUMBER OF COMPUTERS SOLD IN A MONTH:");
scanf("%d",&no_of_comp_sold);
bonus_amt=200.0*no_of_comp_sold;
//printf("bonus=%f",bonus_amt);
commission=(2.0/100)*(price*no_of_comp_sold);
gross_salary=basic_salary+bonus_amt+commission;
printf("THE GROSS SALARY OF THE SALES PERSON=%0.2f",gross_salary);
return 0;






}
