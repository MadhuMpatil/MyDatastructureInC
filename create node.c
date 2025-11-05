#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node* next;
};
struct Node* head=NULL;
int main()
{
    head=(struct Node*)malloc(sizeof(struct Node));
    head->data=10;
    head->next=NULL;
    printf("Node created %d",head->data);
}
