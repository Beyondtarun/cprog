#include <stdio.h>
#include <stdlib.h>
struct  emp{
int eid;
char ename[10];
float esal;
};
void main()
{
struct emp *s1;
int n,pos;
float max=0;

printf("enter how much element you want");
scanf("%d",&n);
s1= (struct emp*)malloc(n*sizeof(struct emp));

for(int i=0;i<n;i++)
{
    printf("\n enter the employee id ->");
    scanf("%d",&s1[i].eid);
    printf("enter the name of employee ->");
     scanf("%s",&s1[i].ename);
    printf("enter the salary of employee ->");
    scanf("%f",&s1[i].esal);
if(s1[i].esal > max)
{
    max= s1[i].esal;
    pos=i;
}
}
printf("\n the details of employee are");
for(int i=0;i<n;i++)
{
    printf("\n employee id ->%d",s1[i].eid);
   printf("\n enter the name of employee -> %s",s1[i].ename);
    printf("\n salary of employee -> %f",s1[i].esal);
}

printf(" \n ------------------the max salary employee details are-------------------");

 printf("\n employee id ->%d",s1[pos].eid);
   printf("\n enter the name of employee -> %s",s1[pos].ename);
    printf("\n salary of employee -> %f",s1[pos].esal);


}
