#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

// Create Linked List
struct node *creation(struct node *head){
    int n;
    printf("Enter number of nodes you want in the linkedlist:\n");
    scanf("%d",&n);

    struct node *temp = NULL;

    for(int i = 0; i < n; i++){
        int value;
        printf("Enter value:\n");
        scanf("%d",&value);

        struct node *newnode = (struct node*)malloc(sizeof(struct node));
        newnode->data = value;
        newnode->next = NULL;

        if(head == NULL){
            head = newnode;
            temp = newnode;
        } else {
            temp->next = newnode;
            temp = newnode;
        }
    }
    return head;
}
struct node* rotate(struct node *head){
    int k;
    printf("Enter number of rotations:\n");
    scanf("%d",&k);

    if(head == NULL || head->next == NULL || k == 0)
        return head;

    struct node *temp = head;
    int length = 1;
    while(temp->next != NULL){
        temp = temp->next;
        length++;

    }
    temp->next = head;
    k = k % length;
    int steps = length - k;
    struct node *newLastnode = head;
    for(int i = 1; i < steps; i++){
        newLastnode = newLastnode->next;
    }

    head = newLastnode->next;
    newLastnode->next = NULL;

    return head;

}
void display(struct node *head){
    struct node *temp = head;

    while(temp != NULL){
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}
int main(){
    struct node *head = NULL;
    head = creation(head);

    printf("Original List:\n");
    display(head);

    head = rotate(head);
    printf("linkedlist after Rotation:\n");

    display(head);
    return 0;
}