#include<stdio.h>
#include<stdlib.h>


struct node{
    int data;
    struct node *left;
    struct node *right;
};
struct node *creation(){
    int value;
    printf("enter value)-1 for null\n");


    scanf("%d",&value);
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    if(value==-1){
        return NULL;
    }
    newnode->data=value;
    printf("enter left node for %d\n",value);
    newnode->left=creation();
    printf("enter value for right node of %d\n",value);





    newnode->right=creation();
    return newnode;
}
int count_height_of_the_tree(struct node *root){
    if(root==NULL){
    return 0;
    }
    int left_height_of_the_tree=count_height_of_the_tree(root->left);
    int right_height_of_the_tree=count_height_of_the_tree(root->right);
    if(left_height_of_the_tree>right_height_of_the_tree){
        return left_height_of_the_tree+1;
    }
    else{
        return right_height_of_the_tree+1;
    }
}

void display(struct node *root){
    if(root==NULL){
        return ;



    }
    display(root->left);
    display(root->right);
    printf("%d ",root->data);
}


int main(){
    struct node *root=NULL;
    root=creation(root);
    int height_of_the_tree=count_height_of_the_tree(root);
    display(root);
    printf("height of the tree is:%d\n",height_of_the_tree);



    return 0;
}
    
    
    