#include<stdio.h>
struct browser
{
char name[25];
char copyright[25];
float version;
};
//passing the whole structure
struct browser read(struct browser b1)
{
  gets(b1.name);
gets(b1.copyright);
scanf("%f",&b1.version);
return b1;
}
void display(struct browser b1)
{
printf("\n%s\n%s\n%0.2f",b1.name,b1.copyright,b1.version);
return;
}

int main()
{
//struct browser b1;
struct browser b;
b=read(b);
display(b);
return 0;
}
//passing one by one
//void display(char name[25],char copyright[25],float version)
//printf("\n%s\n%s\n%0.2f",b1.name,b1.copyright,b1.version);
//return;
//}
//int main()
//{
//struct browser b1={"CHROME","GOOGLE INC",71.0};
//display(b1.name,b1.copyright,b1.version);
//return 0;
//}
