# include<stdio.h>
# include<ctype.h>
float cost(int unit,float price)
{
return(1+(unit*price));
}
float total(char type)
{
    float price;
if (type=='B')
price=25;
else if(type=='C')
price=30;
else if(type=='S')
price=50;
else if(type=='M')
price=45;
else
    price=0;
return price;
}
int main()
{
int unit;char type;
float c,price;
printf("ENTER TYPE\nENTER UNITS PURCHASED\n");
scanf("%c %d",&type,&unit);
type=toupper(type);
price=total(type);
c=cost(unit,price);
printf("TOTAL COST=%0.2f\n",c);
return 0;
}
