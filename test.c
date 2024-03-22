# include<stdio.h>
int main()
{
    float i=20;
    float *j;
    *j=i;
    printf("%f\n",*j);
//printf("%u\n",&i);
   // printf("%d",*(&i));
    return 0;
}

