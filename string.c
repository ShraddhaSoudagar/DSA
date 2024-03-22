#include<stdio.h>
#include<string.h>
void swap(char s1[10],char s2[10])
{
    char temp[10];
    strcpy(temp,s1);
    strcpy(s1,s2);
    strcpy(s2,temp);
    printf("swap%s\n%s",s1,s2);
    return;
}

void compare(char s1[10],char s2[10])
{
  if(strcmp(s1,s2)==0)
    printf("\nequal\n");
//else
  //  printf("\nnot equal");
    return;

}

int main()
{
    char s1[10],s2[10];
    printf("enter s1 and s2\n");
    gets(s1);
    gets(s2);

printf("%d\n",strlen(s1));
printf("%d\n",strlen(s2));



    swap(s1,s2);
printf("\n%s",strcat(s1,s2));
compare(s1,s2);


return 0;

}
