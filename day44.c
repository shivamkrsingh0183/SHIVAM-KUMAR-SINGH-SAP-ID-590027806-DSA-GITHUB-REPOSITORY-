#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *left;
    struct node *right;
};
struct node *creation(){
    int value;
    printf("enter value for the newnode(-1 for NULL)\n");
    scanf("%d",&value);


    if(value==-1){
        return NULL;
    }
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=value;
    printf("enter left node for %d\n",value);
    newnode->left=creation();
    printf("enter right node for %d\n",value);
    newnode->right=creation();


    return newnode;
}
void preorder(struct node *root){
    if(root==NULL){
        return;
    }
    printf("%d ",root->data);
    preorder(root->left);
    preorder(root->right);
    
}
void postorder(struct node *root){
    if(root==NULL){
        return;
    }
    
        postorder(root->left);
        postorder(root->right);
        printf("%d ",root->data);
   
}
void inorder(struct node *root){
    if(root==NULL){

        return;
    }
        inorder(root->left);
        printf("%d ",root->data);
        inorder(root->right);
}
int main(){
    struct node *root=NULL;

    root=creation();
    int choice;
    printf("enter your choice for tree traversal\n");
    printf("1:preorder\n");
    printf("2:postorder\n");
    printf("3:inorder\n");
    scanf("%d",&choice);
    if(choice==1){


        preorder(root);
    }
    else if(choice==2){
        postorder(root);
    }
    else if(choice==3){
        inorder(root);


        

        
    }
return 0;
}