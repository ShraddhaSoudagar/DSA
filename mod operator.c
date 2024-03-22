# include<stdio.h>
float one(float num1,float num2)
{
float result;
result=num1+num2;
return result;
}
float two(float num1,float num2)
{
float result;
result=num1/num2;
return result;
}
float three(float num1,float num2)
{
float result;
result=num1*num2;
return result;
}
float four(float num1,float num2)
{
float result;
result=num1-num2;
return result;
}
int main()
{
int invalid_operator=0;
char operator;
float num1,num2,result;
printf("enter the operator,num1,num2\n");
scanf("%c %f %f",&operator,&num1,&num2);
    if(operator == '*')
        result=one(num1,num2);
    else if(operator == '%')
        result=two(num1,num2);
    else if(operator == '+')
        result=three(num1,num2);
    else if(operator == '-')
        result=four(num1,num2);
    else
        invalid_operator=1;

//if(invalid_operator==1)
printf("%0.2f %c %0.2f is %0.2f\n",num1,operator,num2,result);
return 0;
}
