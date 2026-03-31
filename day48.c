#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *left;
    struct node *right;
};
struct node *creation(){
    int value;
    printf("enter value (-1 for null)\n");
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
int count_leaf_nodes_in_the_tree(struct node *root){
    if(root==NULL){
        return 0;

    }
   else if(root->left==NULL && root->right==NULL){
       return 1;
    }
    else{
         return count_leaf_nodes_in_the_tree(root->left)+count_leaf_nodes_in_the_tree(root->right);
    }
}
int main(){
    struct node *root=NULL;
    root=creation();
    int leaf_nodes_in_the_tree=count_leaf_nodes_in_the_tree(root);
    printf("total number of leaf nodes in the tree:%d\n",leaf_nodes_in_the_tree);
    return 0;
}