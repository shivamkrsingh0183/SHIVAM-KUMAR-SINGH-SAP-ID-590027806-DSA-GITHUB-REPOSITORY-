#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *left;
    struct node *right;
};
struct node *creation(){
    int value;
    printf("enter data -1 for null:\n");
    scanf("%d",&value);


if(value==-1){
    return NULL;
}
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=value;
    printf("enter leftnode for %d ",value);
    newnode->left=creation();
    printf("enter rightnode for %d\n",value);
newnode->right=creation();
return newnode;



}
struct node *bst_insert(struct node *root,int value){
struct node *newnode=(struct node *)malloc(sizeof(struct node));
newnode->data=value;
newnode->right=NULL;
newnode->left=NULL;
    if(root==NULL){
return newnode;

}
if(root->data>value){
    root->left= bst_insert(root->left,value);
}
else if(root->data<value){

    root->right= bst_insert(root->right,value);
}



    return root;

}
void display(struct node *root){
    if(root==NULL){
        return;
    }

    printf("%d \n",root->data);
    display(root->left);
    display(root->right);
}
int main(){
    struct node *root=NULL;

int value;
printf("enter the value you want to insert in the bst\n");
scanf("%d",&value);
    root=creation();


    
    root=bst_insert(root,value);
    display(root);

    return 0;
}

