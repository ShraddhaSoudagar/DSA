# include<stdio.h>
 struct virus
{
char signature[25];
char status[20];
int size;
};
void read(struct virus *v)
{
    scanf("%s %s %d",v->name,v->status,&v->size);
}
void display(struct virus *v)
{
    printf("%s %s %d",v->name,v->status,&v->size);
}
int main()
{



}
/*int main()
{
for(int i=0;i<=1;i++)
printf("\n%s %s",v[i].signature,v[i].status);
return 0;
}
