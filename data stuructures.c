# include<stdio.h>
struct mobile
{
char mobile_name[20];
char colour[20];
float price;
float screen_display;
int battery;
char network_type[5];
};

int main()
{
struct mobile s1;
gets(s1.mobile_name);
gets(s1.colour);
gets(s1.network_type);
scanf("%f %f %d",&s1.price,&s1.screen_display,&s1.battery);
printf("\nMOBILE NAME=%s\nCOLOUR=%s\nNETWORK TYPE=%s\nPRICE=%f\nSCREEN DISPLAY=%f\nBATTERY=%d\n",s1.mobile_name,s1.colour,s1.network_type,s1.price,s1.screen_display,s1.battery);
return 0;

}
