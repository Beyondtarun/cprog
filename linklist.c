#include <stdio.h>
#include <stdlib.h>
typedef struct node{
    int data;
    struct node* next;
}link;

void main(){
int choice=1,count=0;
link* start=NULL,*temp=NULL;
link* newNode;
while(choice==1){
    count++;
    newNode=(link*)malloc(sizeof(link));
    printf("\n\tEnter data: ");
    scanf("%d",&newNode->data);
    newNode->next=NULL;
    
    if(start==NULL){
        start=newNode;
        temp=start;
    }
    else{
        temp->next=newNode;
        temp=newNode;
    }
    
    printf("\ndo you want to enter more node is yes press 1 other wise 0.");
    scanf("%d",&choice);
}

temp=start;
while(temp!=NULL){
    printf("\ndata of node is: %d",temp->data);  
    temp=temp->next;
}
//printf("\ndata of node is: %d",temp->data);
}