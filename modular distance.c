//MODULAR PROGRAM TO COMPUTE DISTANCE BW TWO POINTS
# include<stdio.h>
# include<math.h>
float distance(float x1,float x2,float y1,float y2)
{
float d;
d=sqrt((pow(x2-x1,2))+(pow(y2-y1,2)));
//printf("%f",d);
return d;
}
int main()
{
float x1,x2,y1,y2,d;
printf("ENTER x1,x2,y1,y2\n");
scanf("%f%f%f%f",&x1,&x2,&y1,&y2);
d=distance(x1,x2,y1,y2);
printf("\t\tDISTANCE=%0.2f\n\n",d);
return 0;
}

