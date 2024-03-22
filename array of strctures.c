#include<stdio.h>
typedef struct
{
char name[20];
int age;
int runs;
}PLAYER;

void read(PLAYER p[10],int n)
{
for(int i=0;i<n;i++)
scanf("%s %d %d",p[i].name,&p[i].age,&p[i].runs);
return;
}

void display(PLAYER p[10],int n)
{
for(int i=0;i<n;i++)
printf("%s\n%d\n%d",p[i].name,p[i].age,p[i].runs);
printf("\n");
return;
}

PLAYER max(PLAYER p[10],int n)
{
    PLAYER temp;
   int m=p[0].runs,c=0;
for(int i=1;i<n;i++)
{
    if(p[i].runs>m)
    {
        m=p[i].runs;
        strcpy(temp.name,p[i].name);
        temp.age=p[i].age;
        temp.runs=p[i].runs;
    }
    return temp;
}

int main()
{
PLAYER p[10],temp;
int n,m;
printf("ENTER NUMBER OF STRUCTURES\n");
scanf("%d",&n);
read(p,n);
display(p,n);
temp=max(p,n);
printf("\n%s %d %d",temp.name,&temp.age,&temp.runs);
//display();
//printf("\nMAXIMUM RUNS=%d",&m);
return 0;
}
