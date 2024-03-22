# include<stdio.h>
# include<conio.h>
# include<ctype.h>
# include<string.h>
void main()
{
int card_no=123456789,pin_no,amt,balance=100000,choice,choice_3,menu;
char wa;
printf("\n\n\n\t\t\t\t\tPLEASE INSERT YOUR CARD\n\n\n");
//printf("\t\t\tINSERT CARD OK\n");


printf("ENTER YOUR PIN NUMBER:");
scanf("%d",&pin_no);

if(pin_no==2013)
{
printf("\t\tPLEASE WAIT YOUR TRANSACTION IS BEING PROCESSED\n\n\n");
printf("-----------------------------------------------------------------\n");
printf("\t\t\t\tMAIN MENU\n\n\n");
printf("-----------------------------------------------------------------\n");
printf("\t<1>BALANCE INQIRY\t\t<2>FAST CASH\n\n");
printf("\t<3>PIN CHANGE\t\t\t<4>CASH WITHDRAWL\n\n");
printf("\t<5>UTILITY BILL PAYMENT\t\t<6>FUND TRANSFER\n\n");
printf("\t<7>OTHER SERVICES\t\t<8>MINI STATEMENT\n\n");

printf("SELECT FROM THE MAIN MENU:");
scanf("%d",&menu);
switch(menu)
{
case 1:
printf("\t\t\tBALANCE INQIRY\n");
//printf("PLEASE ENTER YOUR PIN NUMBER TO CHECK THE BALANCE\n\t\t\t:\n");
printf("BALANCE=%d\n\n\n",balance);
printf("\t\tTHANK YOU FOR VISITING\n");
break;

case 2:
printf("\t\t\tFAST CASH\n");
printf("PLEASE SELECT THE WITHDRAWL AMOUNT\n\n");
printf("\t\t<a>500\t\t\t<b>2000\n\n");
printf("ENTER CHOICE a or b:");
scanf("%c",&wa);
switch(wa)
{
case 'a':
printf("\t\trupees 500 is being processed\n");
printf("\t\t\tPLEASE WAIT\n");
break;

case 'b':
printf("\t\trupees 2000 is being processed\n");
printf("\t\t\tPLEASE WAIT\n");
break;

default:
printf("YOUR BALANCE IS NOT SUFFICIENT\n");
break;
}
break;

case 3:
printf("\t\t\tPIN CHANGE\n");
printf("PLEASE ENTER YOUR NEW PIN:\n");
printf("THANK YOU\n");
break;

case 4:
printf("\t\t\tCASH WITHDRAWL\n\n");
printf("PLEASE ENTER THE AMOUNT TO BE WITHDRAWN:");
scanf("%d",&amt);
printf("\t\t<1>YES\t\t<2>ERASE\t\t<3>CANCEL\n\n") ;
printf("\t\tSelect YES to continue\n\t\tSelect ERASE to clear\n\n");
printf("ENTER CHOICE:");
scanf("%d",&choice);
switch(choice)
{
case 1:
printf("YES\n\n");
//printf("\t\tDO YOU WANT RECIEPT FOR YOUR TRANSACTION?\n");
//printf("\t\t\t<1>YES\n\t\t\t<2>NO\n");
//printf("ENTER CHOICE:");
//scanf("%d",&choice_2);
//switch(choice_2)
//{
//case 1:
//printf("\tYOUR RECIEPT IS BEING PROCESSED\n\tPLEASE WAIT\n");
//break;

//case 2:
printf("\t\tPLEASE SELECT ACCOUNT TYPE\n\n");
printf("\t\t\t\t<1>CURRENT\n\n\t\t\t\t<2>SAVINGS\n\n");
printf("ENTER CHOICE:");
scanf("%d",&choice_3);
switch(choice_3)
{
case 1:
printf("\t\t\tCURRENT\n");
printf("\t\t\tPLEASE WAIT YOUR TRANSACTION IS BEING PROCESSED\n\n");
printf("\t\t\tPLEASE TAKE YOUR CARD BACK\n\n\n");
printf("\t\t\tTHANK YOU\n");
break;

case 2:
printf("\t\t\tSAVING\n\n");
printf("\t\t\tPLEASE WAIT YOUR TRANSACTION IS BEING PROCESSED\n\n\n");
printf("\t\t\tPLEASE TAKE YOUR CARD BACK\n\n\n\n");
printf("\t\t\tTHANK YOU\n");
break;

default:
printf("YOUR TRANSACTION IS SUSPENDED\n");
break;
}
break;




case 2:
printf("YOUR TRANSACTION IS CANCELED\n");
break;
}
break;

case 5:
printf("\t\t\tUTILITY BILL PAYMENT\n");
printf("THANK YOU\n");
break;

case 6:
printf("\t\t\tFUND TRANSFER\n");
printf("YOUR FUND HAS BEEN TRANSFERRED\n");
printf("THANK YOU\n");
break;

case 7:
printf("\t\t\tOTHER SERVISES\n");
printf("THANK YOU\n");
break;

case 8:
printf("\t\t\tMINI STATEMENT\n");
printf("YOUR TRANSACTION WAS SUCCESSFULL\n");
break;

default:
printf("YOUR TRANSACTION WAS CANCELLED\n");
printf("\t\t\tTHANK YOU\n");
break;
}

}
else
{
printf("YOUR PIN NUMBER IS NOT VALID\n");

}

getch();




}
