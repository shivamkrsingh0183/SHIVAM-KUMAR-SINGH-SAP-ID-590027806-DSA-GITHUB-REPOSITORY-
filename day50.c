#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *left;
    struct node *right;
};
struct node *creation(){
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    int value;
    printf("enter value(-1 for null)\n");

    scanf("%d",&value);
    if(value==-1){
        return NULL;
    }
    else{
        newnode->data=value;
        printf("enter left node for %d \n",value);
        newnode->left=creation();
      printf("enter right node for %d\n",value);

      newnode->right=creation();
    }
    return newnode;
}

struct node  *search(struct node *root,int value){
    if(root==NULL){
        printf("data is not found in the tree\n");
        return NULL;
    }
    if(root->data==value){
        printf("data is found in the tree %d\n",value);
        return root;
    }
        else if(root->data<value){
            return search(root->right,value);
        }
        else if(root->data>value){
            return search(root->left,value);
        }
        
}




int main(){
    struct node *root=NULL;

    root=creation();
    int value;


    printf("enter the value you want to search in the tree:\n");
    scanf("%d",&value);
    search(root,value);
    return 0;
}