//program for  all operation in link list
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct node{
    char name[20];
    int id;
    struct node* next;
}link;
link* head;
void main(){
link* newNode;
newNode=(link*)malloc(sizeof(link*));
printf("\n\t enter name:");
scanf("%s",&newNode->name);
printf("\n\t enter id:");
scanf("%d",&newNode->id);
printf("\n\n\t name is : %s",newNode->name);
printf("\n\n\t id is: %d",newNode->id);
getch();
}