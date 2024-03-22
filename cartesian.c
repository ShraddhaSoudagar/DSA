# include<stdio.h>
int main()
{
int x,y;
printf("ENTER VALUE OF x:\n y:");
scanf("%d %d",&x,&y);
if(x>0 && y>0)
printf("THE CO-ORDINATES LIE IN THE FIRST QUADRANT ");
else if(x<0 && y>0)
printf("THE CO-ORDINATES LIE IN THE SECOND QUADRANT");
else if(x<0 && y<0)
printf("THE CO-ORDINATES LIE IN THE THIRD QUADRANT");
else
printf("THE CO-ORDINATES LIE IN THE FOURTH QUADRANT");
return 0;


}
