# include<stdio.h>
# include<ctype.h>
int main()
{
char type;
float charge;
int no_of_days;
printf("ENTER TYPE OF LIBRARY:");
scanf("%c",&type);
printf("ENTER NUMBER OF DAYS DELAYED:");
scanf("%d",&no_of_days);
switch(type)
{
    case 'c':
    case 'C':
    printf("\t\t\tCENTRAL LIBRARY\n\n");
    if(no_of_days<=5)
    charge=no_of_days*0.50;
    else if(no_of_days>5 && no_of_days<=10)
    charge=5*0.50+(no_of_days-5)*1;
    else if(no_of_days>10 && no_of_days<=15)
    charge=5*0.50+5*1+(no_of_days-10)*5;
    else if(no_of_days>15 )
    printf("\t\t\tMEMBERSHIP CANCELLED\n");
    if(no_of_days<=15)
    printf("\t\t\tTOTAL FINE=%0.2f\n\n",charge);
    break;

    case 'm':
    case 'M':
    printf("\t\t\tMAIN LIBRARY\n\n");
    if(no_of_days<=5)
    charge=no_of_days*1;
    else if(no_of_days>5 && no_of_days<=10)
    charge=5*1+(no_of_days-5)*2;
    else if(no_of_days>10 && no_of_days<=15)
    charge=5*1+5*2+(no_of_days-10)*10;
    else if(no_of_days>15 )
    printf("\t\t\tYOU CANNOT BORROW BOOK ANYMORE");
    if(no_of_days<=15)

    printf("\t\t\tTOTAL FINE=%0.2f\n\n",charge);
    break;




    default:printf("invalid input");
}

return 0;
}
