# include<stdio.h>
# include<ctype.h>
int main()
{
char designation;
float salary,increament,total_salary;
printf("ENTER DESIGNATION:");
scanf("%c",&designation);
if(designation=='S' || designation=='A' || designation=='P' )
{
printf("ENTER SALARY:");
scanf("%f",&salary);

switch(designation)
{
//case 's':
case 'S':
    printf("\n\nSOFTWARE DEVELOPER\n\n");
    if(salary>=100000 && salary<=200000)
    {
     increament=salary*0.05;
     total_salary=salary+increament;
    }
    else if(salary>=70000 && salary<100000)
    {
     increament=salary*0.03;
     total_salary=salary+increament;
    }
     else if(salary>=40000 && salary<70000)
    {
     increament=salary*0.03;
     total_salary=salary+increament;
    }
     printf("TOTAL SALARY=%0.2f\n\n",total_salary);
     break;

  //case 'a':
  case 'A':
    printf("\n\nANDROID DEVELOPER\n\n");

    if(salary>=80000 && salary<=160000)
     {
      increament=salary*0.04;
    total_salary=salary+increament;
    }
    else if(salary>=50000 && salary<80000)
     {
      increament=salary*0.04;
    total_salary=salary+increament;
    }
    printf("TOTAL SALARY=%0.2f\n\n",total_salary);
    break;


    case 'P':
    printf("\n\nPROJECT DEVELOPER\n\n");

    if(salary>=100000 && salary<=200000)
     {
      increament=salary*0.09;
    total_salary=salary+increament;
    }
    else if(salary>=60000 && salary<=80000)
     {
      increament=salary*0.07;
    total_salary=salary+increament;
    }
    else if(salary>=40000 && salary<60000)
    {
    increament=salary*0.05;
    total_salary=salary+increament;

    }
    printf("TOTAL SALARY=%0.2f\n\n",total_salary);
    break;


     default:
     printf("INVALID INPUT\n\n");
}
}
else
    printf("INVALID INPUT\n\n");
return 0;
}
