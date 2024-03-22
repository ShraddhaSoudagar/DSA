# include<stdio.h>
struct complex
{
float real;
float image;
};

struct complex read(struct complex c1)
{
scanf("%f %f",&c1.real,&c1.image);
return c1;
}
void display(struct complex c1)
{
printf("%f %f",c1.real,c1.image);
return;
}
struct complex sum(struct complex c1,struct complex c2)
{
struct complex c3;
c3.real=c1.real+c2.real;
c3.image=c1.image+c2.image;
return c3;
}
int main()
{
struct complex c1,c2,c3;
printf("ENTER \n");
c1=read(c1);
printf("ENTER \n");
c2=read(c2);
printf("\nDISPLAY c1 \n");
display(c1);
printf("\nDISPLAY c2 \n");
display(c2);
c3=sum(c1,c2);
printf("\n

       DISPLAY c3 \n");
display(c3);
return 0;

}
