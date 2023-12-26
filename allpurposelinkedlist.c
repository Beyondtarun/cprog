#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
typedef struct node
{
    int data;
    struct node *next;
} link;
struct node *newNode, *head = NULL, *temp = NULL;
int choice = 1, count = 0, size = 0;
// function prototype
void create();
void display();
void insert();
void insertbeg();
void insertpos();
void insertend();
void delete();
void deletebeg();
void deleteend();
void deletepos();
void reverse();

// main function
void main()
{
    char c[3];
    int menuchoice, displaychoice = 1;
    printf("\n===============================================");
    printf("\n\tSINGLE LINKED LIST ALL OPERATIONS");
    printf("\n===============================================");

    printf("\n\n\n\n\n\t\t\t\t INITIATE SYSTEM? (YES/NO)?\t");
    scanf("\t%s", c);
    if (strcmpi(c, "no") == 0)
    {
        exit(0);
    }
    else if (strcmpi(c, "yes") == 0)
    {
        while (displaychoice == 1)
        {
            printf("\n\t---------MAIN MENU---------");
            printf("\n\t1: Create");
            printf("\n\t2: Display");
            printf("\n\t3: Insert");
            printf("\n\t4: Delete");
            printf("\n\t5: Reverse");
            printf("\n\t6: Sort");
            printf("\n\t7: Size");
            printf("\n\tENTER YOUR CHOICE: ");
            scanf("%d", &menuchoice);

            switch (menuchoice)
            {
            case 1:
                create();
                break;
            case 2:
                display();
                break;
            case 3:
                insert();
                break;
            case 4:
                delete ();
                break;
            case 5:
                reverse();
                break;
            case 7:
                printf("\n\t Size is: %d", size);
                break;
            default:
                printf("\n\t WRONG CHOICE");
                break;
            }
            printf("\n\n\tIF YOU WANT TO CONTINUE PRESS 1 OTHER WISE 0:");
            scanf("%d", &displaychoice);
        }
    }
    else
    {
        exit(0);
    }
}
// mainend

// function definations
void create()
{
    while (choice == 1)
    {

        newNode = (link *)malloc(sizeof(link));
        printf("\n\tEnter data: ");
        scanf("%d", &newNode->data);
        newNode->next = NULL;

        if (head == NULL)
        {
            head = newNode;
            temp = head;
        }
        else
        {
            temp->next = newNode;
            temp = newNode;
        }
        count++;
        printf("\n\tDo you want to enter more node is yes press 1 other wise 0:");
        scanf("%d", &choice);
    }
    printf("\n\tLinked list of %d nodes created successfully.", count);
    choice = 1;
    size = count;
}
// display function
void display()
{
    if (head == NULL)
    {
        printf("\n\tList is not created.\n\tFirst create the list then try again.");
    }
    else
    {
        count = 1;
        temp = head;
        while (temp != NULL)
        {
            printf("\n\tData of node %d is: %d ", count, temp->data);
            count++;
            temp = temp->next;
        }
    }
}

// insertiton in list
void insert()
{
    if (head == NULL)
    {
        printf("\n\tList is not created. \n\tFirst create the list then try again.");
    }
    else
    {
        int menuchoice;
        printf("\n\t-------INSERT MENU------");
        printf("\n\t1: insert at begnning.");
        printf("\n\t2: insert at any position.");
        printf("\n\t3: insert at end.");
        printf("\n\n\tENTER CHOICE:");
        scanf("%d", &menuchoice);
        switch (menuchoice)
        {
        case 1:
            insertbeg();
            break;
        case 2:
            insertpos();
            break;
        case 3:
            insertend();
            break;
        default:
            printf("\n\t WRONG CHOICE");
        }
    }
}
void insertbeg()
{

    newNode = (link *)malloc(sizeof(link));
    printf("\n\tEnter data: ");
    scanf("%d", &newNode->data);
    newNode->next = head;
    head = newNode;
    printf("\n\t NODE INSERTED");
}

void insertend()
{

    newNode = (link *)malloc(sizeof(link));
    printf("\n\tEnter data: ");
    scanf("%d", &newNode->data);
    newNode->next = NULL;
    temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    printf("\n\t NODE INSERTED");
}

void insertpos()
{
    int pos, i = 1;
    printf("\n\tEnter postion:");
    scanf("%d", &pos);
    if (pos < 1)
    {
        printf("\n\t please enter only natural number.");
    }
    else if (pos == 1)
    {
        insertbeg();
    }
    else if (pos == size + 1)
    {
        insertend();
    }
    else if (pos > size + 1)
    {
        printf("\n\t wrong postion as your entered postion is way more than total length of.");
    }
    else
    {
        newNode = (link *)malloc(sizeof(link));
        printf("\n\tEnter data: ");
        scanf("%d", &newNode->data);
        newNode->next = NULL;

        temp = head;
        while (i < pos - 1)
        { // for after postion while(i<pos)
            temp = temp->next;
            i++;
        }
        newNode->next = temp->next;
        temp->next = newNode;
        printf("\n\tNODE INSERTED.");
    }
}

// deletion n list
void delete()
{
    if (head == NULL)
    {
        printf("\n\tList is not created. \n\tFirst create the list then try again.");
    }
    else
    {
        int menuchoice;
        printf("\n\t-------DELETE MENU------");
        printf("\n\t1: Delete at begnning.");
        printf("\n\t2: Delete at any position.");
        printf("\n\t3: Delete at end.");
        printf("\n\n\tENTER CHOICE:");
        scanf("%d", &menuchoice);
        switch (menuchoice)
        {
        case 1:
            deletebeg();
            break;
        case 2:
            deletepos();
            break;
        case 3:
            deleteend();
            break;
        default:
            printf("\n\t WRONG CHOICE");
        }
    }
}

void deletebeg()
{
    temp = head;
    head = head->next;
    free(temp);
    printf("\n\t FIRST NODE DELETED.");
}

void deleteend()
{
    link *prevNode = NULL;
    temp = head;
    while (temp->next != NULL)
    {
        prevNode = temp;
        temp = temp->next;
    }
    if (temp == head)
    {
    }
    else
    {
        prevNode->next = NULL;
    }
    free(temp);
    printf("\n\t END NODE DELETED.");
}

void deletepos()
{
    int i = 1, pos;
    link *prevNode;
    temp = head;
    printf("\n\tEnter postion:");
    scanf("%d", &pos);
    if (pos < 1)
    {
        printf("\n\t please enter only natural number.");
    }
    else if (pos == 1)
    {
        deletebeg();
    }
    else if (pos == size + 1)
    {
        deleteend();
    }
    else if (pos > size + 1)
    {
        printf("\n\t wrong postion as your entered postion is way more than total length of.");
    }
    else
    {
        while (i < pos)
        {
            prevNode = temp;
            temp = temp->next;
            i++;
        }
        prevNode->next = temp->next;
        free(temp);
        printf("\n\t NODE %d DELETED.", pos);
    }
}

void reverse()
{
    link *prevNode = NULL, *currentNode, *nextNode;
    if (head == NULL)
    {
        printf("\n\t LIST IS EMPTY.");
    }
    else
    {
        currentNode = nextNode = head;
        while (nextNode != NULL)
        {
            nextNode = nextNode->next;
            currentNode->next = prevNode;
            prevNode = currentNode;
            currentNode = nextNode;
        }
        printf("\n\t LINK REVERSED SUCCESSFULL.");
    }
    head = prevNode;
}