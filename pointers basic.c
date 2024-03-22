# include<stdio.h>
int main()
{
int i=3;
int *j;
j=&i;
printf("\nAddress of i=%u",&i);
printf("\nAddress of i=%u",i);
printf("\nAddress of j=%u",&j);
printf("\nvalue of j=%d",j);
printf("\nvalue of i=%d",i);
printf("\nvalue of i=%d",*(&i));
printf("\nvalue of i=%d",*j);
return 0;
}
