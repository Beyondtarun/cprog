#include <stdio.h>
#include <stdlib.h>
struct emp{
    int id;
    char name[10];
    float sal;
};
void main()
{
    struct emp e;
    struct emp* ptr;
    ptr = &e;
    int n;
    printf("how many record you want to enter: ");
    scanf("%d",&n);
 //printf("%d",sizeof(ptr));
 ptr = (struct emp*)malloc(n*sizeof(struct emp));
    for(int i=0;i<n;i++){
    printf("enter the id of employee : \n");
    scanf("%d",&ptr->id);
    printf("\n\t id of employee is: %d\n",ptr->id);
}
free(ptr);
}