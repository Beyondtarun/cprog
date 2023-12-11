//program to implement stack as an array

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int top=-1,choice=0,x,i,n,stack[10];
void push();
void pop();
void peak();
void display();

void main(){
    printf("\n\t STACK AS AN ARRAY");
    printf("\n\n\t Enter the size of stack:");
    scanf("%d",&n);
    while(choice!=5){
        printf("\n\n\t --------------MAIN MENU-----------");
        printf("\n\t 1: Push \n\t 2: Pop \n\t 3: Peak \n\t 4: Display \n\t 5: Exit");
        printf("\n\n\t\t ENTER CHOICE:");
        scanf("%d",&choice);
        switch(choice){
            case 1: push();
            break;
            case 2: pop();
            break;
            case 3: peak();
            break;
            case 4: display();
            break;
            case 5: exit(0);
            default: printf("\n\t WRONG CHOICE.");
        }
    }
}
void push(){
    if(top==n-1){
        printf("\n\t STACK IS IN OVERFLOW CONDITION.");
    }
    else{
        top++;
        printf("\n\t ENTER ELEMENT:");
        scanf("%d",&x);
        stack[top]=x;
    }
}
void pop(){
    if(top==-1){
        printf("\n\t STACK IS IN UNDERFLOW CONDITION\n");
    }
    else{
        printf("\n\t POPED ELEMENT IS %d.",stack[top]);
        top--;
    }
}

void peak(){

 if(top==-1){
        printf("\n\t STACK IS IN UNDERFLOW CONDITION\n");
    }
    else{
        printf("\n\t PEAK ELEMENT IS %d.",stack[top]);
}
}

void display(){
    if(top==-1){
        printf("\n\t NOTHING TO DISPLAY\n STACK IS EMPTY");
    }
    else{
        for(i=top;i>=0;i--){
        printf("\n\t ELEMENT IS %d.\n",stack[i]);
                }
}}