# include<stdio.h>
int main(){
struct address
{
char phone[15];
char city[25];
int pin;
}*a;
//struct address *a;
//a=&struct address a;
struct emp
{
char name[25];
struct address *a;
};
struct emp e={"jeru","531408","nagpur",10};
printf("%s  %s  %s   %d",e.name,e.a->phone,e.a->city,e.a->pin);
return 0;
}
