#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef struct
{
char name[20];
int a1;
int a2;
int a3;
int a4;
int total;
}student;
void read(student *s,int n)
{
for(int i=0;i<n;i++)
{
printf("ENTER STUDENT DETAILS\n");
scanf("%s %d %d %d %d",s->name,&s->a1,&s->a2,&s->a3,&s->a4);
s++;
}
return;
}

void display(student *s,int n)
{
for(int i=0;i<n;i++)
{
printf("\n%s\t\t%d %d %d %d\t%d",s->name,s->a1,s->a2,s->a3,s->a4,s->total);
s++;
}
return;
}

void total_marks(student *s,int n)
{
for(int i=0;i<n;i++)
{
s->total=s->a1+s->a2+s->a3+s->a4;
s++;
}
return;
}

void sort(student *s,int n)
{
student *z;
student temp;
z=s;
for(int i=0;i<n-1;i++)
{
    for(int j=0;j<n-1-i;j++)
    {
        if(s->total < (s+1)->total)
        {
            temp=*s;
            *s=*(s+1);
            *(s+1)=temp;
        }
        s++;
    }
    s=z;
}
return;
}

int main()
{
student *s;
int n;
printf("ENTER n\n");
scanf("%d",&n);
s=(student *)malloc(n*sizeof(student));
if(n>0)
{
read(s,n);
total_marks(s,n);
sort(s,n);
printf("Rank list\n");
display(s,n);
}
else
printf("INVALID INPUT\n");
return 0;
}
