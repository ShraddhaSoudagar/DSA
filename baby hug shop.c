# include<stdio.h>
float discount(char type,float amt)
{
float dis_amt;
switch(type)
{
case 'T':
    if(amt>=1 && amt<=1000)
    dis_amt=0;
    else if(amt>1000 && amt<=10000)
    dis_amt=0.07*amt;
    else if(amt>10000)
    dis_amt=0.09*amt;
    break;

case 'C':
    if(amt>=0 && amt<=5000)
    dis_amt=0.03*amt;
    else if(amt>5000 && amt<=10000)
    dis_amt=0.08*amt;
    else if(amt>10000)
    dis_amt=0.15*amt;
    break;
}
return dis_amt;
}

float total_amt(float amt,float dis_amt)
{
float total;
total=amt-dis_amt;
return total;
}

int main()
{
float amt,dis_amt,total;
char type;
printf("ENTER THE TYPE OF THE ITEM\n");
scanf("%c",&type);
type=toupper(type);
if(type=='T' || type=='C')
{
    printf("ENTER PURCHASE AMOUNT\n");
    scanf("%f",&amt);

dis_amt=discount(type,amt);
total=total_amt(amt,dis_amt);
}
else
    printf("INVALID INPUT\n");

if( type=='T' || type=='C')
printf("\nTOTAL BILL =%0.2f\n",total);
return 0;
}
