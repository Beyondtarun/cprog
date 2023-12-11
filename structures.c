//program for dynamic memory structure

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
struct stud{
    int id;
    char name[10];
};
void main()
{   
  struct stud* s;
  int n;
  printf("\n\t how many records do you want to enter: ");
  scanf("%d",&n);

  s=(struct stud*)malloc(n*sizeof(struct stud));
     for(int i=0; i<n; i++){
        printf("\n\t ENTER THE ID OF %d student: ",i+1);
        scanf("%d",&s[i].id);
        printf("\n\t ENTER THE NAME OF %d student: ",i+1);
        scanf("%s",&s[i].name);
     }

     
printf("---------------------------------------------------");
     for(int i=0; i<n;i++){
        printf("\n\t ID OF STUDENT %d is: %d \n",i+1, s[i].id);
        printf("\n\t NAME OF STUDNET %d is: %s\n",i+1, s[i].name);
        printf("---------------------------------------------------");
     }

    getch(); 
}