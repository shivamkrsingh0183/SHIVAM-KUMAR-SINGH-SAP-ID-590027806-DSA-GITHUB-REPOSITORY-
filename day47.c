#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *left;
    struct node *right;
};
struct node *creation(){
    int value;
    printf("enter value(-1 for null)\n");
    scanf("%d",&value);


    if(value==-1){
        return NULL;
    }
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=value;
    printf("enter value for left node of %d\n",value);
    newnode->left=creation();
    printf("enter right node for %d\n",value);
    

    newnode->right=creation();
    return newnode;
}

int height_of_binary_tree(struct node *root){
    if(root==NULL){
        return 0 ;
    }
    
        int left_height_of_tree=height_of_binary_tree(root->left);
        int right_height_of_the_tree=height_of_binary_tree(root->right);
        if(left_height_of_tree>right_height_of_the_tree){
            return left_height_of_tree+1;
        }
        else{
            return right_height_of_the_tree+1;
        }
    
}



int main(){
    struct node *root=NULL;

    root=creation();
    int height_of_the_tree=height_of_binary_tree(root);
    printf("height of the binary tree is:%d\n",height_of_the_tree);
    return 0;
}