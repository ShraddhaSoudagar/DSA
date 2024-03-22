#include<stdio.h>
# include<string.h>
# include<stdlib.h>
typedef struct
{
char name[20];
char title[20];
char acc_num[10];
float price;
int status;
}book;
void read(book b[10],int n)
{
    printf("ENTER DETAILS OF THE BOOK\n");
for(int i=0;i<n;i++){
scanf("%s %s %s %f %d",b[i].name,b[i].title,b[i].acc_num,&b[i].price,&b[i].status);
printf("enter\n");}
return;
}

void display(book b[10],int n)
{
for(int i=0;i<n;i++)
printf("%s\t %s\t %s\t %0.2f\t %d\n",b[i].name,b[i].title,b[i].acc_num,b[i].price,b[i].status);
//printf("\n");
return;
}

void display_auth(book b[10],int n,char key_auth[20])
{
for(int i=0;i<n;i++)
{
if(strcmp(key_auth,b[i].name)==0){
printf("%s %s %s %f %d",b[i].name,b[i].title,b[i].acc_num,b[i].price,b[i].status);
printf("\n");
}
break;
}

printf("AUTHOR NOT FOUND\n");
return;
}

void display_acc(book b[10],int n,char key_accnum[10])
{
for(int i=0;i<n;i++)
{
if(strcmp(key_accnum,b[i].acc_num)==0){
printf("\n%s",b[i].title);
}
break;
}
printf("BOOK NOT FOUND\n");

return ;
}

void sort(book b[10],int n)
{
    book temp;
for(int i=0;i<n-1;i++)
{
    for(int j=0;j<n-1-i;j++)
    {
    if(strcmp(b[j].acc_num,b[j+1].acc_num)>0)
    {
        temp=b[j];
        b[j]=b[j+1];
        b[j+1]=temp;

    }
   }
}
}

int main()
{
int n,opt;
char key_auth[20],key_accnum[10];
book b[10];
printf("1.ADD BOOK INFORMATION\n2.DISPLAY BOOK INFORMATION\n3.LIST THE BOOKS FOR A GIVEN AUTHOR\n4.LIST THE TITLE OF SPECIFIED BOOK\n5.LIST THE books in order of accession number\n6.EXIT\n ");
while(1)
{
printf("ENTER THE OPTION\n");
scanf("%d",&opt);
switch(opt)
{
case 1:printf("ENTER NUMBER OF BOOKS\n");
        scanf("%d",&n);
        read(b,n);
        break;

case 2:printf("DISPLAYING INFORMATION\n");
        display(b,n);
        break;
case 3:printf("ENTER AUTHOR NAME TO SEARCH\n");
        scanf("%s",key_auth);
        display_auth(b,n,key_auth);
        break;

 case 4:printf("ENTER KEY ACCESSION NUMBER\n");
        scanf("%s",key_accnum);
        display_acc(b,n,key_accnum);
        break;

 case 5:sort(b,n);
        display(b,n);
 case 6:exit(0);
 default : printf("\nINVALID INPUT");

}
}//end of while
return 0;
}




