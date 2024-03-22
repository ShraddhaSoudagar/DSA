/*PROGRAM TO CALCULATE INCOME TAX*/
# include<stdio.h>
int main()
{
float income,tax_amt;
printf("ENTER INCOME OF THE EMPLOYEE:");
scanf("%f",&income);
    if(income>=0 && income<=200000)
        printf("NO TAX");
    else if(income>200000 && income<=500000)
        tax_amt=0.1*(income-200000);
    else if(income>500000 && income<=800000)
        tax_amt=30000+(0.2*(income-500000));
    else if(income>800000 && income<=1000000)
        tax_amt=90000+0.3*(income-800000);
    else
        tax_amt=150000+0.4*(income-1000000)+(0.02*income);

printf("INCOME TAX=%0.2f",tax_amt);
return 0;




}
