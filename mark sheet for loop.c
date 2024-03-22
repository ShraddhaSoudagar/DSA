# include<stdio.h>
# include<conio.h>
# include<math.h>
# include<ctype.h>
# include<string.h>
# include<float.h>
void main()
{
char name[50],dob[20],grade_1[3],grade_2[3],grade_3[3],grade_4[3],grade_5[3],grade_6[3];
int reg;
float percentage;
int kan_marks,eng_marks,phy_marks,chem_marks,math_marks,bio_marks;
for(int i=1;i<=3;i++)
{
    printf("%d\n",i);
printf("ENTER CANDIDATE'S REGISTER NUMBER:");
scanf("%d",&reg);
printf("ENTER CANDIDATE'S NAME:'");
scanf("%s",name);
printf("ENTER CANDIDATE'S DATE OF BIRTH:");
scanf("%s",dob);
int total=0;
//for(marks=1;marks<=6;marks++)
//{
printf("ENTER KAN: ENG: PHY: CHEM: MATHS: BIO:");
scanf("%d %d %d %d %d %d",&kan_marks,&eng_marks,&phy_marks,&chem_marks,&math_marks,&bio_marks);

if(kan_marks>=90)
    strcpy(grade_1,"A+");


else if(kan_marks>=80 && kan_marks<=89)
    strcpy(grade_1,"A");
   else if (kan_marks>=65 && kan_marks<=79)
     strcpy(grade_1,"B+");

else if (kan_marks>=50 && kan_marks<=64)
     strcpy(grade_1,"B");

else if (kan_marks>=35 && kan_marks<=49)
     strcpy(grade_1,"C");

 else
    strcpy(grade_1,"FAIL");
   // strcpy(grade_pt,"5.0");
if(eng_marks>=90)
    strcpy(grade_2,"A+");
    //strcpy(grade_pt,"10.0");
else if(eng_marks>=80 && eng_marks<=89 )
    strcpy(grade_2,"A");
   // strcpy(grade_pt,"9.0");
else if (eng_marks>=65 && eng_marks<=79)
     strcpy(grade_2,"B+");
     //strcpy(grade_pt,"8.0");
else if (eng_marks>=50 && eng_marks<=64)
     strcpy(grade_2,"B");
     //strcpy(grade_pt,"7.0");
else if (eng_marks>=35 && eng_marks<=49)
     strcpy(grade_2,"C");
     //strcpy(grade_pt,"6.0");
 else
    strcpy(grade_2,"FAIL");
    //strcpy(grade_pt,"5.0");
 if(phy_marks>=90)
    strcpy(grade_3,"A+");
    //strcpy(grade_pt,"10.0");
else if(phy_marks>=80 && phy_marks<=89 )
    strcpy(grade_3,"A");
    //strcpy(grade_pt,"9.0");
else if (phy_marks>=65 && phy_marks<=79)
     strcpy(grade_3,"B+");
    // strcpy(grade_pt,"8.0");
else if (phy_marks>=50 && phy_marks<=64)
     strcpy(grade_3,"B");
     //strcpy(grade_pt,"7.0");
 if (phy_marks>=35 && phy_marks<=49)
     strcpy(grade_3,"C");
     //strcpy(grade_pt,"6.0");
else
    strcpy(grade_3,"FAIL");
    //strcpy(grade_pt,"5.0");
  if(chem_marks>=90)
    strcpy(grade_4,"A+");
    //strcpy(grade_pt,"10.0");
else if(chem_marks>=80 && chem_marks<=89 )
    strcpy(grade_4,"A");
    //strcpy(grade_pt,"9.0");
else if (chem_marks>=65 && chem_marks<=79)
     strcpy(grade_4,"B+");
    // strcpy(grade_pt,"8.0");
else if (chem_marks>=50 && chem_marks<=64)
     strcpy(grade_4,"B");
     //strcpy(grade_pt,"7.0");
else if (chem_marks>=35 && chem_marks<=49)
     strcpy(grade_4,"C");
     //strcpy(grade_pt,"6.0");
 else
    strcpy(grade_4,"FAIL");
    //strcpy(grade_pt,"5.0");
  if(math_marks>=90)
    strcpy(grade_5,"A+");
    //strcpy(grade_pt,"10.0");
else if(math_marks>=80 && math_marks<=89 )
    strcpy(grade_5,"A");
   // strcpy(grade_pt,"9.0");
else if (math_marks>=65 && math_marks<=79)
     strcpy(grade_5,"B+");
     //strcpy(grade_pt,"8.0");
else if (math_marks>=50 && math_marks<=64)
     strcpy(grade_5,"B");
     //strcpy(grade_pt,"7.0");
else if (math_marks>=35 && math_marks<=49)
     strcpy(grade_5,"C");
     //strcpy(grade_pt,"6.0");
 else
    strcpy(grade_5,"FAIL");
   // strcpy(grade_pt,"5.0");
    if(bio_marks>=90)
    strcpy(grade_6,"A+");
    //strcpy(grade_pt,"10.0");
else if(bio_marks>=80 && bio_marks<=89 )
    strcpy(grade_6,"A");
    //strcpy(grade_pt,"9.0");
else if (bio_marks>=65 && bio_marks<=79)
     strcpy(grade_6,"B+");
     //strcpy(grade_pt,"8.0");
else if (bio_marks>=50 && bio_marks<=64)
     strcpy(grade_6,"B");
     //strcpy(grade_pt,"7.0");
else if (bio_marks>=35 && bio_marks<=49)
     strcpy(grade_6,"C");
     //strcpy(grade_pt,"6.0");
 else
    strcpy(grade_6,"FAIL");
    //strcpy(grade_pt,"5.0");

/*calculation part*/;
total=kan_marks+eng_marks+phy_marks+chem_marks+math_marks+bio_marks;
percentage=(total/600.0)*100.0;

//}
printf("---------------------------------------------------------------------------\n");
printf("\t\tPC JABIN COLLEGE OF SCIENCE\n\n");
printf("\t\t\tMARK SHEET\n");
printf("---------------------------------------------------------------------------\n\n");
printf("CANDIDATE'S REGISTER NUMBER:%d\n",reg);
printf("CANDIDATE'S NAME           :%s\n",name);
printf("CANDIDATE'S DATE OF BIRTH  :%s\n",dob);
printf("---------------------------------------------------------------------------\n\n");

printf("SL\tSUBJECT\t\tMAX\tMIN\t\tMARKS\tGRADE\n");
printf("NO\t\t\tMARKS\tMARKS\t\tOBT\n");
printf("---------------------------------------------------------------------------\n\n");
printf("1\t");
printf("KANNADA\t\t100\t35\t\t");
printf("%d\t",kan_marks);
printf("%s\n",grade_1);
printf("2\tENGLISH\t\t100\t35\t\t%d\t",eng_marks);
printf("%s\n",grade_2);

printf("3\tPHYSICS\t\t100\t35\t\t%d\t",phy_marks);
printf("%s\n",grade_3);

printf("4\tCHEMISTRY\t100\t35\t\t%d\t",chem_marks);
printf("%s\n",grade_4);

printf("5\tMATHS\t\t100\t35\t\t%d\t",math_marks);
printf("%s\n",grade_5);

printf("6\tBIOLOGY\t\t100\t35\t\t%d\t",bio_marks);
printf("%s\n",grade_6);

printf("----------------------------------------------------------------------------\n\n");
printf("\t\t\t\t\tTOTAL MARKS:%d\n\n",total);
printf("\t\t\t\t\tPERCENTAGE :%0.2f\n\n",percentage);
printf("---------------------------------------------------------------------------\n\n");


}

printf("\n");
getch();




}
