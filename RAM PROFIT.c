/*C program to calculate profit earned by Ram*/;
# include<stdio.h>
int main()
{
float buy_price=4000.0,selling_price,discount_amt,total_selling,profit;
selling_price=4000.0+(28/100.0)*4000.0;
discount_amt=(12/100.0)*selling_price;
total_selling=selling_price-discount_amt;
profit=total_selling-4000.0;
printf("PROFIT=%0.2f",profit);
return 0;






}
