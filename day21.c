// QUESTION Create and Traverse Singly Linked List
#include<stdio.h>

#include<string.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
int main(){
    struct node *head=NULL;
    struct node *first=(struct node*)malloc(sizeof(struct node));


    struct node *second=(struct node*)malloc(sizeof(struct node));
    struct node *third=(struct node*)malloc(sizeof(struct node));
    if(head==NULL){
        head=first;
        first->data=151;
        first->next=second;
        second->data=251;
        second->next=third;
        

        third->data=551;
        third->next=NULL;
    }
    struct node *ptr=head;
    while(ptr!=NULL){
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
    return 0;
}