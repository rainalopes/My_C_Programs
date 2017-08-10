#include<stdio.h>
void main()

struct node
{
int data;
struct node*left;
struct node*right;
} *root,*new,*traverse;
 struct node*getnode()
{
return (struct node*)(malloc(sizeof(struct node)));
}
 
 insert(int value)
 {
 if(root==NULL)
 {
 printf("Enter the root element");
 new=getnode();
 new->data=value;
 new->left=NULL;
 new->right=NULL;
 }
 else
 {
 if(value<root->data)
 {
 if(root->left==NULL)
 {
 new=getnode();
 new->left=NULL;
 new->right=NULL;
 root->left=new;
 }
 else
 {
 insert(value);
 }}
 else
 {
 if(root->right==NULL)
 {
 new=getnode();
 new->left=NULL;
 new->right=NULL;
 root->right=new;
 }
 else
 {
 insert(value);
 }}
 }
 }
