#include <stdio.h>
#include <string.h>
struct stud{
    int id;
    char name[10];
};

void main()

{   
  struct stud s1;
  s1.id=1;
  strcpy(s1.name,"tarun");

    printf("id is: %d \n", s1.id);
    
    printf("%s", s1.name);  
}